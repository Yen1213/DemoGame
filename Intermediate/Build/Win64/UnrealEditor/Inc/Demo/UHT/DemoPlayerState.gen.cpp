// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Demo/Public/Player/DemoPlayerState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDemoPlayerState() {}

// Begin Cross Module References
DEMO_API UClass* Z_Construct_UClass_ADemoPlayerState();
DEMO_API UClass* Z_Construct_UClass_ADemoPlayerState_NoRegister();
DEMO_API UClass* Z_Construct_UClass_UCharacterAbilitySystemComponent_NoRegister();
DEMO_API UClass* Z_Construct_UClass_UCharacterAttributeSetBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerState();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_Demo();
// End Cross Module References

// Begin Class ADemoPlayerState Function GetCharacterLevel
struct Z_Construct_UFunction_ADemoPlayerState_GetCharacterLevel_Statics
{
	struct DemoPlayerState_eventGetCharacterLevel_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Demo|DemoPlayerState|Attributes" },
		{ "ModuleRelativePath", "Public/Player/DemoPlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADemoPlayerState_GetCharacterLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DemoPlayerState_eventGetCharacterLevel_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADemoPlayerState_GetCharacterLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADemoPlayerState_GetCharacterLevel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADemoPlayerState_GetCharacterLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADemoPlayerState_GetCharacterLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADemoPlayerState, nullptr, "GetCharacterLevel", nullptr, nullptr, Z_Construct_UFunction_ADemoPlayerState_GetCharacterLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADemoPlayerState_GetCharacterLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADemoPlayerState_GetCharacterLevel_Statics::DemoPlayerState_eventGetCharacterLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADemoPlayerState_GetCharacterLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADemoPlayerState_GetCharacterLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADemoPlayerState_GetCharacterLevel_Statics::DemoPlayerState_eventGetCharacterLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADemoPlayerState_GetCharacterLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADemoPlayerState_GetCharacterLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADemoPlayerState::execGetCharacterLevel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetCharacterLevel();
	P_NATIVE_END;
}
// End Class ADemoPlayerState Function GetCharacterLevel

// Begin Class ADemoPlayerState Function GetHealth
struct Z_Construct_UFunction_ADemoPlayerState_GetHealth_Statics
{
	struct DemoPlayerState_eventGetHealth_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Demo|DemoPlayerState|Attributes" },
		{ "ModuleRelativePath", "Public/Player/DemoPlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADemoPlayerState_GetHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DemoPlayerState_eventGetHealth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADemoPlayerState_GetHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADemoPlayerState_GetHealth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADemoPlayerState_GetHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADemoPlayerState_GetHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADemoPlayerState, nullptr, "GetHealth", nullptr, nullptr, Z_Construct_UFunction_ADemoPlayerState_GetHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADemoPlayerState_GetHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADemoPlayerState_GetHealth_Statics::DemoPlayerState_eventGetHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADemoPlayerState_GetHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADemoPlayerState_GetHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADemoPlayerState_GetHealth_Statics::DemoPlayerState_eventGetHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADemoPlayerState_GetHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADemoPlayerState_GetHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADemoPlayerState::execGetHealth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetHealth();
	P_NATIVE_END;
}
// End Class ADemoPlayerState Function GetHealth

// Begin Class ADemoPlayerState Function GetMaxHealth
struct Z_Construct_UFunction_ADemoPlayerState_GetMaxHealth_Statics
{
	struct DemoPlayerState_eventGetMaxHealth_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Demo|DemoPlayerState|Attributes" },
		{ "ModuleRelativePath", "Public/Player/DemoPlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADemoPlayerState_GetMaxHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DemoPlayerState_eventGetMaxHealth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADemoPlayerState_GetMaxHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADemoPlayerState_GetMaxHealth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADemoPlayerState_GetMaxHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADemoPlayerState_GetMaxHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADemoPlayerState, nullptr, "GetMaxHealth", nullptr, nullptr, Z_Construct_UFunction_ADemoPlayerState_GetMaxHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADemoPlayerState_GetMaxHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADemoPlayerState_GetMaxHealth_Statics::DemoPlayerState_eventGetMaxHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADemoPlayerState_GetMaxHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADemoPlayerState_GetMaxHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADemoPlayerState_GetMaxHealth_Statics::DemoPlayerState_eventGetMaxHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADemoPlayerState_GetMaxHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADemoPlayerState_GetMaxHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADemoPlayerState::execGetMaxHealth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMaxHealth();
	P_NATIVE_END;
}
// End Class ADemoPlayerState Function GetMaxHealth

// Begin Class ADemoPlayerState Function GetMaxStamina
struct Z_Construct_UFunction_ADemoPlayerState_GetMaxStamina_Statics
{
	struct DemoPlayerState_eventGetMaxStamina_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Demo|DemoPlayerState|Attributes" },
		{ "ModuleRelativePath", "Public/Player/DemoPlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADemoPlayerState_GetMaxStamina_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DemoPlayerState_eventGetMaxStamina_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADemoPlayerState_GetMaxStamina_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADemoPlayerState_GetMaxStamina_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADemoPlayerState_GetMaxStamina_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADemoPlayerState_GetMaxStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADemoPlayerState, nullptr, "GetMaxStamina", nullptr, nullptr, Z_Construct_UFunction_ADemoPlayerState_GetMaxStamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADemoPlayerState_GetMaxStamina_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADemoPlayerState_GetMaxStamina_Statics::DemoPlayerState_eventGetMaxStamina_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADemoPlayerState_GetMaxStamina_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADemoPlayerState_GetMaxStamina_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADemoPlayerState_GetMaxStamina_Statics::DemoPlayerState_eventGetMaxStamina_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADemoPlayerState_GetMaxStamina()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADemoPlayerState_GetMaxStamina_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADemoPlayerState::execGetMaxStamina)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMaxStamina();
	P_NATIVE_END;
}
// End Class ADemoPlayerState Function GetMaxStamina

// Begin Class ADemoPlayerState Function GetStamina
struct Z_Construct_UFunction_ADemoPlayerState_GetStamina_Statics
{
	struct DemoPlayerState_eventGetStamina_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Demo|DemoPlayerState|Attributes" },
		{ "ModuleRelativePath", "Public/Player/DemoPlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADemoPlayerState_GetStamina_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DemoPlayerState_eventGetStamina_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADemoPlayerState_GetStamina_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADemoPlayerState_GetStamina_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADemoPlayerState_GetStamina_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADemoPlayerState_GetStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADemoPlayerState, nullptr, "GetStamina", nullptr, nullptr, Z_Construct_UFunction_ADemoPlayerState_GetStamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADemoPlayerState_GetStamina_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADemoPlayerState_GetStamina_Statics::DemoPlayerState_eventGetStamina_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADemoPlayerState_GetStamina_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADemoPlayerState_GetStamina_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADemoPlayerState_GetStamina_Statics::DemoPlayerState_eventGetStamina_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADemoPlayerState_GetStamina()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADemoPlayerState_GetStamina_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADemoPlayerState::execGetStamina)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetStamina();
	P_NATIVE_END;
}
// End Class ADemoPlayerState Function GetStamina

// Begin Class ADemoPlayerState Function IsAlive
struct Z_Construct_UFunction_ADemoPlayerState_IsAlive_Statics
{
	struct DemoPlayerState_eventIsAlive_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Demo|DemoPlayerState" },
		{ "ModuleRelativePath", "Public/Player/DemoPlayerState.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ADemoPlayerState_IsAlive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DemoPlayerState_eventIsAlive_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADemoPlayerState_IsAlive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DemoPlayerState_eventIsAlive_Parms), &Z_Construct_UFunction_ADemoPlayerState_IsAlive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADemoPlayerState_IsAlive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADemoPlayerState_IsAlive_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADemoPlayerState_IsAlive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADemoPlayerState_IsAlive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADemoPlayerState, nullptr, "IsAlive", nullptr, nullptr, Z_Construct_UFunction_ADemoPlayerState_IsAlive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADemoPlayerState_IsAlive_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADemoPlayerState_IsAlive_Statics::DemoPlayerState_eventIsAlive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADemoPlayerState_IsAlive_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADemoPlayerState_IsAlive_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADemoPlayerState_IsAlive_Statics::DemoPlayerState_eventIsAlive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADemoPlayerState_IsAlive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADemoPlayerState_IsAlive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADemoPlayerState::execIsAlive)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsAlive();
	P_NATIVE_END;
}
// End Class ADemoPlayerState Function IsAlive

// Begin Class ADemoPlayerState Function ShowAbilityConfirmCancelText
struct Z_Construct_UFunction_ADemoPlayerState_ShowAbilityConfirmCancelText_Statics
{
	struct DemoPlayerState_eventShowAbilityConfirmCancelText_Parms
	{
		bool ShowText;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Demo|DemoPlayerState|UI" },
		{ "ModuleRelativePath", "Public/Player/DemoPlayerState.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ShowText_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShowText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ADemoPlayerState_ShowAbilityConfirmCancelText_Statics::NewProp_ShowText_SetBit(void* Obj)
{
	((DemoPlayerState_eventShowAbilityConfirmCancelText_Parms*)Obj)->ShowText = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADemoPlayerState_ShowAbilityConfirmCancelText_Statics::NewProp_ShowText = { "ShowText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DemoPlayerState_eventShowAbilityConfirmCancelText_Parms), &Z_Construct_UFunction_ADemoPlayerState_ShowAbilityConfirmCancelText_Statics::NewProp_ShowText_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADemoPlayerState_ShowAbilityConfirmCancelText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADemoPlayerState_ShowAbilityConfirmCancelText_Statics::NewProp_ShowText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADemoPlayerState_ShowAbilityConfirmCancelText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADemoPlayerState_ShowAbilityConfirmCancelText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADemoPlayerState, nullptr, "ShowAbilityConfirmCancelText", nullptr, nullptr, Z_Construct_UFunction_ADemoPlayerState_ShowAbilityConfirmCancelText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADemoPlayerState_ShowAbilityConfirmCancelText_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADemoPlayerState_ShowAbilityConfirmCancelText_Statics::DemoPlayerState_eventShowAbilityConfirmCancelText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADemoPlayerState_ShowAbilityConfirmCancelText_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADemoPlayerState_ShowAbilityConfirmCancelText_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADemoPlayerState_ShowAbilityConfirmCancelText_Statics::DemoPlayerState_eventShowAbilityConfirmCancelText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADemoPlayerState_ShowAbilityConfirmCancelText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADemoPlayerState_ShowAbilityConfirmCancelText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADemoPlayerState::execShowAbilityConfirmCancelText)
{
	P_GET_UBOOL(Z_Param_ShowText);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowAbilityConfirmCancelText(Z_Param_ShowText);
	P_NATIVE_END;
}
// End Class ADemoPlayerState Function ShowAbilityConfirmCancelText

// Begin Class ADemoPlayerState
void ADemoPlayerState::StaticRegisterNativesADemoPlayerState()
{
	UClass* Class = ADemoPlayerState::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCharacterLevel", &ADemoPlayerState::execGetCharacterLevel },
		{ "GetHealth", &ADemoPlayerState::execGetHealth },
		{ "GetMaxHealth", &ADemoPlayerState::execGetMaxHealth },
		{ "GetMaxStamina", &ADemoPlayerState::execGetMaxStamina },
		{ "GetStamina", &ADemoPlayerState::execGetStamina },
		{ "IsAlive", &ADemoPlayerState::execIsAlive },
		{ "ShowAbilityConfirmCancelText", &ADemoPlayerState::execShowAbilityConfirmCancelText },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADemoPlayerState);
UClass* Z_Construct_UClass_ADemoPlayerState_NoRegister()
{
	return ADemoPlayerState::StaticClass();
}
struct Z_Construct_UClass_ADemoPlayerState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Player/DemoPlayerState.h" },
		{ "ModuleRelativePath", "Public/Player/DemoPlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/DemoPlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeSetBase_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/DemoPlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttributeSetBase;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ADemoPlayerState_GetCharacterLevel, "GetCharacterLevel" }, // 1697272445
		{ &Z_Construct_UFunction_ADemoPlayerState_GetHealth, "GetHealth" }, // 795008645
		{ &Z_Construct_UFunction_ADemoPlayerState_GetMaxHealth, "GetMaxHealth" }, // 2322502270
		{ &Z_Construct_UFunction_ADemoPlayerState_GetMaxStamina, "GetMaxStamina" }, // 953902347
		{ &Z_Construct_UFunction_ADemoPlayerState_GetStamina, "GetStamina" }, // 3870155281
		{ &Z_Construct_UFunction_ADemoPlayerState_IsAlive, "IsAlive" }, // 2267634136
		{ &Z_Construct_UFunction_ADemoPlayerState_ShowAbilityConfirmCancelText, "ShowAbilityConfirmCancelText" }, // 1046098548
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADemoPlayerState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADemoPlayerState_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADemoPlayerState, AbilitySystemComponent), Z_Construct_UClass_UCharacterAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystemComponent_MetaData), NewProp_AbilitySystemComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADemoPlayerState_Statics::NewProp_AttributeSetBase = { "AttributeSetBase", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADemoPlayerState, AttributeSetBase), Z_Construct_UClass_UCharacterAttributeSetBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeSetBase_MetaData), NewProp_AttributeSetBase_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADemoPlayerState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADemoPlayerState_Statics::NewProp_AbilitySystemComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADemoPlayerState_Statics::NewProp_AttributeSetBase,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADemoPlayerState_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADemoPlayerState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerState,
	(UObject* (*)())Z_Construct_UPackage__Script_Demo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADemoPlayerState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ADemoPlayerState_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(ADemoPlayerState, IAbilitySystemInterface), false },  // 2272790346
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADemoPlayerState_Statics::ClassParams = {
	&ADemoPlayerState::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ADemoPlayerState_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ADemoPlayerState_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADemoPlayerState_Statics::Class_MetaDataParams), Z_Construct_UClass_ADemoPlayerState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADemoPlayerState()
{
	if (!Z_Registration_Info_UClass_ADemoPlayerState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADemoPlayerState.OuterSingleton, Z_Construct_UClass_ADemoPlayerState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADemoPlayerState.OuterSingleton;
}
template<> DEMO_API UClass* StaticClass<ADemoPlayerState>()
{
	return ADemoPlayerState::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADemoPlayerState);
ADemoPlayerState::~ADemoPlayerState() {}
// End Class ADemoPlayerState

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_Projects_Demo_Source_Demo_Public_Player_DemoPlayerState_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADemoPlayerState, ADemoPlayerState::StaticClass, TEXT("ADemoPlayerState"), &Z_Registration_Info_UClass_ADemoPlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADemoPlayerState), 3079115401U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_Demo_Source_Demo_Public_Player_DemoPlayerState_h_2103461029(TEXT("/Script/Demo"),
	Z_CompiledInDeferFile_FID_UE_Projects_Demo_Source_Demo_Public_Player_DemoPlayerState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_Demo_Source_Demo_Public_Player_DemoPlayerState_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
