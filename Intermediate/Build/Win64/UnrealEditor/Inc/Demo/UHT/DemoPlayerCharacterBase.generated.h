// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/Player/DemoPlayerCharacterBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEMO_DemoPlayerCharacterBase_generated_h
#error "DemoPlayerCharacterBase.generated.h already included, missing '#pragma once' in DemoPlayerCharacterBase.h"
#endif
#define DEMO_DemoPlayerCharacterBase_generated_h

#define FID_UE_Projects_Demo_Source_Demo_Public_Character_Player_DemoPlayerCharacterBase_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_MeshRotation); \
	DECLARE_FUNCTION(execGetStartingCameraBoomLocation); \
	DECLARE_FUNCTION(execGetStartingCameraBoomArmLength);


#define FID_UE_Projects_Demo_Source_Demo_Public_Character_Player_DemoPlayerCharacterBase_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADemoPlayerCharacterBase(); \
	friend struct Z_Construct_UClass_ADemoPlayerCharacterBase_Statics; \
public: \
	DECLARE_CLASS(ADemoPlayerCharacterBase, ADemoCharacterBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Demo"), NO_API) \
	DECLARE_SERIALIZER(ADemoPlayerCharacterBase) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedMeshRotation=NETFIELD_REP_START, \
		NETFIELD_REP_END=ReplicatedMeshRotation	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_UE_Projects_Demo_Source_Demo_Public_Character_Player_DemoPlayerCharacterBase_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADemoPlayerCharacterBase(ADemoPlayerCharacterBase&&); \
	ADemoPlayerCharacterBase(const ADemoPlayerCharacterBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADemoPlayerCharacterBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADemoPlayerCharacterBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADemoPlayerCharacterBase) \
	NO_API virtual ~ADemoPlayerCharacterBase();


#define FID_UE_Projects_Demo_Source_Demo_Public_Character_Player_DemoPlayerCharacterBase_h_8_PROLOG
#define FID_UE_Projects_Demo_Source_Demo_Public_Character_Player_DemoPlayerCharacterBase_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE_Projects_Demo_Source_Demo_Public_Character_Player_DemoPlayerCharacterBase_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE_Projects_Demo_Source_Demo_Public_Character_Player_DemoPlayerCharacterBase_h_11_INCLASS_NO_PURE_DECLS \
	FID_UE_Projects_Demo_Source_Demo_Public_Character_Player_DemoPlayerCharacterBase_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEMO_API UClass* StaticClass<class ADemoPlayerCharacterBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_Projects_Demo_Source_Demo_Public_Character_Player_DemoPlayerCharacterBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
