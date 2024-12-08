#include "Character/Player/DemoPlayerCharacterBase.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "AI/PlayerAIController.h"
#include "Player/DemoPlayerState.h"
#include "Player/DemoPlayerController.h"
#include "Character/Abilities/CharacterAbilitySystemComponent.h"
#include "UI/DemoHUD.h"
#include "Net/UnrealNetwork.h"
#include "Kismet/KismetMathLibrary.h"

ADemoPlayerCharacterBase::ADemoPlayerCharacterBase(const class FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(FName("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->bUsePawnControlRotation = true;
	CameraBoom->SetRelativeLocation(FVector(0, 0, 70));

	FollowCamera = CreateDefaultSubobject<UCameraComponent>(FName("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom);
	FollowCamera->FieldOfView = 80.0f;

	GetCapsuleComponent()->SetCollisionResponseToChannel(ECollisionChannel::ECC_Camera, ECollisionResponse::ECR_Ignore);

	GetMesh()->VisibilityBasedAnimTickOption = EVisibilityBasedAnimTickOption::AlwaysTickPoseAndRefreshBones;
	GetMesh()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	GetMesh()->SetCollisionProfileName(FName("NoCollision"));

	AIControllerClass = APlayerAIController::StaticClass();

	DeadTag = FGameplayTag::RequestGameplayTag(FName("State.Dead"));
}

void ADemoPlayerCharacterBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveForward", this, &ADemoPlayerCharacterBase::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ADemoPlayerCharacterBase::MoveRight);
	PlayerInputComponent->BindAxis("LookUp", this, &ADemoPlayerCharacterBase::LookUp);
	PlayerInputComponent->BindAxis("LookUpRate", this, &ADemoPlayerCharacterBase::LookUpRate);
	PlayerInputComponent->BindAxis("Turn", this, &ADemoPlayerCharacterBase::Turn);
	PlayerInputComponent->BindAxis("TurnRate", this, &ADemoPlayerCharacterBase::TurnRate);

	BindASCInput();
}

void ADemoPlayerCharacterBase::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);

	ADemoPlayerState* PS = GetPlayerState<ADemoPlayerState>();
	if (PS)
	{
		InitializeStartingValues(PS);
		AddStartupEffects();
		AddCharacterAbilities();
		InitHUD();
	}
}

USpringArmComponent* ADemoPlayerCharacterBase::GetCameraBoom()
{
	return CameraBoom;
}

UCameraComponent* ADemoPlayerCharacterBase::GetFollowCamera()
{
	return FollowCamera;
}

float ADemoPlayerCharacterBase::GetStartingCameraBoomArmLength()
{
	return StartingCameraBoomArmLength;
}

FVector ADemoPlayerCharacterBase::GetStartingCameraBoomLocation()
{
	return StartingCameraBoomLocation;
}

void ADemoPlayerCharacterBase::BeginPlay()
{
	Super::BeginPlay();

	StartingCameraBoomArmLength = CameraBoom->TargetArmLength;
	StartingCameraBoomLocation = CameraBoom->GetRelativeLocation();
}

void ADemoPlayerCharacterBase::LookUp(float Value)
{
	if (IsAlive())
	{
		AddControllerPitchInput(Value);
	}
}

void ADemoPlayerCharacterBase::LookUpRate(float Value)
{
	if (IsAlive())
	{
		AddControllerPitchInput(Value * BaseLookUpRate * GetWorld()->DeltaTimeSeconds);
	}
}

void ADemoPlayerCharacterBase::Turn(float Value)
{
	if (IsAlive())
	{
		AddControllerYawInput(Value);
	}
}

void ADemoPlayerCharacterBase::TurnRate(float Value)
{
	if (IsAlive())
	{
		AddControllerYawInput(Value * BaseTurnRate * GetWorld()->DeltaTimeSeconds);
	}
}

void ADemoPlayerCharacterBase::MoveForward(float Value)
{
	if (IsAlive())
	{
		FVector ForwardDirection = UKismetMathLibrary::GetForwardVector(FRotator(0, GetControlRotation().Yaw, 0));
		AddMovementInput(ForwardDirection, Value);

		UpdateMeshRotation(0.0f, -Value);
	}
}

void ADemoPlayerCharacterBase::MoveRight(float Value)
{
	if (IsAlive())
	{
		FVector RightDirection = UKismetMathLibrary::GetRightVector(FRotator(0, GetControlRotation().Yaw, 0));
		AddMovementInput(RightDirection, Value);

		if (!FMath::IsNearlyZero(Value))
		{
			UpdateMeshRotation(Value, 0.0f);
		}
	}
}

void ADemoPlayerCharacterBase::UpdateMeshRotation(float RightValue, float ForwardValue)
{
	FVector MovementDirection = FVector(RightValue, ForwardValue, 0.0f);

	if (!MovementDirection.IsNearlyZero())
	{
		MovementDirection.Normalize();
		FRotator ControlRotation = FRotator(0.0f, GetControlRotation().Yaw, 0.0f);
		FVector WorldDirection = ControlRotation.RotateVector(MovementDirection);

		FRotator TargetRotation = WorldDirection.Rotation();

		FRotator CurrentRotation = GetMesh()->GetComponentRotation();
		FRotator SmoothRotation = FMath::RInterpTo(CurrentRotation, TargetRotation, GetWorld()->DeltaTimeSeconds, 10.0f);

		SmoothRotation.Pitch = 0.0f;
		SmoothRotation.Roll = 0.0f;

		GetMesh()->SetWorldRotation(SmoothRotation);

		ReplicatedMeshRotation = SmoothRotation;
	}
}

void ADemoPlayerCharacterBase::OnRep_MeshRotation()
{
	GetMesh()->SetWorldRotation(ReplicatedMeshRotation);
}

void ADemoPlayerCharacterBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ADemoPlayerCharacterBase, ReplicatedMeshRotation);
}

