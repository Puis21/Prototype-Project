// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PrototypeProject/Player/GrappleHook.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGrappleHook() {}
// Cross Module References
	PROTOTYPEPROJECT_API UClass* Z_Construct_UClass_AGrappleHook_NoRegister();
	PROTOTYPEPROJECT_API UClass* Z_Construct_UClass_AGrappleHook();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PrototypeProject();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	PROTOTYPEPROJECT_API UClass* Z_Construct_UClass_AGrappleTarget_NoRegister();
// End Cross Module References
	void AGrappleHook::StaticRegisterNativesAGrappleHook()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGrappleHook);
	UClass* Z_Construct_UClass_AGrappleHook_NoRegister()
	{
		return AGrappleHook::StaticClass();
	}
	struct Z_Construct_UClass_AGrappleHook_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_pGrappleProjectile_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_pGrappleProjectile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_pMeshComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_pMeshComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_pTargetLocation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_pTargetLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_fProjectileSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_m_fProjectileSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGrappleHook_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PrototypeProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrappleHook_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Player/GrappleHook.h" },
		{ "ModuleRelativePath", "Player/GrappleHook.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrappleHook_Statics::NewProp_m_pGrappleProjectile_MetaData[] = {
		{ "Category", "GrappleHook" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/GrappleHook.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGrappleHook_Statics::NewProp_m_pGrappleProjectile = { "m_pGrappleProjectile", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGrappleHook, m_pGrappleProjectile), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGrappleHook_Statics::NewProp_m_pGrappleProjectile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGrappleHook_Statics::NewProp_m_pGrappleProjectile_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrappleHook_Statics::NewProp_m_pMeshComp_MetaData[] = {
		{ "Category", "GrappleHook" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/GrappleHook.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGrappleHook_Statics::NewProp_m_pMeshComp = { "m_pMeshComp", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGrappleHook, m_pMeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGrappleHook_Statics::NewProp_m_pMeshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGrappleHook_Statics::NewProp_m_pMeshComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrappleHook_Statics::NewProp_m_pTargetLocation_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "GrappleHook" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Player/GrappleHook.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGrappleHook_Statics::NewProp_m_pTargetLocation = { "m_pTargetLocation", nullptr, (EPropertyFlags)0x0041000000000815, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGrappleHook, m_pTargetLocation), Z_Construct_UClass_AGrappleTarget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGrappleHook_Statics::NewProp_m_pTargetLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGrappleHook_Statics::NewProp_m_pTargetLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrappleHook_Statics::NewProp_m_fProjectileSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "GrappleHook" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Player/GrappleHook.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGrappleHook_Statics::NewProp_m_fProjectileSpeed = { "m_fProjectileSpeed", nullptr, (EPropertyFlags)0x0041000000000815, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGrappleHook, m_fProjectileSpeed), METADATA_PARAMS(Z_Construct_UClass_AGrappleHook_Statics::NewProp_m_fProjectileSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGrappleHook_Statics::NewProp_m_fProjectileSpeed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGrappleHook_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrappleHook_Statics::NewProp_m_pGrappleProjectile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrappleHook_Statics::NewProp_m_pMeshComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrappleHook_Statics::NewProp_m_pTargetLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrappleHook_Statics::NewProp_m_fProjectileSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGrappleHook_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGrappleHook>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGrappleHook_Statics::ClassParams = {
		&AGrappleHook::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGrappleHook_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGrappleHook_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGrappleHook_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGrappleHook_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGrappleHook()
	{
		if (!Z_Registration_Info_UClass_AGrappleHook.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGrappleHook.OuterSingleton, Z_Construct_UClass_AGrappleHook_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGrappleHook.OuterSingleton;
	}
	template<> PROTOTYPEPROJECT_API UClass* StaticClass<AGrappleHook>()
	{
		return AGrappleHook::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGrappleHook);
	struct Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Player_GrappleHook_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Player_GrappleHook_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGrappleHook, AGrappleHook::StaticClass, TEXT("AGrappleHook"), &Z_Registration_Info_UClass_AGrappleHook, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGrappleHook), 3577523729U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Player_GrappleHook_h_3499552954(TEXT("/Script/PrototypeProject"),
		Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Player_GrappleHook_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Player_GrappleHook_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
