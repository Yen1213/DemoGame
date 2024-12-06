// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Demo/Public/AI/PlayerAIController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerAIController() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_AAIController();
DEMO_API UClass* Z_Construct_UClass_APlayerAIController();
DEMO_API UClass* Z_Construct_UClass_APlayerAIController_NoRegister();
UPackage* Z_Construct_UPackage__Script_Demo();
// End Cross Module References

// Begin Class APlayerAIController
void APlayerAIController::StaticRegisterNativesAPlayerAIController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlayerAIController);
UClass* Z_Construct_UClass_APlayerAIController_NoRegister()
{
	return APlayerAIController::StaticClass();
}
struct Z_Construct_UClass_APlayerAIController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "AI/PlayerAIController.h" },
		{ "ModuleRelativePath", "Public/AI/PlayerAIController.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerAIController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_APlayerAIController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAIController,
	(UObject* (*)())Z_Construct_UPackage__Script_Demo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerAIController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayerAIController_Statics::ClassParams = {
	&APlayerAIController::StaticClass,
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
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerAIController_Statics::Class_MetaDataParams), Z_Construct_UClass_APlayerAIController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APlayerAIController()
{
	if (!Z_Registration_Info_UClass_APlayerAIController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayerAIController.OuterSingleton, Z_Construct_UClass_APlayerAIController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APlayerAIController.OuterSingleton;
}
template<> DEMO_API UClass* StaticClass<APlayerAIController>()
{
	return APlayerAIController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerAIController);
APlayerAIController::~APlayerAIController() {}
// End Class APlayerAIController

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_Projects_Demo_Source_Demo_Public_AI_PlayerAIController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APlayerAIController, APlayerAIController::StaticClass, TEXT("APlayerAIController"), &Z_Registration_Info_UClass_APlayerAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerAIController), 1364403205U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_Demo_Source_Demo_Public_AI_PlayerAIController_h_593869024(TEXT("/Script/Demo"),
	Z_CompiledInDeferFile_FID_UE_Projects_Demo_Source_Demo_Public_AI_PlayerAIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_Demo_Source_Demo_Public_AI_PlayerAIController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
