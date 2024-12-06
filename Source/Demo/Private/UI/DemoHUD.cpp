// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/DemoHUD.h"
#include "UI/DemoUserWidget.h"

void ADemoHUD::Init()
{
	DemoUserWidget = CreateWidget<UDemoUserWidget>(GetOwningPlayerController(), DemoUserWidgetClass);
	DemoUserWidget->BindToAttribute();
	DemoUserWidget->AddToViewport();
}