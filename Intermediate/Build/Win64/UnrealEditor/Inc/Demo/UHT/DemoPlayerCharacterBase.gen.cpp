// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Demo/Public/Character/Player/DemoPlayerCharacterBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDemoPlayerCharacterBase() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
DEMO_API UClass* Z_Construct_UClass_ADemoCharacterBase();
DEMO_API UClass* Z_Construct_UClass_ADemoPlayerCharacterBase();
DEMO_API UClass* Z_Construct_UClass_ADemoPlayerCharacterBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Demo();
// End Cross Module References

// Begin Class ADemoPlayerCharacterBase Function GetStartingCameraBoomArmLength
struct Z_Construct_UFunction_ADemoPlayerCharacterBase_GetStartingCameraBoomArmLength_Statics
{
	struct DemoPlayerCharacterBase_eventGetStartingCameraBoomArmLength_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Demo|Camera" },
		{ "ModuleRelativePath", "Public/Character/Player/DemoPlayerCharacterBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADemoPlayerCharacterBase_GetStartingCameraBoomArmLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DemoPlayerCharacterBase_eventGetStartingCameraBoomArmLength_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADemoPlayerCharacterBase_GetStartingCameraBoomArmLength_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADemoPlayerCharacterBase_GetStartingCameraBoomArmLength_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADemoPlayerCharacterBase_GetStartingCameraBoomArmLength_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADemoPlayerCharacterBase_GetStartingCameraBoomArmLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADemoPlayerCharacterBase, nullptr, "GetStartingCameraBoomArmLength", nullptr, nullptr, Z_Construct_UFunction_ADemoPlayerCharacterBase_GetStartingCameraBoomArmLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADemoPlayerCharacterBase_GetStartingCameraBoomArmLength_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADemoPlayerCharacterBase_GetStartingCameraBoomArmLength_Statics::DemoPlayerCharacterBase_eventGetStartingCameraBoomArmLength_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADemoPlayerCharacterBase_GetStartingCameraBoomArmLength_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADemoPlayerCharacterBase_GetStartingCameraBoomArmLength_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADemoPlayerCharacterBase_GetStartingCameraBoomArmLength_Statics::DemoPlayerCharacterBase_eventGetStartingCameraBoomArmLength_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADemoPlayerCharacterBase_GetStartingCameraBoomArmLength()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADemoPlayerCharacterBase_GetStartingCameraBoomArmLength_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADemoPlayerCharacterBase::execGetStartingCameraBoomArmLength)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetStartingCameraBoomArmLength();
	P_NATIVE_END;
}
// End Class ADemoPlayerCharacterBase Function GetStartingCameraBoomArmLength

// Begin Class ADemoPlayerCharacterBase Function GetStartingCameraBoomLocation
struct Z_Construct_UFunction_ADemoPlayerCharacterBase_GetStartingCameraBoomLocation_Statics
{
	struct DemoPlayerCharacterBase_eventGetStartingCameraBoomLocation_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Demo|Camera" },
		{ "ModuleRelativePath", "Public/Character/Player/DemoPlayerCharacterBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADemoPlayerCharacterBase_GetStartingCameraBoomLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DemoPlayerCharacterBase_eventGetStartingCameraBoomLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADemoPlayerCharacterBase_GetStartingCameraBoomLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADemoPlayerCharacterBase_GetStartingCameraBoomLocation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADemoPlayerCharacterBase_GetStartingCameraBoomLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADemoPlayerCharacterBase_GetStartingCameraBoomLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADemoPlayerCharacterBase, nullptr, "GetStartingCameraBoomLocation", nullptr, nullptr, Z_Construct_UFunction_ADemoPlayerCharacterBase_GetStartingCameraBoomLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADemoPlayerCharacterBase_GetStartingCameraBoomLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADemoPlayerCharacterBase_GetStartingCameraBoomLocation_Statics::DemoPlayerCharacterBase_eventGetStartingCameraBoomLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADemoPlayerCharacterBase_GetStartingCameraBoomLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADemoPlayerCharacterBase_GetStartingCameraBoomLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADemoPlayerCharacterBase_GetStartingCameraBoomLocation_Statics::DemoPlayerCharacterBase_eventGetStartingCameraBoomLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADemoPlayerCharacterBase_GetStartingCameraBoomLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADemoPlayerCharacterBase_GetStartingCameraBoomLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADemoPlayerCharacterBase::execGetStartingCameraBoomLocation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetStartingCameraBoomLocation();
	P_NATIVE_END;
}
// End Class ADemoPlayerCharacterBase Function GetStartingCameraBoomLocation

// Begin Class ADemoPlayerCharacterBase
void ADemoPlayerCharacterBase::StaticRegisterNativesADemoPlayerCharacterBase()
{
	UClass* Class = ADemoPlayerCharacterBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetStartingCameraBoomArmLength", &ADemoPlayerCharacterBase::execGetStartingCameraBoomArmLength },
		{ "GetStartingCameraBoomLocation", &ADemoPlayerCharacterBase::execGetStartingCameraBoomLocation },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADemoPlayerCharacterBase);
UClass* Z_Construct_UClass_ADemoPlayerCharacterBase_NoRegister()
{
	return ADemoPlayerCharacterBase::StaticClass();
}
struct Z_Construct_UClass_ADemoPlayerCharacterBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/Player/DemoPlayerCharacterBase.h" },
		{ "ModuleRelativePath", "Public/Character/Player/DemoPlayerCharacterBase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[] = {
		{ "Category", "Demo|Camera" },
		{ "ModuleRelativePath", "Public/Character/Player/DemoPlayerCharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseLookUpRate_MetaData[] = {
		{ "Category", "Demo|Camera" },
		{ "ModuleRelativePath", "Public/Character/Player/DemoPlayerCharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartingCameraBoomArmLength_MetaData[] = {
		{ "Category", "Demo|Camera" },
		{ "ModuleRelativePath", "Public/Character/Player/DemoPlayerCharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartingCameraBoomLocation_MetaData[] = {
		{ "Category", "Demo|Camera" },
		{ "ModuleRelativePath", "Public/Character/Player/DemoPlayerCharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
		{ "Category", "Demo|Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/Player/DemoPlayerCharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[] = {
		{ "Category", "Demo|Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/Player/DemoPlayerCharacterBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseLookUpRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartingCameraBoomArmLength;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartingCameraBoomLocation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ADemoPlayerCharacterBase_GetStartingCameraBoomArmLength, "GetStartingCameraBoomArmLength" }, // 1274505201
		{ &Z_Construct_UFunction_ADemoPlayerCharacterBase_GetStartingCameraBoomLocation, "GetStartingCameraBoomLocation" }, // 2113713630
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADemoPlayerCharacterBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADemoPlayerCharacterBase_Statics::NewProp_BaseTurnRate = { "BaseTurnRate", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADemoPlayerCharacterBase, BaseTurnRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseTurnRate_MetaData), NewProp_BaseTurnRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADemoPlayerCharacterBase_Statics::NewProp_BaseLookUpRate = { "BaseLookUpRate", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADemoPlayerCharacterBase, BaseLookUpRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseLookUpRate_MetaData), NewProp_BaseLookUpRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADemoPlayerCharacterBase_Statics::NewProp_StartingCameraBoomArmLength = { "StartingCameraBoomArmLength", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADemoPlayerCharacterBase, StartingCameraBoomArmLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartingCameraBoomArmLength_MetaData), NewProp_StartingCameraBoomArmLength_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADemoPlayerCharacterBase_Statics::NewProp_StartingCameraBoomLocation = { "StartingCameraBoomLocation", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADemoPlayerCharacterBase, StartingCameraBoomLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartingCameraBoomLocation_MetaData), NewProp_StartingCameraBoomLocation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADemoPlayerCharacterBase_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADemoPlayerCharacterBase, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBoom_MetaData), NewProp_CameraBoom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADemoPlayerCharacterBase_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADemoPlayerCharacterBase, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FollowCamera_MetaData), NewProp_FollowCamera_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADemoPlayerCharacterBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADemoPlayerCharacterBase_Statics::NewProp_BaseTurnRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADemoPlayerCharacterBase_Statics::NewProp_BaseLookUpRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADemoPlayerCharacterBase_Statics::NewProp_StartingCameraBoomArmLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADemoPlayerCharacterBase_Statics::NewProp_StartingCameraBoomLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADemoPlayerCharacterBase_Statics::NewProp_CameraBoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADemoPlayerCharacterBase_Statics::NewProp_FollowCamera,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADemoPlayerCharacterBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADemoPlayerCharacterBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ADemoCharacterBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Demo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADemoPlayerCharacterBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADemoPlayerCharacterBase_Statics::ClassParams = {
	&ADemoPlayerCharacterBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ADemoPlayerCharacterBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ADemoPlayerCharacterBase_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADemoPlayerCharacterBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ADemoPlayerCharacterBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADemoPlayerCharacterBase()
{
	if (!Z_Registration_Info_UClass_ADemoPlayerCharacterBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADemoPlayerCharacterBase.OuterSingleton, Z_Construct_UClass_ADemoPlayerCharacterBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADemoPlayerCharacterBase.OuterSingleton;
}
template<> DEMO_API UClass* StaticClass<ADemoPlayerCharacterBase>()
{
	return ADemoPlayerCharacterBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADemoPlayerCharacterBase);
ADemoPlayerCharacterBase::~ADemoPlayerCharacterBase() {}
// End Class ADemoPlayerCharacterBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_Projects_Demo_Source_Demo_Public_Character_Player_DemoPlayerCharacterBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADemoPlayerCharacterBase, ADemoPlayerCharacterBase::StaticClass, TEXT("ADemoPlayerCharacterBase"), &Z_Registration_Info_UClass_ADemoPlayerCharacterBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADemoPlayerCharacterBase), 37304058U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_Demo_Source_Demo_Public_Character_Player_DemoPlayerCharacterBase_h_2236368771(TEXT("/Script/Demo"),
	Z_CompiledInDeferFile_FID_UE_Projects_Demo_Source_Demo_Public_Character_Player_DemoPlayerCharacterBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_Demo_Source_Demo_Public_Character_Player_DemoPlayerCharacterBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
