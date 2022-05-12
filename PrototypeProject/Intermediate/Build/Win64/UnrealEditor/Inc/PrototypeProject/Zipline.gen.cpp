// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PrototypeProject/Interactables/Zipline.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZipline() {}
// Cross Module References
	PROTOTYPEPROJECT_API UClass* Z_Construct_UClass_AZipline_NoRegister();
	PROTOTYPEPROJECT_API UClass* Z_Construct_UClass_AZipline();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PrototypeProject();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	CABLECOMPONENT_API UClass* Z_Construct_UClass_UCableComponent_NoRegister();
// End Cross Module References
	void AZipline::StaticRegisterNativesAZipline()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AZipline);
	UClass* Z_Construct_UClass_AZipline_NoRegister()
	{
		return AZipline::StaticClass();
	}
	struct Z_Construct_UClass_AZipline_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartPoleMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StartPoleMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndPoleMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EndPoleMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_pCableComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_pCableComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AZipline_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PrototypeProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZipline_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Interactables/Zipline.h" },
		{ "ModuleRelativePath", "Interactables/Zipline.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZipline_Statics::NewProp_StartPoleMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Interactables/Zipline.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AZipline_Statics::NewProp_StartPoleMesh = { "StartPoleMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZipline, StartPoleMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AZipline_Statics::NewProp_StartPoleMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZipline_Statics::NewProp_StartPoleMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZipline_Statics::NewProp_EndPoleMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Interactables/Zipline.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AZipline_Statics::NewProp_EndPoleMesh = { "EndPoleMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZipline, EndPoleMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AZipline_Statics::NewProp_EndPoleMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZipline_Statics::NewProp_EndPoleMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZipline_Statics::NewProp_m_pCableComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Cable" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Interactables/Zipline.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AZipline_Statics::NewProp_m_pCableComponent = { "m_pCableComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZipline, m_pCableComponent), Z_Construct_UClass_UCableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AZipline_Statics::NewProp_m_pCableComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZipline_Statics::NewProp_m_pCableComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AZipline_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZipline_Statics::NewProp_StartPoleMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZipline_Statics::NewProp_EndPoleMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZipline_Statics::NewProp_m_pCableComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AZipline_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AZipline>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AZipline_Statics::ClassParams = {
		&AZipline::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AZipline_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AZipline_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AZipline_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AZipline_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AZipline()
	{
		if (!Z_Registration_Info_UClass_AZipline.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AZipline.OuterSingleton, Z_Construct_UClass_AZipline_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AZipline.OuterSingleton;
	}
	template<> PROTOTYPEPROJECT_API UClass* StaticClass<AZipline>()
	{
		return AZipline::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AZipline);
	struct Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Interactables_Zipline_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Interactables_Zipline_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AZipline, AZipline::StaticClass, TEXT("AZipline"), &Z_Registration_Info_UClass_AZipline, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AZipline), 75023188U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Interactables_Zipline_h_1333307422(TEXT("/Script/PrototypeProject"),
		Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Interactables_Zipline_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Interactables_Zipline_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
