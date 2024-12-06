// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/Player/DemoPlayerCharacterBase.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "AI/PlayerAIController.h"
#include "Player/DemoPlayerState.h"
#include "Player/DemoPlayerController.h"
#include "Character/Abilities/CharacterAbilitySystemComponent.h"
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
		AddMovementInput(UKismetMathLibrary::GetForwardVector(FRotator(0, GetControlRotation().Yaw, 0)), Value);
	}
}

void ADemoPlayerCharacterBase::MoveRight(float Value)
{
	if (IsAlive())
	{
		AddMovementInput(UKismetMathLibrary::GetRightVector(FRotator(0, GetControlRotation().Yaw, 0)), Value);
	}

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
	SetHealth(GetMaxHealth());
	SetStamina(GetMaxStamina());
}



void ADemoPlayerCharacterBase::BindASCInput()
{
	if (!ASCInputBound && AbilitySystemComponent.IsValid() && IsValid(InputComponent))
	{
		AbilitySystemComponent->BindAbilityActivationToInputComponent(InputComponent, FGameplayAbilityInputBinds(FString("ConfirmTarget"), FString("CancelTarget"), FString("DemoAbilityID"), static_cast<int32>(DemoAbilityID::Confirm), static_cast<int32>(DemoAbilityID::Cancel)));

		ASCInputBound = true;
	}
}


