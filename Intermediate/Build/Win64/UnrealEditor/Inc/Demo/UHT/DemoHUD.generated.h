// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/DemoHUD.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEMO_DemoHUD_generated_h
#error "DemoHUD.generated.h already included, missing '#pragma once' in DemoHUD.h"
#endif
#define DEMO_DemoHUD_generated_h

#define FID_UE_Projects_Demo_Source_Demo_Public_UI_DemoHUD_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADemoHUD(); \
	friend struct Z_Construct_UClass_ADemoHUD_Statics; \
public: \
	DECLARE_CLASS(ADemoHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Demo"), NO_API) \
	DECLARE_SERIALIZER(ADemoHUD)


#define FID_UE_Projects_Demo_Source_Demo_Public_UI_DemoHUD_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADemoHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADemoHUD(ADemoHUD&&); \
	ADemoHUD(const ADemoHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADemoHUD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADemoHUD); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADemoHUD) \
	NO_API virtual ~ADemoHUD();


#define FID_UE_Projects_Demo_Source_Demo_Public_UI_DemoHUD_h_14_PROLOG
#define FID_UE_Projects_Demo_Source_Demo_Public_UI_DemoHUD_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE_Projects_Demo_Source_Demo_Public_UI_DemoHUD_h_17_INCLASS_NO_PURE_DECLS \
	FID_UE_Projects_Demo_Source_Demo_Public_UI_DemoHUD_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEMO_API UClass* StaticClass<class ADemoHUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_Projects_Demo_Source_Demo_Public_UI_DemoHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
