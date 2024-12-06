// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/DemoCharacterBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADemoCharacterBase;
enum class DemoAbilityID : uint8;
#ifdef DEMO_DemoCharacterBase_generated_h
#error "DemoCharacterBase.generated.h already included, missing '#pragma once' in DemoCharacterBase.h"
#endif
#define DEMO_DemoCharacterBase_generated_h

#define FID_UE_Projects_Demo_Source_Demo_Public_Character_DemoCharacterBase_h_12_DELEGATE \
DEMO_API void FCharacterDiedDelegate_DelegateWrapper(const FMulticastScriptDelegate& CharacterDiedDelegate, ADemoCharacterBase* Character);


#define FID_UE_Projects_Demo_Source_Demo_Public_Character_DemoCharacterBase_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMaxStamina); \
	DECLARE_FUNCTION(execGetStamina); \
	DECLARE_FUNCTION(execGetMaxHealth); \
	DECLARE_FUNCTION(execGetHealth); \
	DECLARE_FUNCTION(execGetCharacterLevel); \
	DECLARE_FUNCTION(execFinishDying); \
	DECLARE_FUNCTION(execGetAbilityLevel); \
	DECLARE_FUNCTION(execIsAlive);


#define FID_UE_Projects_Demo_Source_Demo_Public_Character_DemoCharacterBase_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADemoCharacterBase(); \
	friend struct Z_Construct_UClass_ADemoCharacterBase_Statics; \
public: \
	DECLARE_CLASS(ADemoCharacterBase, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Demo"), NO_API) \
	DECLARE_SERIALIZER(ADemoCharacterBase) \
	virtual UObject* _getUObject() const override { return const_cast<ADemoCharacterBase*>(this); }


#define FID_UE_Projects_Demo_Source_Demo_Public_Character_DemoCharacterBase_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADemoCharacterBase(ADemoCharacterBase&&); \
	ADemoCharacterBase(const ADemoCharacterBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADemoCharacterBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADemoCharacterBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADemoCharacterBase) \
	NO_API virtual ~ADemoCharacterBase();


#define FID_UE_Projects_Demo_Source_Demo_Public_Character_DemoCharacterBase_h_15_PROLOG
#define FID_UE_Projects_Demo_Source_Demo_Public_Character_DemoCharacterBase_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE_Projects_Demo_Source_Demo_Public_Character_DemoCharacterBase_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE_Projects_Demo_Source_Demo_Public_Character_DemoCharacterBase_h_18_INCLASS_NO_PURE_DECLS \
	FID_UE_Projects_Demo_Source_Demo_Public_Character_DemoCharacterBase_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEMO_API UClass* StaticClass<class ADemoCharacterBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_Projects_Demo_Source_Demo_Public_Character_DemoCharacterBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
