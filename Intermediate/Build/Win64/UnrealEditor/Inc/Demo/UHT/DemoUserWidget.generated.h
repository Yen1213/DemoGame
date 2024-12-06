// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/DemoUserWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEMO_DemoUserWidget_generated_h
#error "DemoUserWidget.generated.h already included, missing '#pragma once' in DemoUserWidget.h"
#endif
#define DEMO_DemoUserWidget_generated_h

#define FID_UE_Projects_Demo_Source_Demo_Public_UI_DemoUserWidget_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDemoUserWidget(); \
	friend struct Z_Construct_UClass_UDemoUserWidget_Statics; \
public: \
	DECLARE_CLASS(UDemoUserWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Demo"), NO_API) \
	DECLARE_SERIALIZER(UDemoUserWidget)


#define FID_UE_Projects_Demo_Source_Demo_Public_UI_DemoUserWidget_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDemoUserWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDemoUserWidget(UDemoUserWidget&&); \
	UDemoUserWidget(const UDemoUserWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDemoUserWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDemoUserWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDemoUserWidget) \
	NO_API virtual ~UDemoUserWidget();


#define FID_UE_Projects_Demo_Source_Demo_Public_UI_DemoUserWidget_h_9_PROLOG
#define FID_UE_Projects_Demo_Source_Demo_Public_UI_DemoUserWidget_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE_Projects_Demo_Source_Demo_Public_UI_DemoUserWidget_h_12_INCLASS_NO_PURE_DECLS \
	FID_UE_Projects_Demo_Source_Demo_Public_UI_DemoUserWidget_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEMO_API UClass* StaticClass<class UDemoUserWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_Projects_Demo_Source_Demo_Public_UI_DemoUserWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
