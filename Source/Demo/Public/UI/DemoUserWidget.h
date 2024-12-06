// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "DemoUserWidget.generated.h"

UCLASS()
class DEMO_API UDemoUserWidget : public UUserWidget
{
	GENERATED_BODY()
public: 
	void BindToAttribute();
	
protected:
	UPROPERTY(BlueprintReadOnly)
	float HealthPercent;

	UPROPERTY(BlueprintReadOnly)
	float StaminaPercent;
};
