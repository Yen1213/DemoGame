// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Demo/Public/Character/DemoCharacterBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDemoCharacterBase() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
DEMO_API UClass* Z_Construct_UClass_ADemoCharacterBase();
DEMO_API UClass* Z_Construct_UClass_ADemoCharacterBase_NoRegister();
DEMO_API UClass* Z_Construct_UClass_UCharacterGameplayAbility_NoRegister();
DEMO_API UEnum* Z_Construct_UEnum_Demo_DemoAbilityID();
DEMO_API UFunction* Z_Construct_UDelegateFunction_Demo_CharacterDiedDelegate__DelegateSignature();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
UPackage* Z_Construct_UPackage__Script_Demo();
// End Cross Module References

// Begin Delegate FCharacterDiedDelegate
struct Z_Construct_UDelegateFunction_Demo_CharacterDiedDelegate__DelegateSignature_Statics
{
	struct _Script_Demo_eventCharacterDiedDelegate_Parms
	{
		ADemoCharacterBase* Character;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/DemoCharacterBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Demo_CharacterDiedDelegate__DelegateSignature_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Demo_eventCharacterDiedDelegate_Parms, Character), Z_Construct_UClass_ADemoCharacterBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Demo_CharacterDiedDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Demo_CharacterDiedDelegate__DelegateSignature_Statics::NewProp_Character,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Demo_CharacterDiedDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Demo_CharacterDiedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Demo, nullptr, "CharacterDiedDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Demo_CharacterDiedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Demo_CharacterDiedDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Demo_CharacterDiedDelegate__DelegateSignature_Statics::_Script_Demo_eventCharacterDiedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Demo_CharacterDiedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Demo_CharacterDiedDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_Demo_CharacterDiedDelegate__DelegateSignature_Statics::_Script_Demo_eventCharacterDiedDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Demo_CharacterDiedDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Demo_CharacterDiedDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FCharacterDiedDelegate_DelegateWrapper(const FMulticastScriptDelegate& CharacterDiedDelegate, ADemoCharacterBase* Character)
{
	struct _Script_Demo_eventCharacterDiedDelegate_Parms
	{
		ADemoCharacterBase* Character;
	};
	_Script_Demo_eventCharacterDiedDelegate_Parms Parms;
	Parms.Character=Character;
	CharacterDiedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FCharacterDiedDelegate

// Begin Class ADemoCharacterBase Function FinishDying
struct Z_Construct_UFunction_ADemoCharacterBase_FinishDying_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Demo|Character" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Getters\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/DemoCharacterBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Getters" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADemoCharacterBase_FinishDying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADemoCharacterBase, nullptr, "FinishDying", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADemoCharacterBase_FinishDying_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADemoCharacterBase_FinishDying_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ADemoCharacterBase_FinishDying()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADemoCharacterBase_FinishDying_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADemoCharacterBase::execFinishDying)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FinishDying();
	P_NATIVE_END;
}
// End Class ADemoCharacterBase Function FinishDying

