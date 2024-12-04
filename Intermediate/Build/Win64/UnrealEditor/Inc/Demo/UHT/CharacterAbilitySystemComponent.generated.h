// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/Abilities/CharacterAbilitySystemComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCharacterAbilitySystemComponent;
#ifdef DEMO_CharacterAbilitySystemComponent_generated_h
#error "CharacterAbilitySystemComponent.generated.h already included, missing '#pragma once' in CharacterAbilitySystemComponent.h"
#endif
#define DEMO_CharacterAbilitySystemComponent_generated_h

#define FID_UE_Projects_Demo_Source_Demo_Public_Character_Abilities_CharacterAbilitySystemComponent_h_9_DELEGATE \
DEMO_API void FReceivedDamageDelegate_DelegateWrapper(const FMulticastScriptDelegate& ReceivedDamageDelegate, UCharacterAbilitySystemComponent* SourceASC, float UnmitigatedDamage, float MitigatedDamage);


#define FID_UE_Projects_Demo_Source_Demo_Public_Character_Abilities_CharacterAbilitySystemComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCharacterAbilitySystemComponent(); \
	friend struct Z_Construct_UClass_UCharacterAbilitySystemComponent_Statics; \
public: \
	DECLARE_CLASS(UCharacterAbilitySystemComponent, UAbilitySystemComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Demo"), NO_API) \
	DECLARE_SERIALIZER(UCharacterAbilitySystemComponent)


#define FID_UE_Projects_Demo_Source_Demo_Public_Character_Abilities_CharacterAbilitySystemComponent_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCharacterAbilitySystemComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCharacterAbilitySystemComponent(UCharacterAbilitySystemComponent&&); \
	UCharacterAbilitySystemComponent(const UCharacterAbilitySystemComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCharacterAbilitySystemComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCharacterAbilitySystemComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCharacterAbilitySystemComponent) \
	NO_API virtual ~UCharacterAbilitySystemComponent();


#define FID_UE_Projects_Demo_Source_Demo_Public_Character_Abilities_CharacterAbilitySystemComponent_h_12_PROLOG
#define FID_UE_Projects_Demo_Source_Demo_Public_Character_Abilities_CharacterAbilitySystemComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE_Projects_Demo_Source_Demo_Public_Character_Abilities_CharacterAbilitySystemComponent_h_15_INCLASS_NO_PURE_DECLS \
	FID_UE_Projects_Demo_Source_Demo_Public_Character_Abilities_CharacterAbilitySystemComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEMO_API UClass* StaticClass<class UCharacterAbilitySystemComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_Projects_Demo_Source_Demo_Public_Character_Abilities_CharacterAbilitySystemComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
