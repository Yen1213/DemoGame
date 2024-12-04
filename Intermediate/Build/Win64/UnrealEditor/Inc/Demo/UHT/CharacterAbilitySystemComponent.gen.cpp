// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Demo/Public/Character/Abilities/CharacterAbilitySystemComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterAbilitySystemComponent() {}

// Begin Cross Module References
DEMO_API UClass* Z_Construct_UClass_UCharacterAbilitySystemComponent();
DEMO_API UClass* Z_Construct_UClass_UCharacterAbilitySystemComponent_NoRegister();
DEMO_API UFunction* Z_Construct_UDelegateFunction_Demo_ReceivedDamageDelegate__DelegateSignature();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent();
UPackage* Z_Construct_UPackage__Script_Demo();
// End Cross Module References

// Begin Delegate FReceivedDamageDelegate
struct Z_Construct_UDelegateFunction_Demo_ReceivedDamageDelegate__DelegateSignature_Statics
{
	struct _Script_Demo_eventReceivedDamageDelegate_Parms
	{
		UCharacterAbilitySystemComponent* SourceASC;
		float UnmitigatedDamage;
		float MitigatedDamage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/Abilities/CharacterAbilitySystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceASC_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceASC;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UnmitigatedDamage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MitigatedDamage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Demo_ReceivedDamageDelegate__DelegateSignature_Statics::NewProp_SourceASC = { "SourceASC", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Demo_eventReceivedDamageDelegate_Parms, SourceASC), Z_Construct_UClass_UCharacterAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceASC_MetaData), NewProp_SourceASC_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Demo_ReceivedDamageDelegate__DelegateSignature_Statics::NewProp_UnmitigatedDamage = { "UnmitigatedDamage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Demo_eventReceivedDamageDelegate_Parms, UnmitigatedDamage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Demo_ReceivedDamageDelegate__DelegateSignature_Statics::NewProp_MitigatedDamage = { "MitigatedDamage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Demo_eventReceivedDamageDelegate_Parms, MitigatedDamage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Demo_ReceivedDamageDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Demo_ReceivedDamageDelegate__DelegateSignature_Statics::NewProp_SourceASC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Demo_ReceivedDamageDelegate__DelegateSignature_Statics::NewProp_UnmitigatedDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Demo_ReceivedDamageDelegate__DelegateSignature_Statics::NewProp_MitigatedDamage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Demo_ReceivedDamageDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Demo_ReceivedDamageDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Demo, nullptr, "ReceivedDamageDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Demo_ReceivedDamageDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Demo_ReceivedDamageDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Demo_ReceivedDamageDelegate__DelegateSignature_Statics::_Script_Demo_eventReceivedDamageDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Demo_ReceivedDamageDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Demo_ReceivedDamageDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_Demo_ReceivedDamageDelegate__DelegateSignature_Statics::_Script_Demo_eventReceivedDamageDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Demo_ReceivedDamageDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Demo_ReceivedDamageDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FReceivedDamageDelegate_DelegateWrapper(const FMulticastScriptDelegate& ReceivedDamageDelegate, UCharacterAbilitySystemComponent* SourceASC, float UnmitigatedDamage, float MitigatedDamage)
{
	struct _Script_Demo_eventReceivedDamageDelegate_Parms
	{
		UCharacterAbilitySystemComponent* SourceASC;
		float UnmitigatedDamage;
		float MitigatedDamage;
	};
	_Script_Demo_eventReceivedDamageDelegate_Parms Parms;
	Parms.SourceASC=SourceASC;
	Parms.UnmitigatedDamage=UnmitigatedDamage;
	Parms.MitigatedDamage=MitigatedDamage;
	ReceivedDamageDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FReceivedDamageDelegate

// Begin Class UCharacterAbilitySystemComponent
void UCharacterAbilitySystemComponent::StaticRegisterNativesUCharacterAbilitySystemComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCharacterAbilitySystemComponent);
UClass* Z_Construct_UClass_UCharacterAbilitySystemComponent_NoRegister()
{
	return UCharacterAbilitySystemComponent::StaticClass();
}
struct Z_Construct_UClass_UCharacterAbilitySystemComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object LOD Lighting Transform Sockets TextureStreaming Object LOD Lighting Transform Sockets TextureStreaming" },
		{ "IncludePath", "Character/Abilities/CharacterAbilitySystemComponent.h" },
		{ "ModuleRelativePath", "Public/Character/Abilities/CharacterAbilitySystemComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterAbilitySystemComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCharacterAbilitySystemComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilitySystemComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Demo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAbilitySystemComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCharacterAbilitySystemComponent_Statics::ClassParams = {
	&UCharacterAbilitySystemComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAbilitySystemComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UCharacterAbilitySystemComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCharacterAbilitySystemComponent()
{
	if (!Z_Registration_Info_UClass_UCharacterAbilitySystemComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCharacterAbilitySystemComponent.OuterSingleton, Z_Construct_UClass_UCharacterAbilitySystemComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCharacterAbilitySystemComponent.OuterSingleton;
}
template<> DEMO_API UClass* StaticClass<UCharacterAbilitySystemComponent>()
{
	return UCharacterAbilitySystemComponent::StaticClass();
}
UCharacterAbilitySystemComponent::UCharacterAbilitySystemComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterAbilitySystemComponent);
UCharacterAbilitySystemComponent::~UCharacterAbilitySystemComponent() {}
// End Class UCharacterAbilitySystemComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_Projects_Demo_Source_Demo_Public_Character_Abilities_CharacterAbilitySystemComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCharacterAbilitySystemComponent, UCharacterAbilitySystemComponent::StaticClass, TEXT("UCharacterAbilitySystemComponent"), &Z_Registration_Info_UClass_UCharacterAbilitySystemComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCharacterAbilitySystemComponent), 3295629556U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_Demo_Source_Demo_Public_Character_Abilities_CharacterAbilitySystemComponent_h_2352694319(TEXT("/Script/Demo"),
	Z_CompiledInDeferFile_FID_UE_Projects_Demo_Source_Demo_Public_Character_Abilities_CharacterAbilitySystemComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_Demo_Source_Demo_Public_Character_Abilities_CharacterAbilitySystemComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
