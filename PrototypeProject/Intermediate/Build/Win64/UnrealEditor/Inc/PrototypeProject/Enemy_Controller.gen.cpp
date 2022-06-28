// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PrototypeProject/Enemy/Enemy_Controller.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemy_Controller() {}
// Cross Module References
	PROTOTYPEPROJECT_API UClass* Z_Construct_UClass_AEnemy_Controller_NoRegister();
	PROTOTYPEPROJECT_API UClass* Z_Construct_UClass_AEnemy_Controller();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_PrototypeProject();
// End Cross Module References
	void AEnemy_Controller::StaticRegisterNativesAEnemy_Controller()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemy_Controller);
	UClass* Z_Construct_UClass_AEnemy_Controller_NoRegister()
	{
		return AEnemy_Controller::StaticClass();
	}
	struct Z_Construct_UClass_AEnemy_Controller_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemy_Controller_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_PrototypeProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Controller_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Enemy/Enemy_Controller.h" },
		{ "ModuleRelativePath", "Enemy/Enemy_Controller.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemy_Controller_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemy_Controller>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemy_Controller_Statics::ClassParams = {
		&AEnemy_Controller::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemy_Controller_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Controller_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemy_Controller()
	{
		if (!Z_Registration_Info_UClass_AEnemy_Controller.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemy_Controller.OuterSingleton, Z_Construct_UClass_AEnemy_Controller_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEnemy_Controller.OuterSingleton;
	}
	template<> PROTOTYPEPROJECT_API UClass* StaticClass<AEnemy_Controller>()
	{
		return AEnemy_Controller::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemy_Controller);
	struct Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Enemy_Enemy_Controller_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Enemy_Enemy_Controller_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEnemy_Controller, AEnemy_Controller::StaticClass, TEXT("AEnemy_Controller"), &Z_Registration_Info_UClass_AEnemy_Controller, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemy_Controller), 1694121284U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Enemy_Enemy_Controller_h_4014480622(TEXT("/Script/PrototypeProject"),
		Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Enemy_Enemy_Controller_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Enemy_Enemy_Controller_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
