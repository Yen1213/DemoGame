// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "DemoCharacterBase.generated.h"
#include "AbilitySystemInterface.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParams(FCharacterDiedDelegate, ADemoCharacterBase*, character);


UCLASS()
class DEMO_API ADemoCharacterBase : public ACharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ADemoCharacterBase(const class FObjectInitializer& ObjectInitializer);

	UPROPERTY(BlueprintAssignable, Category = "Demo|Character")
	FCharacterDiedDelegate OnCharacterDied;

	UPROPERTY(BlueprintCallable, Category = "Demo|Character")
	virtual bool IsAlive() const;

	UPROPERTY(BlueprintCallable, Category = "Demo|Character")
	virtual int32 GetAbilityLevel(DemoAbilityID AbilityID) const;

	virtual void RemoveCharacterAbilities();

	virtual void Die();

	//Getters
	UPROPERTY(BlueprintCallable, Category = "Demo|Character")
	virtual void FinishDying();

	UFUNCTION(BlueprintCallable, Categoru = "Demo|Character|Attribute")
	float GetHealth() const;

	UFUNCTION(BlueprintCallable, Categoru = "Demo|Character|Attribute")
	float GetMaxHealth() const;

	UFUNCTION(BlueprintCallable, Categoru = "Demo|Character|Attribute")
	float GetStamina() const;

	UFUNCTION(BlueprintCallable, Categoru = "Demo|Character|Attribute")
	float GetMaxStamina() const;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	TWeakObjectPtr<class CharacterAbilitySystemComponent> AbilitySystemComponent;
	TWeakObjectPtr<class CharacterAttributeSetBase> AttributeSetBase;

	FGameplayTag DeadTag;
	FGameplayTag EffectRemoveOnDeathTag;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Demo|Chatacter")
	FText CharacterName;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Demo|Animation")
	UAnimMontage* DeathMontage;
	
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Demo|Abilities")
	TSubclassOf<class UGameplayEffect> DefaultAttributes;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Demo|Abilities")
	TArray<class UGameplayEffect> StartupEffects;

	virtual void AddCharacterAbilities();

	virtual void InitializeAttributes();

	virtual void AddStartupEffects();

	virtual void SetHealth(float Health);

	virtual void SetStamina(float Stamina);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;
};