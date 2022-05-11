// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROTOTYPEPROJECT_GrappleState_generated_h
#error "GrappleState.generated.h already included, missing '#pragma once' in GrappleState.h"
#endif
#define PROTOTYPEPROJECT_GrappleState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PrototypeProject_Source_PrototypeProject_GrappleState_h


#define FOREACH_ENUM_EGRAPPLESTATE(op) \
	op(EGrappleState::EGS_Retracted) \
	op(EGrappleState::EGS_Firing) \
	op(EGrappleState::EGS_NearingTarget) \
	op(EGrappleState::EGS_OnTarget) 

enum class EGrappleState : uint8;
template<> PROTOTYPEPROJECT_API UEnum* StaticEnum<EGrappleState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
