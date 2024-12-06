// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Demo/Public/Player/DemoPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDemoPlayerController() {}

// Begin Cross Module References
DEMO_API UClass* Z_Construct_UClass_ADemoPlayerController();
DEMO_API UClass* Z_Construct_UClass_ADemoPlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
UPackage* Z_Construct_UPackage__Script_Demo();
// End Cross Module References

// Begin Class ADemoPlayerController
void ADemoPlayerController::StaticRegisterNativesADemoPlayerController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADemoPlayerController);
UClass* Z_Construct_UClass_ADemoPlayerController_NoRegister()
{
	return ADemoPlayerController::StaticClass();
}
struct Z_Construct_UClass_ADemoPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Player/DemoPlayerController.h" },
		{ "ModuleRelativePath", "Public/Player/DemoPlayerController.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADemoPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ADemoPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_Demo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADemoPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADemoPlayerController_Statics::ClassParams = {
	&ADemoPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADemoPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ADemoPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADemoPlayerController()
{
	if (!Z_Registration_Info_UClass_ADemoPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADemoPlayerController.OuterSingleton, Z_Construct_UClass_ADemoPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADemoPlayerController.OuterSingleton;
}
template<> DEMO_API UClass* StaticClass<ADemoPlayerController>()
{
	return ADemoPlayerController::StaticClass();
}
ADemoPlayerController::ADemoPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADemoPlayerController);
ADemoPlayerController::~ADemoPlayerController() {}
// End Class ADemoPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_Projects_Demo_Source_Demo_Public_Player_DemoPlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADemoPlayerController, ADemoPlayerController::StaticClass, TEXT("ADemoPlayerController"), &Z_Registration_Info_UClass_ADemoPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADemoPlayerController), 3112270367U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_Demo_Source_Demo_Public_Player_DemoPlayerController_h_3284496093(TEXT("/Script/Demo"),
	Z_CompiledInDeferFile_FID_UE_Projects_Demo_Source_Demo_Public_Player_DemoPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_Demo_Source_Demo_Public_Player_DemoPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
