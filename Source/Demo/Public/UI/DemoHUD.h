// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "UI/DemoUserWidget.h"
#include "DemoHUD.generated.h"

class UDemoUserWidget;
/**
 * 
 */
UCLASS()
class DEMO_API ADemoHUD : public AHUD
{
	GENERATED_BODY()

public:
	void Init();

protected:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UDemoUserWidget> DemoUserWidgetClass; 

private: 
	UPROPERTY(EditDefaultsOnly)
		TObjectPtr<UDemoUserWidget> DemoUserWidget;
};