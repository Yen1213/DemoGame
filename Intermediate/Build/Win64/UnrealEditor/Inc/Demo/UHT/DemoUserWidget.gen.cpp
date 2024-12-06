// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Demo/Public/UI/DemoUserWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDemoUserWidget() {}

// Begin Cross Module References
DEMO_API UClass* Z_Construct_UClass_UDemoUserWidget();
DEMO_API UClass* Z_Construct_UClass_UDemoUserWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_Demo();
// End Cross Module References

// Begin Class UDemoUserWidget
void UDemoUserWidget::StaticRegisterNativesUDemoUserWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDemoUserWidget);
UClass* Z_Construct_UClass_UDemoUserWidget_NoRegister()
{
	return UDemoUserWidget::StaticClass();
}
struct Z_Construct_UClass_UDemoUserWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/DemoUserWidget.h" },
		{ "ModuleRelativePath", "Public/UI/DemoUserWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthPercent_MetaData[] = {
		{ "Category", "DemoUserWidget" },
		{ "ModuleRelativePath", "Public/UI/DemoUserWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaminaPercent_MetaData[] = {
		{ "Category", "DemoUserWidget" },
		{ "ModuleRelativePath", "Public/UI/DemoUserWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HealthPercent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StaminaPercent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDemoUserWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDemoUserWidget_Statics::NewProp_HealthPercent = { "HealthPercent", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDemoUserWidget, HealthPercent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthPercent_MetaData), NewProp_HealthPercent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDemoUserWidget_Statics::NewProp_StaminaPercent = { "StaminaPercent", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDemoUserWidget, StaminaPercent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaminaPercent_MetaData), NewProp_StaminaPercent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDemoUserWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDemoUserWidget_Statics::NewProp_HealthPercent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDemoUserWidget_Statics::NewProp_StaminaPercent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDemoUserWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDemoUserWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Demo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDemoUserWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDemoUserWidget_Statics::ClassParams = {
	&UDemoUserWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDemoUserWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDemoUserWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDemoUserWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UDemoUserWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDemoUserWidget()
{
	if (!Z_Registration_Info_UClass_UDemoUserWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDemoUserWidget.OuterSingleton, Z_Construct_UClass_UDemoUserWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDemoUserWidget.OuterSingleton;
}
template<> DEMO_API UClass* StaticClass<UDemoUserWidget>()
{
	return UDemoUserWidget::StaticClass();
}
UDemoUserWidget::UDemoUserWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDemoUserWidget);
UDemoUserWidget::~UDemoUserWidget() {}
// End Class UDemoUserWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_Projects_Demo_Source_Demo_Public_UI_DemoUserWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDemoUserWidget, UDemoUserWidget::StaticClass, TEXT("UDemoUserWidget"), &Z_Registration_Info_UClass_UDemoUserWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDemoUserWidget), 903849274U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_Demo_Source_Demo_Public_UI_DemoUserWidget_h_1855301209(TEXT("/Script/Demo"),
	Z_CompiledInDeferFile_FID_UE_Projects_Demo_Source_Demo_Public_UI_DemoUserWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_Demo_Source_Demo_Public_UI_DemoUserWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
