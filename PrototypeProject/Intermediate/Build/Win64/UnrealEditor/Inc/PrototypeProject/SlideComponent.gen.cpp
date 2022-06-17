// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PrototypeProject/Player/Components/SlideComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlideComponent() {}
// Cross Module References
	PROTOTYPEPROJECT_API UClass* Z_Construct_UClass_USlideComponent_NoRegister();
	PROTOTYPEPROJECT_API UClass* Z_Construct_UClass_USlideComponent();
	PROTOTYPEPROJECT_API UClass* Z_Construct_UClass_UParkourMovementComponent();
	UPackage* Z_Construct_UPackage__Script_PrototypeProject();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USlideComponent::execCrouchTimelineProgress)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_fTransitionProgress);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CrouchTimelineProgress(Z_Param_fTransitionProgress);
		P_NATIVE_END;
	}
	void USlideComponent::StaticRegisterNativesUSlideComponent()
	{
		UClass* Class = USlideComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CrouchTimelineProgress", &USlideComponent::execCrouchTimelineProgress },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USlideComponent_CrouchTimelineProgress_Statics
	{
		struct SlideComponent_eventCrouchTimelineProgress_Parms
		{
			float fTransitionProgress;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_fTransitionProgress;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USlideComponent_CrouchTimelineProgress_Statics::NewProp_fTransitionProgress = { "fTransitionProgress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SlideComponent_eventCrouchTimelineProgress_Parms, fTransitionProgress), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USlideComponent_CrouchTimelineProgress_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlideComponent_CrouchTimelineProgress_Statics::NewProp_fTransitionProgress,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlideComponent_CrouchTimelineProgress_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/Components/SlideComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USlideComponent_CrouchTimelineProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USlideComponent, nullptr, "CrouchTimelineProgress", nullptr, nullptr, sizeof(Z_Construct_UFunction_USlideComponent_CrouchTimelineProgress_Statics::SlideComponent_eventCrouchTimelineProgress_Parms), Z_Construct_UFunction_USlideComponent_CrouchTimelineProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USlideComponent_CrouchTimelineProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USlideComponent_CrouchTimelineProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USlideComponent_CrouchTimelineProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USlideComponent_CrouchTimelineProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USlideComponent_CrouchTimelineProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USlideComponent);
	UClass* Z_Construct_UClass_USlideComponent_NoRegister()
	{
		return USlideComponent::StaticClass();
	}
	struct Z_Construct_UClass_USlideComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_pCapsuleHalfHeightCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_pCapsuleHalfHeightCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_fCrouchingCapsuleHalfHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_m_fCrouchingCapsuleHalfHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_fCrouchingCameraZOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_m_fCrouchingCameraZOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_fMaxCrouchSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_m_fMaxCrouchSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_fCrouchCapsuleRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_m_fCrouchCapsuleRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_bIsCrouching_MetaData[];
#endif
		static void NewProp_m_bIsCrouching_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_m_bIsCrouching;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_fFloorSlopeInfluenceMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_m_fFloorSlopeInfluenceMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_fSlideUpCounterForce_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_m_fSlideUpCounterForce;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_fSlidingTerminalSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_m_fSlidingTerminalSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_fSlidingBrakingDeceleration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_m_fSlidingBrakingDeceleration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_fSlideInitialSpeedBoost_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_m_fSlideInitialSpeedBoost;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_fMaxAngleToSlideUpFromSprint_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_m_fMaxAngleToSlideUpFromSprint;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USlideComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParkourMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_PrototypeProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USlideComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USlideComponent_CrouchTimelineProgress, "CrouchTimelineProgress" }, // 2602862103
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlideComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Player/Components/SlideComponent.h" },
		{ "ModuleRelativePath", "Player/Components/SlideComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlideComponent_Statics::NewProp_m_pCapsuleHalfHeightCurve_MetaData[] = {
		{ "Category", "Custom Movement | Crouching" },
		{ "Comment", "//Curve float for crouch\n//\"Custom Movement | Crouching | Timeline | Capsule Scale Down\"\n" },
		{ "ModuleRelativePath", "Player/Components/SlideComponent.h" },
		{ "ToolTip", "Curve float for crouch\n\"Custom Movement | Crouching | Timeline | Capsule Scale Down\"" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USlideComponent_Statics::NewProp_m_pCapsuleHalfHeightCurve = { "m_pCapsuleHalfHeightCurve", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USlideComponent, m_pCapsuleHalfHeightCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USlideComponent_Statics::NewProp_m_pCapsuleHalfHeightCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlideComponent_Statics::NewProp_m_pCapsuleHalfHeightCurve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlideComponent_Statics::NewProp_m_fCrouchingCapsuleHalfHeight_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Custom Movement | Crouching" },
		{ "ClampMax", "60.0" },
		{ "ClampMin", "10.0" },
		{ "ModuleRelativePath", "Player/Components/SlideComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USlideComponent_Statics::NewProp_m_fCrouchingCapsuleHalfHeight = { "m_fCrouchingCapsuleHalfHeight", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USlideComponent, m_fCrouchingCapsuleHalfHeight), METADATA_PARAMS(Z_Construct_UClass_USlideComponent_Statics::NewProp_m_fCrouchingCapsuleHalfHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlideComponent_Statics::NewProp_m_fCrouchingCapsuleHalfHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlideComponent_Statics::NewProp_m_fCrouchingCameraZOffset_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Custom Movement | Crouching" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "10.0" },
		{ "ModuleRelativePath", "Player/Components/SlideComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USlideComponent_Statics::NewProp_m_fCrouchingCameraZOffset = { "m_fCrouchingCameraZOffset", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USlideComponent, m_fCrouchingCameraZOffset), METADATA_PARAMS(Z_Construct_UClass_USlideComponent_Statics::NewProp_m_fCrouchingCameraZOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlideComponent_Statics::NewProp_m_fCrouchingCameraZOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlideComponent_Statics::NewProp_m_fMaxCrouchSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Custom Movement | Crouching" },
		{ "DisplayName", "Crouch Speed" },
		{ "ModuleRelativePath", "Player/Components/SlideComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USlideComponent_Statics::NewProp_m_fMaxCrouchSpeed = { "m_fMaxCrouchSpeed", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USlideComponent, m_fMaxCrouchSpeed), METADATA_PARAMS(Z_Construct_UClass_USlideComponent_Statics::NewProp_m_fMaxCrouchSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlideComponent_Statics::NewProp_m_fMaxCrouchSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlideComponent_Statics::NewProp_m_fCrouchCapsuleRadius_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Custom Movement | Crouching" },
		{ "DisplayName", "Crouch Capsule Radius" },
		{ "ModuleRelativePath", "Player/Components/SlideComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USlideComponent_Statics::NewProp_m_fCrouchCapsuleRadius = { "m_fCrouchCapsuleRadius", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USlideComponent, m_fCrouchCapsuleRadius), METADATA_PARAMS(Z_Construct_UClass_USlideComponent_Statics::NewProp_m_fCrouchCapsuleRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlideComponent_Statics::NewProp_m_fCrouchCapsuleRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlideComponent_Statics::NewProp_m_bIsCrouching_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Custom Movement | Crouching" },
		{ "DisplayName", "Is Crouching" },
		{ "ModuleRelativePath", "Player/Components/SlideComponent.h" },
	};
#endif
	void Z_Construct_UClass_USlideComponent_Statics::NewProp_m_bIsCrouching_SetBit(void* Obj)
	{
		((USlideComponent*)Obj)->m_bIsCrouching = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USlideComponent_Statics::NewProp_m_bIsCrouching = { "m_bIsCrouching", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USlideComponent), &Z_Construct_UClass_USlideComponent_Statics::NewProp_m_bIsCrouching_SetBit, METADATA_PARAMS(Z_Construct_UClass_USlideComponent_Statics::NewProp_m_bIsCrouching_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlideComponent_Statics::NewProp_m_bIsCrouching_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlideComponent_Statics::NewProp_m_fFloorSlopeInfluenceMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Custom Movement | Sliding" },
		{ "ClampMax", "1000000.0" },
		{ "ClampMin", "100000.0" },
		{ "ModuleRelativePath", "Player/Components/SlideComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USlideComponent_Statics::NewProp_m_fFloorSlopeInfluenceMultiplier = { "m_fFloorSlopeInfluenceMultiplier", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USlideComponent, m_fFloorSlopeInfluenceMultiplier), METADATA_PARAMS(Z_Construct_UClass_USlideComponent_Statics::NewProp_m_fFloorSlopeInfluenceMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlideComponent_Statics::NewProp_m_fFloorSlopeInfluenceMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlideComponent_Statics::NewProp_m_fSlideUpCounterForce_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Custom Movement | Sliding" },
		{ "ClampMax", "3.0" },
		{ "ClampMin", "0.25" },
		{ "ModuleRelativePath", "Player/Components/SlideComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USlideComponent_Statics::NewProp_m_fSlideUpCounterForce = { "m_fSlideUpCounterForce", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USlideComponent, m_fSlideUpCounterForce), METADATA_PARAMS(Z_Construct_UClass_USlideComponent_Statics::NewProp_m_fSlideUpCounterForce_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlideComponent_Statics::NewProp_m_fSlideUpCounterForce_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlideComponent_Statics::NewProp_m_fSlidingTerminalSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Custom Movement | Sliding" },
		{ "ClampMax", "9000.0" },
		{ "ClampMin", "4000.0" },
		{ "ModuleRelativePath", "Player/Components/SlideComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USlideComponent_Statics::NewProp_m_fSlidingTerminalSpeed = { "m_fSlidingTerminalSpeed", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USlideComponent, m_fSlidingTerminalSpeed), METADATA_PARAMS(Z_Construct_UClass_USlideComponent_Statics::NewProp_m_fSlidingTerminalSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlideComponent_Statics::NewProp_m_fSlidingTerminalSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlideComponent_Statics::NewProp_m_fSlidingBrakingDeceleration_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Custom Movement | Sliding" },
		{ "ClampMax", "3000.0" },
		{ "ClampMin", "800.0" },
		{ "ModuleRelativePath", "Player/Components/SlideComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USlideComponent_Statics::NewProp_m_fSlidingBrakingDeceleration = { "m_fSlidingBrakingDeceleration", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USlideComponent, m_fSlidingBrakingDeceleration), METADATA_PARAMS(Z_Construct_UClass_USlideComponent_Statics::NewProp_m_fSlidingBrakingDeceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlideComponent_Statics::NewProp_m_fSlidingBrakingDeceleration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlideComponent_Statics::NewProp_m_fSlideInitialSpeedBoost_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Custom Movement | Sliding" },
		{ "ClampMax", "300000.0" },
		{ "ClampMin", "20000.0" },
		{ "ModuleRelativePath", "Player/Components/SlideComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USlideComponent_Statics::NewProp_m_fSlideInitialSpeedBoost = { "m_fSlideInitialSpeedBoost", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USlideComponent, m_fSlideInitialSpeedBoost), METADATA_PARAMS(Z_Construct_UClass_USlideComponent_Statics::NewProp_m_fSlideInitialSpeedBoost_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlideComponent_Statics::NewProp_m_fSlideInitialSpeedBoost_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlideComponent_Statics::NewProp_m_fMaxAngleToSlideUpFromSprint_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Custom Movement | Sliding" },
		{ "ClampMax", "30.0" },
		{ "ClampMin", "5.0" },
		{ "ModuleRelativePath", "Player/Components/SlideComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USlideComponent_Statics::NewProp_m_fMaxAngleToSlideUpFromSprint = { "m_fMaxAngleToSlideUpFromSprint", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USlideComponent, m_fMaxAngleToSlideUpFromSprint), METADATA_PARAMS(Z_Construct_UClass_USlideComponent_Statics::NewProp_m_fMaxAngleToSlideUpFromSprint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlideComponent_Statics::NewProp_m_fMaxAngleToSlideUpFromSprint_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USlideComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlideComponent_Statics::NewProp_m_pCapsuleHalfHeightCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlideComponent_Statics::NewProp_m_fCrouchingCapsuleHalfHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlideComponent_Statics::NewProp_m_fCrouchingCameraZOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlideComponent_Statics::NewProp_m_fMaxCrouchSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlideComponent_Statics::NewProp_m_fCrouchCapsuleRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlideComponent_Statics::NewProp_m_bIsCrouching,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlideComponent_Statics::NewProp_m_fFloorSlopeInfluenceMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlideComponent_Statics::NewProp_m_fSlideUpCounterForce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlideComponent_Statics::NewProp_m_fSlidingTerminalSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlideComponent_Statics::NewProp_m_fSlidingBrakingDeceleration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlideComponent_Statics::NewProp_m_fSlideInitialSpeedBoost,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlideComponent_Statics::NewProp_m_fMaxAngleToSlideUpFromSprint,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USlideComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USlideComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USlideComponent_Statics::ClassParams = {
		&USlideComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USlideComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USlideComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USlideComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USlideComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USlideComponent()
	{
		if (!Z_Registration_Info_UClass_USlideComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USlideComponent.OuterSingleton, Z_Construct_UClass_USlideComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USlideComponent.OuterSingleton;
	}
	template<> PROTOTYPEPROJECT_API UClass* StaticClass<USlideComponent>()
	{
		return USlideComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USlideComponent);
	struct Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Player_Components_SlideComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Player_Components_SlideComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USlideComponent, USlideComponent::StaticClass, TEXT("USlideComponent"), &Z_Registration_Info_UClass_USlideComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USlideComponent), 3210299800U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Player_Components_SlideComponent_h_2915270859(TEXT("/Script/PrototypeProject"),
		Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Player_Components_SlideComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Player_Components_SlideComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
