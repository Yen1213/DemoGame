// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/DemoCharacterBase.h"
#include "Components/CapsuleComponent.h"
#include "AbilitySystemComponent.h"
#include "Character/Abilities/CharacterAbilitySystemComponent.h"
#include "Character/Abilities/AttributeSets/CharacterAttributeSetBase.h"
#include "Character/Abilities/CharacterGameplayAbility.h"
#include "GameFramework/CharacterMovementComponent.h"

// Sets default values
ADemoCharacterBase::ADemoCharacterBase(const class FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UCharacterMovementComponent>(ACharacter::CharacterMovementComponentName))
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	GetCapsuleComponent()->SetCollisionResponseToChannel(ECollisionChannel::ECC_Visibility, ECollisionResponse::ECR_Overlap);

	bAlwaysRelevant = true;

	DeadTag = FGameplayTag::RequestGameplayTag(FName("State.Dead"));
	EffectRemoveOnDeathTag = FGameplayTag::RequestGameplayTag(FName("State.RemoveOnDeath"));

}

UAbilitySystemComponent* ADemoCharacterBase::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent.Get();
}

bool ADemoCharacterBase::IsAlive() const
{
	return GetHealth() > 0.0f;
}

int32 ADemoCharacterBase::GetAbilityLevel(DemoAbilityID AbilityID) const
{
	return 1;
}

void ADemoCharacterBase::RemoveCharacterAbilities()
{
	if (GetLocalRole() != ROLE_Authority || !AbilitySystemComponent.IsValid() || !AbilitySystemComponent->CharacterAbilitiesGiven)
	{
		return;
	}

	TArray<FGameplayAbilitySpecHandle> AbilitiesToRemove;
	for (const FGameplayAbilitySpec& Spec : AbilitySystemComponent->GetActivatableAbilities())
	{
		if ((Spec.SourceObject == this) && CharacterAbilities.Contains(Spec.Ability->GetClass()))
		{
			AbilitiesToRemove.Add(Spec.Handle);
		}
	}

	for (int32 i = 0; i < AbilitiesToRemove.Num(); i++)
	{
		AbilitySystemComponent->ClearAbility(AbilitiesToRemove[i]);
	}

	AbilitySystemComponent->CharacterAbilitiesGiven = false;
}

float ADemoCharacterBase::GetCharacterLevel() const
{
	if (AttributeSetBase->GetLevel()) {
		return AttributeSetBase->GetLevel();
	}
	return 0.0f;
}

float ADemoCharacterBase::GetHealth() const
{
	if (AttributeSetBase->GetHealth()) {
		return AttributeSetBase->GetHealth();
	}
	return 0.0f;
}

float ADemoCharacterBase::GetStamina() const
{
	if (AttributeSetBase->GetStamina()) {
		return AttributeSetBase->GetStamina();
	}
	return 0.0f;
}

float ADemoCharacterBase::GetMaxHealth() const
{
	if (AttributeSetBase->GetMaxHealth()) {
		return AttributeSetBase->GetMaxHealth();
	}
	return 0.0f;
}

float ADemoCharacterBase::GetMaxStamina() const
{
	if (AttributeSetBase->GetMaxStamina()) {
		return AttributeSetBase->GetMaxStamina();
	}
	return 0.0f;
}

void ADemoCharacterBase::Die() {
	RemoveCharacterAbilities();

	GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	GetCharacterMovement()->GravityScale = 1;
	GetCharacterMovement()->Velocity = FVector(0);

	OnCharacterDied.Broadcast(this);

	if (AbilitySystemComponent.IsValid()) {
		AbilitySystemComponent->CancelAbilities();

		FGameplayTagContainer EffectTagsToRemove;
		EffectTagsToRemove.AddTag(EffectRemoveOnDeathTag);
		int32 NumEffectsRemoved = AbilitySystemComponent->RemoveActiveEffectsWithTags(EffectTagsToRemove);
		AbilitySystemComponent->AddLooseGameplayTag(DeadTag);
	}
	if (DeathMontage)
	{
		PlayAnimMontage(DeathMontage);
	}
	else
	{
		FinishDying();
	}
}

