// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Demo.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEMO_Demo_generated_h
#error "Demo.generated.h already included, missing '#pragma once' in Demo.h"
#endif
#define DEMO_Demo_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_Projects_Demo_Source_Demo_Demo_h


#define FOREACH_ENUM_DEMOABILITYID(op) \
	op(DemoAbilityID::None) \
	op(DemoAbilityID::Confirm) \
	op(DemoAbilityID::Cancel) 

enum class DemoAbilityID : uint8;
template<> struct TIsUEnumClass<DemoAbilityID> { enum { Value = true }; };
template<> DEMO_API UEnum* StaticEnum<DemoAbilityID>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
