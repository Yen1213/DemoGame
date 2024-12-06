// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AI/PlayerAIController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEMO_PlayerAIController_generated_h
#error "PlayerAIController.generated.h already included, missing '#pragma once' in PlayerAIController.h"
#endif
#define DEMO_PlayerAIController_generated_h

#define FID_UE_Projects_Demo_Source_Demo_Public_AI_PlayerAIController_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerAIController(); \
	friend struct Z_Construct_UClass_APlayerAIController_Statics; \
public: \
	DECLARE_CLASS(APlayerAIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Demo"), NO_API) \
	DECLARE_SERIALIZER(APlayerAIController)


#define FID_UE_Projects_Demo_Source_Demo_Public_AI_PlayerAIController_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APlayerAIController(APlayerAIController&&); \
	APlayerAIController(const APlayerAIController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerAIController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerAIController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerAIController) \
	NO_API virtual ~APlayerAIController();


#define FID_UE_Projects_Demo_Source_Demo_Public_AI_PlayerAIController_h_9_PROLOG
#define FID_UE_Projects_Demo_Source_Demo_Public_AI_PlayerAIController_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE_Projects_Demo_Source_Demo_Public_AI_PlayerAIController_h_12_INCLASS_NO_PURE_DECLS \
	FID_UE_Projects_Demo_Source_Demo_Public_AI_PlayerAIController_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEMO_API UClass* StaticClass<class APlayerAIController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_Projects_Demo_Source_Demo_Public_AI_PlayerAIController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
