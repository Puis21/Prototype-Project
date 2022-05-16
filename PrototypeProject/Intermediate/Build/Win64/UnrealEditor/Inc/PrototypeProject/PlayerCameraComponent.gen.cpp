// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PrototypeProject/Player/Camera/PlayerCameraComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerCameraComponent() {}
// Cross Module References
	PROTOTYPEPROJECT_API UClass* Z_Construct_UClass_UPlayerCameraComponent_NoRegister();
	PROTOTYPEPROJECT_API UClass* Z_Construct_UClass_UPlayerCameraComponent();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent();
	UPackage* Z_Construct_UPackage__Script_PrototypeProject();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UPlayerCameraComponent::execFOVTimelineProgress)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_fFOVProgress);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FOVTimelineProgress(Z_Param_fFOVProgress);
		P_NATIVE_END;
	}
	void UPlayerCameraComponent::StaticRegisterNativesUPlayerCameraComponent()
	{
		UClass* Class = UPlayerCameraComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FOVTimelineProgress", &UPlayerCameraComponent::execFOVTimelineProgress },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlayerCameraComponent_FOVTimelineProgress_Statics
	{
		struct PlayerCameraComponent_eventFOVTimelineProgress_Parms
		{
			float fFOVProgress;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_fFOVProgress;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlayerCameraComponent_FOVTimelineProgress_Statics::NewProp_fFOVProgress = { "fFOVProgress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerCameraComponent_eventFOVTimelineProgress_Parms, fFOVProgress), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerCameraComponent_FOVTimelineProgress_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerCameraComponent_FOVTimelineProgress_Statics::NewProp_fFOVProgress,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerCameraComponent_FOVTimelineProgress_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/Camera/PlayerCameraComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerCameraComponent_FOVTimelineProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerCameraComponent, nullptr, "FOVTimelineProgress", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayerCameraComponent_FOVTimelineProgress_Statics::PlayerCameraComponent_eventFOVTimelineProgress_Parms), Z_Construct_UFunction_UPlayerCameraComponent_FOVTimelineProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerCameraComponent_FOVTimelineProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerCameraComponent_FOVTimelineProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerCameraComponent_FOVTimelineProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerCameraComponent_FOVTimelineProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerCameraComponent_FOVTimelineProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerCameraComponent);
	UClass* Z_Construct_UClass_UPlayerCameraComponent_NoRegister()
	{
		return UPlayerCameraComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerCameraComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_fBaseFOV_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_m_fBaseFOV;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_fSprintAddedFOV_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_m_fSprintAddedFOV;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_fCrouchAddedFOV_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_m_fCrouchAddedFOV;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_fSlideAddedFOV_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_m_fSlideAddedFOV;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_pCameraFOVCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_pCameraFOVCurve;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerCameraComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCameraComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_PrototypeProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlayerCameraComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerCameraComponent_FOVTimelineProgress, "FOVTimelineProgress" }, // 174227502
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerCameraComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Mobility Rendering LOD Trigger PhysicsVolume" },
		{ "IncludePath", "Player/Camera/PlayerCameraComponent.h" },
		{ "ModuleRelativePath", "Player/Camera/PlayerCameraComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerCameraComponent_Statics::NewProp_m_fBaseFOV_MetaData[] = {
		{ "Category", "FOV" },
		{ "Comment", "//TSubclassOf<UMatineeCameraShake> Matinee;\n" },
		{ "DisplayName", "Walk FOV" },
		{ "ModuleRelativePath", "Player/Camera/PlayerCameraComponent.h" },
		{ "ToolTip", "TSubclassOf<UMatineeCameraShake> Matinee;" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerCameraComponent_Statics::NewProp_m_fBaseFOV = { "m_fBaseFOV", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerCameraComponent, m_fBaseFOV), METADATA_PARAMS(Z_Construct_UClass_UPlayerCameraComponent_Statics::NewProp_m_fBaseFOV_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCameraComponent_Statics::NewProp_m_fBaseFOV_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerCameraComponent_Statics::NewProp_m_fSprintAddedFOV_MetaData[] = {
		{ "Category", "FOV" },
		{ "DisplayName", "Sprint FOV" },
		{ "ModuleRelativePath", "Player/Camera/PlayerCameraComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerCameraComponent_Statics::NewProp_m_fSprintAddedFOV = { "m_fSprintAddedFOV", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerCameraComponent, m_fSprintAddedFOV), METADATA_PARAMS(Z_Construct_UClass_UPlayerCameraComponent_Statics::NewProp_m_fSprintAddedFOV_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCameraComponent_Statics::NewProp_m_fSprintAddedFOV_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerCameraComponent_Statics::NewProp_m_fCrouchAddedFOV_MetaData[] = {
		{ "Category", "FOV" },
		{ "DisplayName", "Crouch FOV" },
		{ "ModuleRelativePath", "Player/Camera/PlayerCameraComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerCameraComponent_Statics::NewProp_m_fCrouchAddedFOV = { "m_fCrouchAddedFOV", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerCameraComponent, m_fCrouchAddedFOV), METADATA_PARAMS(Z_Construct_UClass_UPlayerCameraComponent_Statics::NewProp_m_fCrouchAddedFOV_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCameraComponent_Statics::NewProp_m_fCrouchAddedFOV_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerCameraComponent_Statics::NewProp_m_fSlideAddedFOV_MetaData[] = {
		{ "Category", "FOV" },
		{ "DisplayName", "Slinde FOV" },
		{ "ModuleRelativePath", "Player/Camera/PlayerCameraComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerCameraComponent_Statics::NewProp_m_fSlideAddedFOV = { "m_fSlideAddedFOV", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerCameraComponent, m_fSlideAddedFOV), METADATA_PARAMS(Z_Construct_UClass_UPlayerCameraComponent_Statics::NewProp_m_fSlideAddedFOV_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCameraComponent_Statics::NewProp_m_fSlideAddedFOV_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerCameraComponent_Statics::NewProp_m_pCameraFOVCurve_MetaData[] = {
		{ "Category", "FOV" },
		{ "DisplayName", "Curve float" },
		{ "ModuleRelativePath", "Player/Camera/PlayerCameraComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerCameraComponent_Statics::NewProp_m_pCameraFOVCurve = { "m_pCameraFOVCurve", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerCameraComponent, m_pCameraFOVCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerCameraComponent_Statics::NewProp_m_pCameraFOVCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCameraComponent_Statics::NewProp_m_pCameraFOVCurve_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerCameraComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerCameraComponent_Statics::NewProp_m_fBaseFOV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerCameraComponent_Statics::NewProp_m_fSprintAddedFOV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerCameraComponent_Statics::NewProp_m_fCrouchAddedFOV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerCameraComponent_Statics::NewProp_m_fSlideAddedFOV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerCameraComponent_Statics::NewProp_m_pCameraFOVCurve,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerCameraComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerCameraComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerCameraComponent_Statics::ClassParams = {
		&UPlayerCameraComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPlayerCameraComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCameraComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayerCameraComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCameraComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerCameraComponent()
	{
		if (!Z_Registration_Info_UClass_UPlayerCameraComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerCameraComponent.OuterSingleton, Z_Construct_UClass_UPlayerCameraComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlayerCameraComponent.OuterSingleton;
	}
	template<> PROTOTYPEPROJECT_API UClass* StaticClass<UPlayerCameraComponent>()
	{
		return UPlayerCameraComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerCameraComponent);
	struct Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Player_Camera_PlayerCameraComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Player_Camera_PlayerCameraComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerCameraComponent, UPlayerCameraComponent::StaticClass, TEXT("UPlayerCameraComponent"), &Z_Registration_Info_UClass_UPlayerCameraComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerCameraComponent), 1192134373U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Player_Camera_PlayerCameraComponent_h_132156651(TEXT("/Script/PrototypeProject"),
		Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Player_Camera_PlayerCameraComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Player_Camera_PlayerCameraComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
