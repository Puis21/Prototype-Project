// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PrototypeProject/Player/Components/GrapplingHookComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGrapplingHookComponent() {}
// Cross Module References
	PROTOTYPEPROJECT_API UClass* Z_Construct_UClass_UGrapplingHookComponent_NoRegister();
	PROTOTYPEPROJECT_API UClass* Z_Construct_UClass_UGrapplingHookComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_PrototypeProject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	PROTOTYPEPROJECT_API UClass* Z_Construct_UClass_AGrappleHook_NoRegister();
	PROTOTYPEPROJECT_API UClass* Z_Construct_UClass_AGrappleLine_NoRegister();
	PROTOTYPEPROJECT_API UClass* Z_Construct_UClass_ATestGrapple_NoRegister();
	PROTOTYPEPROJECT_API UEnum* Z_Construct_UEnum_PrototypeProject_EGrappleState();
// End Cross Module References
	void UGrapplingHookComponent::StaticRegisterNativesUGrapplingHookComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGrapplingHookComponent);
	UClass* Z_Construct_UClass_UGrapplingHookComponent_NoRegister()
	{
		return UGrapplingHookComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGrapplingHookComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_pGrappleHook_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_m_pGrappleHook;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_pGrappleLine_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_m_pGrappleLine;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TestGrapple_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_TestGrapple;
		static const UECodeGen_Private::FBytePropertyParams NewProp_m_eGrappleState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_eGrappleState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_m_eGrappleState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_fMaxGrappleDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_m_fMaxGrappleDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_fPlayerGrappleSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_m_fPlayerGrappleSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGrapplingHookComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_PrototypeProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrapplingHookComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Player/Components/GrapplingHookComponent.h" },
		{ "ModuleRelativePath", "Player/Components/GrapplingHookComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrapplingHookComponent_Statics::NewProp_m_pGrappleHook_MetaData[] = {
		{ "Category", "GrapplingHookComponent" },
		{ "ModuleRelativePath", "Player/Components/GrapplingHookComponent.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGrapplingHookComponent_Statics::NewProp_m_pGrappleHook = { "m_pGrappleHook", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGrapplingHookComponent, m_pGrappleHook), Z_Construct_UClass_AGrappleHook_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UGrapplingHookComponent_Statics::NewProp_m_pGrappleHook_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGrapplingHookComponent_Statics::NewProp_m_pGrappleHook_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrapplingHookComponent_Statics::NewProp_m_pGrappleLine_MetaData[] = {
		{ "Category", "GrapplingHookComponent" },
		{ "ModuleRelativePath", "Player/Components/GrapplingHookComponent.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGrapplingHookComponent_Statics::NewProp_m_pGrappleLine = { "m_pGrappleLine", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGrapplingHookComponent, m_pGrappleLine), Z_Construct_UClass_AGrappleLine_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UGrapplingHookComponent_Statics::NewProp_m_pGrappleLine_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGrapplingHookComponent_Statics::NewProp_m_pGrappleLine_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrapplingHookComponent_Statics::NewProp_TestGrapple_MetaData[] = {
		{ "Category", "GrapplingHookComponent" },
		{ "ModuleRelativePath", "Player/Components/GrapplingHookComponent.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGrapplingHookComponent_Statics::NewProp_TestGrapple = { "TestGrapple", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGrapplingHookComponent, TestGrapple), Z_Construct_UClass_ATestGrapple_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UGrapplingHookComponent_Statics::NewProp_TestGrapple_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGrapplingHookComponent_Statics::NewProp_TestGrapple_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGrapplingHookComponent_Statics::NewProp_m_eGrappleState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrapplingHookComponent_Statics::NewProp_m_eGrappleState_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "GrapplingHookComponent" },
		{ "ModuleRelativePath", "Player/Components/GrapplingHookComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGrapplingHookComponent_Statics::NewProp_m_eGrappleState = { "m_eGrappleState", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGrapplingHookComponent, m_eGrappleState), Z_Construct_UEnum_PrototypeProject_EGrappleState, METADATA_PARAMS(Z_Construct_UClass_UGrapplingHookComponent_Statics::NewProp_m_eGrappleState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGrapplingHookComponent_Statics::NewProp_m_eGrappleState_MetaData)) }; // 900937684
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrapplingHookComponent_Statics::NewProp_m_fMaxGrappleDistance_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Grappple" },
		{ "DisplayName", "Gapple Target Display Range" },
		{ "ModuleRelativePath", "Player/Components/GrapplingHookComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGrapplingHookComponent_Statics::NewProp_m_fMaxGrappleDistance = { "m_fMaxGrappleDistance", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGrapplingHookComponent, m_fMaxGrappleDistance), METADATA_PARAMS(Z_Construct_UClass_UGrapplingHookComponent_Statics::NewProp_m_fMaxGrappleDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGrapplingHookComponent_Statics::NewProp_m_fMaxGrappleDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrapplingHookComponent_Statics::NewProp_m_fPlayerGrappleSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Grappple" },
		{ "DisplayName", "Gapple Speed" },
		{ "ModuleRelativePath", "Player/Components/GrapplingHookComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGrapplingHookComponent_Statics::NewProp_m_fPlayerGrappleSpeed = { "m_fPlayerGrappleSpeed", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGrapplingHookComponent, m_fPlayerGrappleSpeed), METADATA_PARAMS(Z_Construct_UClass_UGrapplingHookComponent_Statics::NewProp_m_fPlayerGrappleSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGrapplingHookComponent_Statics::NewProp_m_fPlayerGrappleSpeed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGrapplingHookComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrapplingHookComponent_Statics::NewProp_m_pGrappleHook,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrapplingHookComponent_Statics::NewProp_m_pGrappleLine,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrapplingHookComponent_Statics::NewProp_TestGrapple,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrapplingHookComponent_Statics::NewProp_m_eGrappleState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrapplingHookComponent_Statics::NewProp_m_eGrappleState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrapplingHookComponent_Statics::NewProp_m_fMaxGrappleDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrapplingHookComponent_Statics::NewProp_m_fPlayerGrappleSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGrapplingHookComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGrapplingHookComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGrapplingHookComponent_Statics::ClassParams = {
		&UGrapplingHookComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGrapplingHookComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGrapplingHookComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGrapplingHookComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGrapplingHookComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGrapplingHookComponent()
	{
		if (!Z_Registration_Info_UClass_UGrapplingHookComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGrapplingHookComponent.OuterSingleton, Z_Construct_UClass_UGrapplingHookComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGrapplingHookComponent.OuterSingleton;
	}
	template<> PROTOTYPEPROJECT_API UClass* StaticClass<UGrapplingHookComponent>()
	{
		return UGrapplingHookComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGrapplingHookComponent);
	struct Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Player_Components_GrapplingHookComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Player_Components_GrapplingHookComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGrapplingHookComponent, UGrapplingHookComponent::StaticClass, TEXT("UGrapplingHookComponent"), &Z_Registration_Info_UClass_UGrapplingHookComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGrapplingHookComponent), 3472160264U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Player_Components_GrapplingHookComponent_h_4159304923(TEXT("/Script/PrototypeProject"),
		Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Player_Components_GrapplingHookComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Player_Components_GrapplingHookComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