void ADemoPlayerCharacterBase::OnRep_PlayerState()
{
	Super::OnRep_PlayerState();

	ADemoPlayerState* PS = GetPlayerState<ADemoPlayerState>();
	if (PS)
	{
		InitializeStartingValues(PS);
		BindASCInput();
	}
}

void ADemoPlayerCharacterBase::InitializeStartingValues(ADemoPlayerState* PS)
{
	AbilitySystemComponent = Cast<UCharacterAbilitySystemComponent>(PS->GetAbilitySystemComponent());
	PS->GetAbilitySystemComponent()->InitAbilityActorInfo(PS, this);
	AttributeSetBase = PS->GetAttributeSetBase();
	AbilitySystemComponent->SetTagMapCount(DeadTag, 0);

	InitializeAttributes();
	SetMaxHealth(100.0f);
	SetMaxStamina(200.0f);
	SetHealth(GetMaxHealth());
	SetStamina(GetMaxStamina());
	InitHUD();
}

void ADemoPlayerCharacterBase::BindASCInput()
{
	if (!ASCInputBound && AbilitySystemComponent.IsValid() && IsValid(InputComponent))
	{
		AbilitySystemComponent->BindAbilityActivationToInputComponent(InputComponent, FGameplayAbilityInputBinds(FString("ConfirmTarget"), FString("CancelTarget"), FString("DemoAbilityID"), static_cast<int32>(DemoAbilityID::Confirm), static_cast<int32>(DemoAbilityID::Cancel)));

		ASCInputBound = true;
	}
}

void ADemoPlayerCharacterBase::InitHUD() const
{
	if (const ADemoPlayerController* DemoPlayerController = Cast<ADemoPlayerController>(GetController()))
	{
		if (ADemoHUD* DemoHUD = Cast<ADemoHUD>(DemoPlayerController->GetHUD()))
		{
			DemoHUD->Init();
		}
	}
}
