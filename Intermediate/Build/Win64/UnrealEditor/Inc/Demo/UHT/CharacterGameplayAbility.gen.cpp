// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Demo/Public/Character/Abilities/CharacterGameplayAbility.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterGameplayAbility() {}

// Begin Cross Module References
DEMO_API UClass* Z_Construct_UClass_UCharacterGameplayAbility();
DEMO_API UClass* Z_Construct_UClass_UCharacterGameplayAbility_NoRegister();
DEMO_API UEnum* Z_Construct_UEnum_Demo_DemoAbilityID();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
UPackage* Z_Construct_UPackage__Script_Demo();
// End Cross Module References

// Begin Class UCharacterGameplayAbility
void UCharacterGameplayAbility::StaticRegisterNativesUCharacterGameplayAbility()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCharacterGameplayAbility);
UClass* Z_Construct_UClass_UCharacterGameplayAbility_NoRegister()
{
	return UCharacterGameplayAbility::StaticClass();
}
struct Z_Construct_UClass_UCharacterGameplayAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Character/Abilities/CharacterGameplayAbility.h" },
		{ "ModuleRelativePath", "Public/Character/Abilities/CharacterGameplayAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityInputID_MetaData[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Public/Character/Abilities/CharacterGameplayAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityID_MetaData[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Public/Character/Abilities/CharacterGameplayAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivateAbilityOnGranted_MetaData[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Public/Character/Abilities/CharacterGameplayAbility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_AbilityInputID_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AbilityInputID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AbilityID_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AbilityID;
	static void NewProp_ActivateAbilityOnGranted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ActivateAbilityOnGranted;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterGameplayAbility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCharacterGameplayAbility_Statics::NewProp_AbilityInputID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCharacterGameplayAbility_Statics::NewProp_AbilityInputID = { "AbilityInputID", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterGameplayAbility, AbilityInputID), Z_Construct_UEnum_Demo_DemoAbilityID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityInputID_MetaData), NewProp_AbilityInputID_MetaData) }; // 2189134072
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCharacterGameplayAbility_Statics::NewProp_AbilityID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCharacterGameplayAbility_Statics::NewProp_AbilityID = { "AbilityID", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterGameplayAbility, AbilityID), Z_Construct_UEnum_Demo_DemoAbilityID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityID_MetaData), NewProp_AbilityID_MetaData) }; // 2189134072
void Z_Construct_UClass_UCharacterGameplayAbility_Statics::NewProp_ActivateAbilityOnGranted_SetBit(void* Obj)
{
	((UCharacterGameplayAbility*)Obj)->ActivateAbilityOnGranted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCharacterGameplayAbility_Statics::NewProp_ActivateAbilityOnGranted = { "ActivateAbilityOnGranted", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCharacterGameplayAbility), &Z_Construct_UClass_UCharacterGameplayAbility_Statics::NewProp_ActivateAbilityOnGranted_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivateAbilityOnGranted_MetaData), NewProp_ActivateAbilityOnGranted_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacterGameplayAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterGameplayAbility_Statics::NewProp_AbilityInputID_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterGameplayAbility_Statics::NewProp_AbilityInputID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterGameplayAbility_Statics::NewProp_AbilityID_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterGameplayAbility_Statics::NewProp_AbilityID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterGameplayAbility_Statics::NewProp_ActivateAbilityOnGranted,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterGameplayAbility_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCharacterGameplayAbility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_Demo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterGameplayAbility_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCharacterGameplayAbility_Statics::ClassParams = {
	&UCharacterGameplayAbility::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCharacterGameplayAbility_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterGameplayAbility_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterGameplayAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_UCharacterGameplayAbility_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCharacterGameplayAbility()
{
	if (!Z_Registration_Info_UClass_UCharacterGameplayAbility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCharacterGameplayAbility.OuterSingleton, Z_Construct_UClass_UCharacterGameplayAbility_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCharacterGameplayAbility.OuterSingleton;
}
template<> DEMO_API UClass* StaticClass<UCharacterGameplayAbility>()
{
	return UCharacterGameplayAbility::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterGameplayAbility);
UCharacterGameplayAbility::~UCharacterGameplayAbility() {}
// End Class UCharacterGameplayAbility

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_Projects_Demo_Source_Demo_Public_Character_Abilities_CharacterGameplayAbility_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCharacterGameplayAbility, UCharacterGameplayAbility::StaticClass, TEXT("UCharacterGameplayAbility"), &Z_Registration_Info_UClass_UCharacterGameplayAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCharacterGameplayAbility), 356462535U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_Demo_Source_Demo_Public_Character_Abilities_CharacterGameplayAbility_h_1273651464(TEXT("/Script/Demo"),
	Z_CompiledInDeferFile_FID_UE_Projects_Demo_Source_Demo_Public_Character_Abilities_CharacterGameplayAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_Demo_Source_Demo_Public_Character_Abilities_CharacterGameplayAbility_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
