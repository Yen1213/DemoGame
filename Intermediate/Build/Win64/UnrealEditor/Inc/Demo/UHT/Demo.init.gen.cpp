// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDemo_init() {}
	DEMO_API UFunction* Z_Construct_UDelegateFunction_Demo_CharacterDiedDelegate__DelegateSignature();
	DEMO_API UFunction* Z_Construct_UDelegateFunction_Demo_ReceivedDamageDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Demo;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Demo()
	{
		if (!Z_Registration_Info_UPackage__Script_Demo.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_Demo_CharacterDiedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Demo_ReceivedDamageDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Demo",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xC19C58E6,
				0x8D6277D9,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Demo.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Demo.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Demo(Z_Construct_UPackage__Script_Demo, TEXT("/Script/Demo"), Z_Registration_Info_UPackage__Script_Demo, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xC19C58E6, 0x8D6277D9));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
