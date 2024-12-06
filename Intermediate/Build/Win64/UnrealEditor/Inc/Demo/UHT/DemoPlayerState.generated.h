// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/DemoPlayerState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEMO_DemoPlayerState_generated_h
#error "DemoPlayerState.generated.h already included, missing '#pragma once' in DemoPlayerState.h"
#endif
#define DEMO_DemoPlayerState_generated_h

#define FID_UE_Projects_Demo_Source_Demo_Public_Player_DemoPlayerState_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMaxStamina); \
	DECLARE_FUNCTION(execGetStamina); \
	DECLARE_FUNCTION(execGetMaxHealth); \
	DECLARE_FUNCTION(execGetHealth); \
	DECLARE_FUNCTION(execGetCharacterLevel); \
	DECLARE_FUNCTION(execShowAbilityConfirmCancelText); \
	DECLARE_FUNCTION(execIsAlive);


#define FID_UE_Projects_Demo_Source_Demo_Public_Player_DemoPlayerState_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADemoPlayerState(); \
	friend struct Z_Construct_UClass_ADemoPlayerState_Statics; \
public: \
	DECLARE_CLASS(ADemoPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Demo"), NO_API) \
	DECLARE_SERIALIZER(ADemoPlayerState) \
	virtual UObject* _getUObject() const override { return const_cast<ADemoPlayerState*>(this); }


#define FID_UE_Projects_Demo_Source_Demo_Public_Player_DemoPlayerState_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADemoPlayerState(ADemoPlayerState&&); \
	ADemoPlayerState(const ADemoPlayerState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADemoPlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADemoPlayerState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADemoPlayerState) \
	NO_API virtual ~ADemoPlayerState();


#define FID_UE_Projects_Demo_Source_Demo_Public_Player_DemoPlayerState_h_12_PROLOG
#define FID_UE_Projects_Demo_Source_Demo_Public_Player_DemoPlayerState_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE_Projects_Demo_Source_Demo_Public_Player_DemoPlayerState_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE_Projects_Demo_Source_Demo_Public_Player_DemoPlayerState_h_15_INCLASS_NO_PURE_DECLS \
	FID_UE_Projects_Demo_Source_Demo_Public_Player_DemoPlayerState_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEMO_API UClass* StaticClass<class ADemoPlayerState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_Projects_Demo_Source_Demo_Public_Player_DemoPlayerState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