// Begin Class ADemoCharacterBase Function GetAbilityLevel
struct Z_Construct_UFunction_ADemoCharacterBase_GetAbilityLevel_Statics
{
	struct DemoCharacterBase_eventGetAbilityLevel_Parms
	{
		DemoAbilityID AbilityID;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Demo|Character" },
		{ "ModuleRelativePath", "Public/Character/DemoCharacterBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_AbilityID_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AbilityID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ADemoCharacterBase_GetAbilityLevel_Statics::NewProp_AbilityID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ADemoCharacterBase_GetAbilityLevel_Statics::NewProp_AbilityID = { "AbilityID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DemoCharacterBase_eventGetAbilityLevel_Parms, AbilityID), Z_Construct_UEnum_Demo_DemoAbilityID, METADATA_PARAMS(0, nullptr) }; // 144979148
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADemoCharacterBase_GetAbilityLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DemoCharacterBase_eventGetAbilityLevel_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADemoCharacterBase_GetAbilityLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADemoCharacterBase_GetAbilityLevel_Statics::NewProp_AbilityID_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADemoCharacterBase_GetAbilityLevel_Statics::NewProp_AbilityID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADemoCharacterBase_GetAbilityLevel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADemoCharacterBase_GetAbilityLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADemoCharacterBase_GetAbilityLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADemoCharacterBase, nullptr, "GetAbilityLevel", nullptr, nullptr, Z_Construct_UFunction_ADemoCharacterBase_GetAbilityLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADemoCharacterBase_GetAbilityLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADemoCharacterBase_GetAbilityLevel_Statics::DemoCharacterBase_eventGetAbilityLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADemoCharacterBase_GetAbilityLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADemoCharacterBase_GetAbilityLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADemoCharacterBase_GetAbilityLevel_Statics::DemoCharacterBase_eventGetAbilityLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADemoCharacterBase_GetAbilityLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADemoCharacterBase_GetAbilityLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADemoCharacterBase::execGetAbilityLevel)
{
	P_GET_ENUM(DemoAbilityID,Z_Param_AbilityID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetAbilityLevel(DemoAbilityID(Z_Param_AbilityID));
	P_NATIVE_END;
}
// End Class ADemoCharacterBase Function GetAbilityLevel

// Begin Class ADemoCharacterBase Function GetCharacterLevel
struct Z_Construct_UFunction_ADemoCharacterBase_GetCharacterLevel_Statics
{
	struct DemoCharacterBase_eventGetCharacterLevel_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Demo|Character|Attribute" },
		{ "ModuleRelativePath", "Public/Character/DemoCharacterBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADemoCharacterBase_GetCharacterLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DemoCharacterBase_eventGetCharacterLevel_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADemoCharacterBase_GetCharacterLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADemoCharacterBase_GetCharacterLevel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADemoCharacterBase_GetCharacterLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADemoCharacterBase_GetCharacterLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADemoCharacterBase, nullptr, "GetCharacterLevel", nullptr, nullptr, Z_Construct_UFunction_ADemoCharacterBase_GetCharacterLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADemoCharacterBase_GetCharacterLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADemoCharacterBase_GetCharacterLevel_Statics::DemoCharacterBase_eventGetCharacterLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADemoCharacterBase_GetCharacterLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADemoCharacterBase_GetCharacterLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADemoCharacterBase_GetCharacterLevel_Statics::DemoCharacterBase_eventGetCharacterLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADemoCharacterBase_GetCharacterLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADemoCharacterBase_GetCharacterLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADemoCharacterBase::execGetCharacterLevel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetCharacterLevel();
	P_NATIVE_END;
}
// End Class ADemoCharacterBase Function GetCharacterLevel

// Begin Class ADemoCharacterBase Function GetHealth
struct Z_Construct_UFunction_ADemoCharacterBase_GetHealth_Statics
{
	struct DemoCharacterBase_eventGetHealth_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Demo|Character|Attribute" },
		{ "ModuleRelativePath", "Public/Character/DemoCharacterBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADemoCharacterBase_GetHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DemoCharacterBase_eventGetHealth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADemoCharacterBase_GetHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADemoCharacterBase_GetHealth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADemoCharacterBase_GetHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADemoCharacterBase_GetHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADemoCharacterBase, nullptr, "GetHealth", nullptr, nullptr, Z_Construct_UFunction_ADemoCharacterBase_GetHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADemoCharacterBase_GetHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADemoCharacterBase_GetHealth_Statics::DemoCharacterBase_eventGetHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADemoCharacterBase_GetHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADemoCharacterBase_GetHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADemoCharacterBase_GetHealth_Statics::DemoCharacterBase_eventGetHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADemoCharacterBase_GetHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADemoCharacterBase_GetHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADemoCharacterBase::execGetHealth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetHealth();
	P_NATIVE_END;
}
// End Class ADemoCharacterBase Function GetHealth

// Begin Class ADemoCharacterBase Function GetMaxHealth
struct Z_Construct_UFunction_ADemoCharacterBase_GetMaxHealth_Statics
{
	struct DemoCharacterBase_eventGetMaxHealth_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Demo|Character|Attribute" },
		{ "ModuleRelativePath", "Public/Character/DemoCharacterBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADemoCharacterBase_GetMaxHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DemoCharacterBase_eventGetMaxHealth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADemoCharacterBase_GetMaxHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADemoCharacterBase_GetMaxHealth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADemoCharacterBase_GetMaxHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADemoCharacterBase_GetMaxHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADemoCharacterBase, nullptr, "GetMaxHealth", nullptr, nullptr, Z_Construct_UFunction_ADemoCharacterBase_GetMaxHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADemoCharacterBase_GetMaxHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADemoCharacterBase_GetMaxHealth_Statics::DemoCharacterBase_eventGetMaxHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADemoCharacterBase_GetMaxHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADemoCharacterBase_GetMaxHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADemoCharacterBase_GetMaxHealth_Statics::DemoCharacterBase_eventGetMaxHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADemoCharacterBase_GetMaxHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADemoCharacterBase_GetMaxHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADemoCharacterBase::execGetMaxHealth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMaxHealth();
	P_NATIVE_END;
}
// End Class ADemoCharacterBase Function GetMaxHealth

// Begin Class ADemoCharacterBase Function GetMaxStamina
struct Z_Construct_UFunction_ADemoCharacterBase_GetMaxStamina_Statics
{
	struct DemoCharacterBase_eventGetMaxStamina_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Demo|Character|Attribute" },
		{ "ModuleRelativePath", "Public/Character/DemoCharacterBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADemoCharacterBase_GetMaxStamina_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DemoCharacterBase_eventGetMaxStamina_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADemoCharacterBase_GetMaxStamina_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADemoCharacterBase_GetMaxStamina_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADemoCharacterBase_GetMaxStamina_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADemoCharacterBase_GetMaxStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADemoCharacterBase, nullptr, "GetMaxStamina", nullptr, nullptr, Z_Construct_UFunction_ADemoCharacterBase_GetMaxStamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADemoCharacterBase_GetMaxStamina_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADemoCharacterBase_GetMaxStamina_Statics::DemoCharacterBase_eventGetMaxStamina_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADemoCharacterBase_GetMaxStamina_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADemoCharacterBase_GetMaxStamina_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADemoCharacterBase_GetMaxStamina_Statics::DemoCharacterBase_eventGetMaxStamina_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADemoCharacterBase_GetMaxStamina()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADemoCharacterBase_GetMaxStamina_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADemoCharacterBase::execGetMaxStamina)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMaxStamina();
	P_NATIVE_END;
}
// End Class ADemoCharacterBase Function GetMaxStamina

// Begin Class ADemoCharacterBase Function GetStamina
struct Z_Construct_UFunction_ADemoCharacterBase_GetStamina_Statics
{
	struct DemoCharacterBase_eventGetStamina_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Demo|Character|Attribute" },
		{ "ModuleRelativePath", "Public/Character/DemoCharacterBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADemoCharacterBase_GetStamina_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DemoCharacterBase_eventGetStamina_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADemoCharacterBase_GetStamina_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADemoCharacterBase_GetStamina_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADemoCharacterBase_GetStamina_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADemoCharacterBase_GetStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADemoCharacterBase, nullptr, "GetStamina", nullptr, nullptr, Z_Construct_UFunction_ADemoCharacterBase_GetStamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADemoCharacterBase_GetStamina_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADemoCharacterBase_GetStamina_Statics::DemoCharacterBase_eventGetStamina_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADemoCharacterBase_GetStamina_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADemoCharacterBase_GetStamina_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADemoCharacterBase_GetStamina_Statics::DemoCharacterBase_eventGetStamina_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADemoCharacterBase_GetStamina()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADemoCharacterBase_GetStamina_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADemoCharacterBase::execGetStamina)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetStamina();
	P_NATIVE_END;
}
// End Class ADemoCharacterBase Function GetStamina

// Begin Class ADemoCharacterBase Function IsAlive
struct Z_Construct_UFunction_ADemoCharacterBase_IsAlive_Statics
{
	struct DemoCharacterBase_eventIsAlive_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Demo|Character" },
		{ "ModuleRelativePath", "Public/Character/DemoCharacterBase.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ADemoCharacterBase_IsAlive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DemoCharacterBase_eventIsAlive_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADemoCharacterBase_IsAlive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DemoCharacterBase_eventIsAlive_Parms), &Z_Construct_UFunction_ADemoCharacterBase_IsAlive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADemoCharacterBase_IsAlive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADemoCharacterBase_IsAlive_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADemoCharacterBase_IsAlive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADemoCharacterBase_IsAlive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADemoCharacterBase, nullptr, "IsAlive", nullptr, nullptr, Z_Construct_UFunction_ADemoCharacterBase_IsAlive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADemoCharacterBase_IsAlive_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADemoCharacterBase_IsAlive_Statics::DemoCharacterBase_eventIsAlive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADemoCharacterBase_IsAlive_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADemoCharacterBase_IsAlive_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADemoCharacterBase_IsAlive_Statics::DemoCharacterBase_eventIsAlive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADemoCharacterBase_IsAlive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADemoCharacterBase_IsAlive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADemoCharacterBase::execIsAlive)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsAlive();
	P_NATIVE_END;
}
// End Class ADemoCharacterBase Function IsAlive

// Begin Class ADemoCharacterBase
void ADemoCharacterBase::StaticRegisterNativesADemoCharacterBase()
{
	UClass* Class = ADemoCharacterBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FinishDying", &ADemoCharacterBase::execFinishDying },
		{ "GetAbilityLevel", &ADemoCharacterBase::execGetAbilityLevel },
		{ "GetCharacterLevel", &ADemoCharacterBase::execGetCharacterLevel },
		{ "GetHealth", &ADemoCharacterBase::execGetHealth },
		{ "GetMaxHealth", &ADemoCharacterBase::execGetMaxHealth },
		{ "GetMaxStamina", &ADemoCharacterBase::execGetMaxStamina },
		{ "GetStamina", &ADemoCharacterBase::execGetStamina },
		{ "IsAlive", &ADemoCharacterBase::execIsAlive },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADemoCharacterBase);
UClass* Z_Construct_UClass_ADemoCharacterBase_NoRegister()
{
	return ADemoCharacterBase::StaticClass();
}
struct Z_Construct_UClass_ADemoCharacterBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/DemoCharacterBase.h" },
		{ "ModuleRelativePath", "Public/Character/DemoCharacterBase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCharacterDied_MetaData[] = {
		{ "Category", "Demo|Character" },
		{ "ModuleRelativePath", "Public/Character/DemoCharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterName_MetaData[] = {
		{ "Category", "Demo|Character" },
		{ "ModuleRelativePath", "Public/Character/DemoCharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeathMontage_MetaData[] = {
		{ "Category", "Demo|Animation" },
		{ "ModuleRelativePath", "Public/Character/DemoCharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultAttributes_MetaData[] = {
		{ "Category", "Demo|Abilities" },
		{ "ModuleRelativePath", "Public/Character/DemoCharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterAbilities_MetaData[] = {
		{ "Category", "Demo|Abilities" },
		{ "ModuleRelativePath", "Public/Character/DemoCharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartupEffects_MetaData[] = {
		{ "Category", "Demo|Abilities" },
		{ "ModuleRelativePath", "Public/Character/DemoCharacterBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCharacterDied;
	static const UECodeGen_Private::FTextPropertyParams NewProp_CharacterName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DeathMontage;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultAttributes;
	static const UECodeGen_Private::FClassPropertyParams NewProp_CharacterAbilities_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CharacterAbilities;
	static const UECodeGen_Private::FClassPropertyParams NewProp_StartupEffects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StartupEffects;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ADemoCharacterBase_FinishDying, "FinishDying" }, // 3644414335
		{ &Z_Construct_UFunction_ADemoCharacterBase_GetAbilityLevel, "GetAbilityLevel" }, // 912016431
		{ &Z_Construct_UFunction_ADemoCharacterBase_GetCharacterLevel, "GetCharacterLevel" }, // 2890125215
		{ &Z_Construct_UFunction_ADemoCharacterBase_GetHealth, "GetHealth" }, // 3042906030
		{ &Z_Construct_UFunction_ADemoCharacterBase_GetMaxHealth, "GetMaxHealth" }, // 344745179
		{ &Z_Construct_UFunction_ADemoCharacterBase_GetMaxStamina, "GetMaxStamina" }, // 3227234626
		{ &Z_Construct_UFunction_ADemoCharacterBase_GetStamina, "GetStamina" }, // 223101640
		{ &Z_Construct_UFunction_ADemoCharacterBase_IsAlive, "IsAlive" }, // 1627798034
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADemoCharacterBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ADemoCharacterBase_Statics::NewProp_OnCharacterDied = { "OnCharacterDied", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADemoCharacterBase, OnCharacterDied), Z_Construct_UDelegateFunction_Demo_CharacterDiedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCharacterDied_MetaData), NewProp_OnCharacterDied_MetaData) }; // 1029841269
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_ADemoCharacterBase_Statics::NewProp_CharacterName = { "CharacterName", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADemoCharacterBase, CharacterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterName_MetaData), NewProp_CharacterName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADemoCharacterBase_Statics::NewProp_DeathMontage = { "DeathMontage", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADemoCharacterBase, DeathMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeathMontage_MetaData), NewProp_DeathMontage_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ADemoCharacterBase_Statics::NewProp_DefaultAttributes = { "DefaultAttributes", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADemoCharacterBase, DefaultAttributes), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultAttributes_MetaData), NewProp_DefaultAttributes_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ADemoCharacterBase_Statics::NewProp_CharacterAbilities_Inner = { "CharacterAbilities", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UCharacterGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADemoCharacterBase_Statics::NewProp_CharacterAbilities = { "CharacterAbilities", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADemoCharacterBase, CharacterAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterAbilities_MetaData), NewProp_CharacterAbilities_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ADemoCharacterBase_Statics::NewProp_StartupEffects_Inner = { "StartupEffects", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADemoCharacterBase_Statics::NewProp_StartupEffects = { "StartupEffects", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADemoCharacterBase, StartupEffects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartupEffects_MetaData), NewProp_StartupEffects_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADemoCharacterBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADemoCharacterBase_Statics::NewProp_OnCharacterDied,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADemoCharacterBase_Statics::NewProp_CharacterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADemoCharacterBase_Statics::NewProp_DeathMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADemoCharacterBase_Statics::NewProp_DefaultAttributes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADemoCharacterBase_Statics::NewProp_CharacterAbilities_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADemoCharacterBase_Statics::NewProp_CharacterAbilities,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADemoCharacterBase_Statics::NewProp_StartupEffects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADemoCharacterBase_Statics::NewProp_StartupEffects,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADemoCharacterBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADemoCharacterBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Demo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADemoCharacterBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ADemoCharacterBase_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(ADemoCharacterBase, IAbilitySystemInterface), false },  // 2272790346
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADemoCharacterBase_Statics::ClassParams = {
	&ADemoCharacterBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ADemoCharacterBase_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ADemoCharacterBase_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADemoCharacterBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ADemoCharacterBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADemoCharacterBase()
{
	if (!Z_Registration_Info_UClass_ADemoCharacterBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADemoCharacterBase.OuterSingleton, Z_Construct_UClass_ADemoCharacterBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADemoCharacterBase.OuterSingleton;
}
template<> DEMO_API UClass* StaticClass<ADemoCharacterBase>()
{
	return ADemoCharacterBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADemoCharacterBase);
ADemoCharacterBase::~ADemoCharacterBase() {}
// End Class ADemoCharacterBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_Projects_Demo_Source_Demo_Public_Character_DemoCharacterBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADemoCharacterBase, ADemoCharacterBase::StaticClass, TEXT("ADemoCharacterBase"), &Z_Registration_Info_UClass_ADemoCharacterBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADemoCharacterBase), 2694274749U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_Demo_Source_Demo_Public_Character_DemoCharacterBase_h_2107832595(TEXT("/Script/Demo"),
	Z_CompiledInDeferFile_FID_UE_Projects_Demo_Source_Demo_Public_Character_DemoCharacterBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_Demo_Source_Demo_Public_Character_DemoCharacterBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