void ADemoCharacterBase::FinishDying() {
	Destroy();

}

// Called when the game starts or when spawned
void ADemoCharacterBase::BeginPlay()
{
	Super::BeginPlay();

}

void ADemoCharacterBase::AddCharacterAbilities()
{
	if (GetLocalRole() != ROLE_Authority || !AbilitySystemComponent.IsValid() || !AbilitySystemComponent->CharacterAbilitiesGiven)
	{
		return;
	}

	for (TSubclassOf<UCharacterGameplayAbility>& StartupAbility : CharacterAbilities) {
		AbilitySystemComponent->GiveAbility(FGameplayAbilitySpec(StartupAbility, GetAbilityLevel(StartupAbility.GetDefaultObject()->AbilityID), static_cast<int32>(StartupAbility.GetDefaultObject()->AbilityInputID), this));
	}

	AbilitySystemComponent->CharacterAbilitiesGiven = true;
}

void ADemoCharacterBase::AddStartupEffects()
{
	if (GetLocalRole() != ROLE_Authority || !AbilitySystemComponent.IsValid() || AbilitySystemComponent->StartupEffectsApplied)
	{
		return;
	}
	FGameplayEffectContextHandle EffectContext = AbilitySystemComponent->MakeEffectContext();
	EffectContext.AddSourceObject(this);

	for (TSubclassOf<UGameplayEffect> GameplayEffect : StartupEffects)
	{
		FGameplayEffectSpecHandle NewHandle = AbilitySystemComponent->MakeOutgoingSpec(GameplayEffect, GetCharacterLevel(), EffectContext);
		if (NewHandle.IsValid()) {
			FActiveGameplayEffectHandle ActiveGEHandle = AbilitySystemComponent->ApplyGameplayEffectSpecToTarget(*NewHandle.Data.Get(), AbilitySystemComponent.Get());

		}
	}
	AbilitySystemComponent->StartupEffectsApplied = true;

}

void ADemoCharacterBase::SetHealth(float Health)
{
	if (AttributeSetBase.IsValid()) {
		AttributeSetBase->SetHealth(Health);
	}
}

void ADemoCharacterBase::SetMaxHealth(float MaxHealth)
{
	if (AttributeSetBase.IsValid()) {
		AttributeSetBase->SetMaxHealth(MaxHealth);
	}
}

void ADemoCharacterBase::SetStamina(float Stamina)
{
	if (AttributeSetBase.IsValid()) {
		AttributeSetBase->SetStamina(Stamina);
	}
}

void ADemoCharacterBase::SetMaxStamina(float MaxStamina)
{
	if (AttributeSetBase.IsValid()) {
		AttributeSetBase->SetMaxStamina(MaxStamina);
	}
}


void ADemoCharacterBase::InitializeAttributes()
{
	if (AbilitySystemComponent.IsValid())
	{
		return;
	}

	if (!DefaultAttributes)
	{
	UE_LOG(LogTemp, Error, TEXT("%s() Missing DefaultAttributes for %s. Please fill in the character's Blueprint"), *FString(__FUNCTION__), *GetName());
		return;

	}
	FGameplayEffectContextHandle EffectContext = AbilitySystemComponent->MakeEffectContext();
	EffectContext.AddSourceObject(this);

	FGameplayEffectSpecHandle NewHandle = AbilitySystemComponent->MakeOutgoingSpec(DefaultAttributes, GetCharacterLevel(), EffectContext);
	if (NewHandle.IsValid()) {
		FActiveGameplayEffectHandle ActiveGEHandle = AbilitySystemComponent->ApplyGameplayEffectSpecToTarget(*NewHandle.Data.Get(), AbilitySystemComponent.Get());

	}
}




