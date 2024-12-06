// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Demo/Public/UI/DemoHUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDemoHUD() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
DEMO_API UClass* Z_Construct_UClass_ADemoHUD();
DEMO_API UClass* Z_Construct_UClass_ADemoHUD_NoRegister();
DEMO_API UClass* Z_Construct_UClass_UDemoUserWidget_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AHUD();
UPackage* Z_Construct_UPackage__Script_Demo();
// End Cross Module References

// Begin Class ADemoHUD
void ADemoHUD::StaticRegisterNativesADemoHUD()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADemoHUD);
UClass* Z_Construct_UClass_ADemoHUD_NoRegister()
{
	return ADemoHUD::StaticClass();
}
struct Z_Construct_UClass_ADemoHUD_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "UI/DemoHUD.h" },
		{ "ModuleRelativePath", "Public/UI/DemoHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DemoUserWidgetClass_MetaData[] = {
		{ "Category", "DemoHUD" },
		{ "ModuleRelativePath", "Public/UI/DemoHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DemoUserWidget_MetaData[] = {
		{ "Category", "DemoHUD" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/DemoHUD.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_DemoUserWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DemoUserWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADemoHUD>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ADemoHUD_Statics::NewProp_DemoUserWidgetClass = { "DemoUserWidgetClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADemoHUD, DemoUserWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UDemoUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DemoUserWidgetClass_MetaData), NewProp_DemoUserWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADemoHUD_Statics::NewProp_DemoUserWidget = { "DemoUserWidget", nullptr, (EPropertyFlags)0x0144000000090009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADemoHUD, DemoUserWidget), Z_Construct_UClass_UDemoUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DemoUserWidget_MetaData), NewProp_DemoUserWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADemoHUD_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADemoHUD_Statics::NewProp_DemoUserWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADemoHUD_Statics::NewProp_DemoUserWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADemoHUD_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADemoHUD_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AHUD,
	(UObject* (*)())Z_Construct_UPackage__Script_Demo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADemoHUD_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADemoHUD_Statics::ClassParams = {
	&ADemoHUD::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ADemoHUD_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ADemoHUD_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADemoHUD_Statics::Class_MetaDataParams), Z_Construct_UClass_ADemoHUD_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADemoHUD()
{
	if (!Z_Registration_Info_UClass_ADemoHUD.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADemoHUD.OuterSingleton, Z_Construct_UClass_ADemoHUD_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADemoHUD.OuterSingleton;
}
template<> DEMO_API UClass* StaticClass<ADemoHUD>()
{
	return ADemoHUD::StaticClass();
}
ADemoHUD::ADemoHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADemoHUD);
ADemoHUD::~ADemoHUD() {}
// End Class ADemoHUD

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_Projects_Demo_Source_Demo_Public_UI_DemoHUD_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADemoHUD, ADemoHUD::StaticClass, TEXT("ADemoHUD"), &Z_Registration_Info_UClass_ADemoHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADemoHUD), 4075420391U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_Demo_Source_Demo_Public_UI_DemoHUD_h_3132089386(TEXT("/Script/Demo"),
	Z_CompiledInDeferFile_FID_UE_Projects_Demo_Source_Demo_Public_UI_DemoHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_Demo_Source_Demo_Public_UI_DemoHUD_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
