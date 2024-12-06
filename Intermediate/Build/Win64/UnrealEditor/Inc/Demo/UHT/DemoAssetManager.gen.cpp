// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Demo/Public/DemoAssetManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDemoAssetManager() {}

// Begin Cross Module References
DEMO_API UClass* Z_Construct_UClass_UDemoAssetManager();
DEMO_API UClass* Z_Construct_UClass_UDemoAssetManager_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAssetManager();
UPackage* Z_Construct_UPackage__Script_Demo();
// End Cross Module References

// Begin Class UDemoAssetManager
void UDemoAssetManager::StaticRegisterNativesUDemoAssetManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDemoAssetManager);
UClass* Z_Construct_UClass_UDemoAssetManager_NoRegister()
{
	return UDemoAssetManager::StaticClass();
}
struct Z_Construct_UClass_UDemoAssetManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DemoAssetManager.h" },
		{ "ModuleRelativePath", "Public/DemoAssetManager.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDemoAssetManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDemoAssetManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAssetManager,
	(UObject* (*)())Z_Construct_UPackage__Script_Demo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDemoAssetManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDemoAssetManager_Statics::ClassParams = {
	&UDemoAssetManager::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDemoAssetManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UDemoAssetManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDemoAssetManager()
{
	if (!Z_Registration_Info_UClass_UDemoAssetManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDemoAssetManager.OuterSingleton, Z_Construct_UClass_UDemoAssetManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDemoAssetManager.OuterSingleton;
}
template<> DEMO_API UClass* StaticClass<UDemoAssetManager>()
{
	return UDemoAssetManager::StaticClass();
}
UDemoAssetManager::UDemoAssetManager() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDemoAssetManager);
UDemoAssetManager::~UDemoAssetManager() {}
// End Class UDemoAssetManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_Projects_Demo_Source_Demo_Public_DemoAssetManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDemoAssetManager, UDemoAssetManager::StaticClass, TEXT("UDemoAssetManager"), &Z_Registration_Info_UClass_UDemoAssetManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDemoAssetManager), 626075567U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_Demo_Source_Demo_Public_DemoAssetManager_h_105340434(TEXT("/Script/Demo"),
	Z_CompiledInDeferFile_FID_UE_Projects_Demo_Source_Demo_Public_DemoAssetManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_Demo_Source_Demo_Public_DemoAssetManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
