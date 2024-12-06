// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/DemoUserWidget.h"
#include "Character/Abilities/AttributeSets/CharacterAttributeSetBase.h"
#include "Player/DemoPlayerState.h"



void UDemoUserWidget::BindToAttribute()
{
    const ADemoPlayerState* DemoPlayerState = Cast<ADemoPlayerState>(GetOwningPlayerState());
    if (!DemoPlayerState) return;

    UAbilitySystemComponent* ASC = DemoPlayerState->GetAbilitySystemComponent();
    const UCharacterAttributeSetBase* DemoAS = DemoPlayerState->GetAttributeSetBase();

    HealthPercent = NUMERIC_VALUE(DemoAS, Health) / NUMERIC_VALUE(DemoAS, MaxHealth);
    StaminaPercent = NUMERIC_VALUE(DemoAS, Stamina) / NUMERIC_VALUE(DemoAS, MaxStamina);
  
    ASC ->GetGameplayAttributeValueChangeDelegate(DemoAS->GetHealthAttribute()).AddLambda(
        [this, DemoAS](const FOnAttributeChangeData& Data) -> void
        {
            
           HealthPercent = Data.NewValue / DemoAS->GetMaxHealth();

        });

    ASC ->GetGameplayAttributeValueChangeDelegate(DemoAS->GetStaminaAttribute()).AddLambda(
        [this, DemoAS](const FOnAttributeChangeData& Data) -> void
        {
        
            StaminaPercent = Data.NewValue / DemoAS->GetMaxStamina();

        });
}