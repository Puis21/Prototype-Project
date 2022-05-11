// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PrototypeProject/TESTS/TestGrapple.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestGrapple() {}
// Cross Module References
	PROTOTYPEPROJECT_API UClass* Z_Construct_UClass_ATestGrapple_NoRegister();
	PROTOTYPEPROJECT_API UClass* Z_Construct_UClass_ATestGrapple();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PrototypeProject();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	PROTOTYPEPROJECT_API UClass* Z_Construct_UClass_AGrappleTarget_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void ATestGrapple::StaticRegisterNativesATestGrapple()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATestGrapple);
	UClass* Z_Construct_UClass_ATestGrapple_NoRegister()
	{
		return ATestGrapple::StaticClass();
	}
	struct Z_Construct_UClass_ATestGrapple_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SceneComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_pGrappleProjectile_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_pGrappleProjectile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_pMeshComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_pMeshComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_pGrappleTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_pGrappleTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_v3Direction_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_m_v3Direction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_fProjectileSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_m_fProjectileSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATestGrapple_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PrototypeProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestGrapple_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TESTS/TestGrapple.h" },
		{ "ModuleRelativePath", "TESTS/TestGrapple.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestGrapple_Statics::NewProp_SceneComponent_MetaData[] = {
		{ "Category", "TestGrapple" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TESTS/TestGrapple.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATestGrapple_Statics::NewProp_SceneComponent = { "SceneComponent", nullptr, (EPropertyFlags)0x00400000000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATestGrapple, SceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATestGrapple_Statics::NewProp_SceneComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATestGrapple_Statics::NewProp_SceneComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestGrapple_Statics::NewProp_m_pGrappleProjectile_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TestGrapple" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TESTS/TestGrapple.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATestGrapple_Statics::NewProp_m_pGrappleProjectile = { "m_pGrappleProjectile", nullptr, (EPropertyFlags)0x004000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATestGrapple, m_pGrappleProjectile), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATestGrapple_Statics::NewProp_m_pGrappleProjectile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATestGrapple_Statics::NewProp_m_pGrappleProjectile_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestGrapple_Statics::NewProp_m_pMeshComp_MetaData[] = {
		{ "Category", "TestGrapple" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TESTS/TestGrapple.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATestGrapple_Statics::NewProp_m_pMeshComp = { "m_pMeshComp", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATestGrapple, m_pMeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATestGrapple_Statics::NewProp_m_pMeshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATestGrapple_Statics::NewProp_m_pMeshComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestGrapple_Statics::NewProp_m_pGrappleTarget_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TestGrapple" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "TESTS/TestGrapple.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATestGrapple_Statics::NewProp_m_pGrappleTarget = { "m_pGrappleTarget", nullptr, (EPropertyFlags)0x0041000000000815, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATestGrapple, m_pGrappleTarget), Z_Construct_UClass_AGrappleTarget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATestGrapple_Statics::NewProp_m_pGrappleTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATestGrapple_Statics::NewProp_m_pGrappleTarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestGrapple_Statics::NewProp_m_v3Direction_MetaData[] = {
		{ "Category", "TestGrapple" },
		{ "ModuleRelativePath", "TESTS/TestGrapple.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATestGrapple_Statics::NewProp_m_v3Direction = { "m_v3Direction", nullptr, (EPropertyFlags)0x0010000000000805, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATestGrapple, m_v3Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ATestGrapple_Statics::NewProp_m_v3Direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATestGrapple_Statics::NewProp_m_v3Direction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestGrapple_Statics::NewProp_m_fProjectileSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TestGrapple" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "TESTS/TestGrapple.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATestGrapple_Statics::NewProp_m_fProjectileSpeed = { "m_fProjectileSpeed", nullptr, (EPropertyFlags)0x0011000000000815, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATestGrapple, m_fProjectileSpeed), METADATA_PARAMS(Z_Construct_UClass_ATestGrapple_Statics::NewProp_m_fProjectileSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATestGrapple_Statics::NewProp_m_fProjectileSpeed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATestGrapple_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestGrapple_Statics::NewProp_SceneComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestGrapple_Statics::NewProp_m_pGrappleProjectile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestGrapple_Statics::NewProp_m_pMeshComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestGrapple_Statics::NewProp_m_pGrappleTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestGrapple_Statics::NewProp_m_v3Direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestGrapple_Statics::NewProp_m_fProjectileSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATestGrapple_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATestGrapple>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATestGrapple_Statics::ClassParams = {
		&ATestGrapple::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATestGrapple_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATestGrapple_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATestGrapple_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATestGrapple_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATestGrapple()
	{
		if (!Z_Registration_Info_UClass_ATestGrapple.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATestGrapple.OuterSingleton, Z_Construct_UClass_ATestGrapple_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATestGrapple.OuterSingleton;
	}
	template<> PROTOTYPEPROJECT_API UClass* StaticClass<ATestGrapple>()
	{
		return ATestGrapple::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATestGrapple);
	struct Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_TESTS_TestGrapple_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_TESTS_TestGrapple_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATestGrapple, ATestGrapple::StaticClass, TEXT("ATestGrapple"), &Z_Registration_Info_UClass_ATestGrapple, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATestGrapple), 3062247376U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_TESTS_TestGrapple_h_1911819831(TEXT("/Script/PrototypeProject"),
		Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_TESTS_TestGrapple_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_TESTS_TestGrapple_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
