// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DemoAssetManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEMO_DemoAssetManager_generated_h
#error "DemoAssetManager.generated.h already included, missing '#pragma once' in DemoAssetManager.h"
#endif
#define DEMO_DemoAssetManager_generated_h

#define FID_UE_Projects_Demo_Source_Demo_Public_DemoAssetManager_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDemoAssetManager(); \
	friend struct Z_Construct_UClass_UDemoAssetManager_Statics; \
public: \
	DECLARE_CLASS(UDemoAssetManager, UAssetManager, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Demo"), NO_API) \
	DECLARE_SERIALIZER(UDemoAssetManager)


#define FID_UE_Projects_Demo_Source_Demo_Public_DemoAssetManager_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDemoAssetManager(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDemoAssetManager(UDemoAssetManager&&); \
	UDemoAssetManager(const UDemoAssetManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDemoAssetManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDemoAssetManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDemoAssetManager) \
	NO_API virtual ~UDemoAssetManager();


#define FID_UE_Projects_Demo_Source_Demo_Public_DemoAssetManager_h_10_PROLOG
#define FID_UE_Projects_Demo_Source_Demo_Public_DemoAssetManager_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE_Projects_Demo_Source_Demo_Public_DemoAssetManager_h_13_INCLASS_NO_PURE_DECLS \
	FID_UE_Projects_Demo_Source_Demo_Public_DemoAssetManager_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEMO_API UClass* StaticClass<class UDemoAssetManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_Projects_Demo_Source_Demo_Public_DemoAssetManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
