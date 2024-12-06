// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/DemoPlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEMO_DemoPlayerController_generated_h
#error "DemoPlayerController.generated.h already included, missing '#pragma once' in DemoPlayerController.h"
#endif
#define DEMO_DemoPlayerController_generated_h

#define FID_UE_Projects_Demo_Source_Demo_Public_Player_DemoPlayerController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADemoPlayerController(); \
	friend struct Z_Construct_UClass_ADemoPlayerController_Statics; \
public: \
	DECLARE_CLASS(ADemoPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Demo"), NO_API) \
	DECLARE_SERIALIZER(ADemoPlayerController)


#define FID_UE_Projects_Demo_Source_Demo_Public_Player_DemoPlayerController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADemoPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADemoPlayerController(ADemoPlayerController&&); \
	ADemoPlayerController(const ADemoPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADemoPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADemoPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADemoPlayerController) \
	NO_API virtual ~ADemoPlayerController();


#define FID_UE_Projects_Demo_Source_Demo_Public_Player_DemoPlayerController_h_12_PROLOG
#define FID_UE_Projects_Demo_Source_Demo_Public_Player_DemoPlayerController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE_Projects_Demo_Source_Demo_Public_Player_DemoPlayerController_h_15_INCLASS_NO_PURE_DECLS \
	FID_UE_Projects_Demo_Source_Demo_Public_Player_DemoPlayerController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEMO_API UClass* StaticClass<class ADemoPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_Projects_Demo_Source_Demo_Public_Player_DemoPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
