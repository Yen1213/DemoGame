// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Demo/Demo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDemo() {}

// Begin Cross Module References
DEMO_API UEnum* Z_Construct_UEnum_Demo_DemoAbilityID();
UPackage* Z_Construct_UPackage__Script_Demo();
// End Cross Module References

// Begin Enum DemoAbilityID
static FEnumRegistrationInfo Z_Registration_Info_UEnum_DemoAbilityID;
static UEnum* DemoAbilityID_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_DemoAbilityID.OuterSingleton)
	{
		Z_Registration_Info_UEnum_DemoAbilityID.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Demo_DemoAbilityID, (UObject*)Z_Construct_UPackage__Script_Demo(), TEXT("DemoAbilityID"));
	}
	return Z_Registration_Info_UEnum_DemoAbilityID.OuterSingleton;
}
template<> DEMO_API UEnum* StaticEnum<DemoAbilityID>()
{
	return DemoAbilityID_StaticEnum();
}
struct Z_Construct_UEnum_Demo_DemoAbilityID_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Cancel.DisplayName", "Cancel" },
		{ "Cancel.Name", "DemoAbilityID::Cancel" },
		{ "Confirm.DisplayName", "Confirm" },
		{ "Confirm.Name", "DemoAbilityID::Confirm" },
		{ "ModuleRelativePath", "Demo.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "DemoAbilityID::None" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "DemoAbilityID::None", (int64)DemoAbilityID::None },
		{ "DemoAbilityID::Confirm", (int64)DemoAbilityID::Confirm },
		{ "DemoAbilityID::Cancel", (int64)DemoAbilityID::Cancel },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Demo_DemoAbilityID_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Demo,
	nullptr,
	"DemoAbilityID",
	"DemoAbilityID",
	Z_Construct_UEnum_Demo_DemoAbilityID_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Demo_DemoAbilityID_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Demo_DemoAbilityID_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Demo_DemoAbilityID_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Demo_DemoAbilityID()
{
	if (!Z_Registration_Info_UEnum_DemoAbilityID.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_DemoAbilityID.InnerSingleton, Z_Construct_UEnum_Demo_DemoAbilityID_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_DemoAbilityID.InnerSingleton;
}
// End Enum DemoAbilityID

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_Projects_Demo_Source_Demo_Demo_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ DemoAbilityID_StaticEnum, TEXT("DemoAbilityID"), &Z_Registration_Info_UEnum_DemoAbilityID, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 144979148U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_Demo_Source_Demo_Demo_h_804833392(TEXT("/Script/Demo"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UE_Projects_Demo_Source_Demo_Demo_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_Demo_Source_Demo_Demo_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
