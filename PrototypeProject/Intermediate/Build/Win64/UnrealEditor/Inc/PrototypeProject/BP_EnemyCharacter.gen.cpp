// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PrototypeProject/Enemy/BP_EnemyCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBP_EnemyCharacter() {}
// Cross Module References
	PROTOTYPEPROJECT_API UClass* Z_Construct_UClass_ABP_EnemyCharacter_NoRegister();
	PROTOTYPEPROJECT_API UClass* Z_Construct_UClass_ABP_EnemyCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_PrototypeProject();
// End Cross Module References
	void ABP_EnemyCharacter::StaticRegisterNativesABP_EnemyCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABP_EnemyCharacter);
	UClass* Z_Construct_UClass_ABP_EnemyCharacter_NoRegister()
	{
		return ABP_EnemyCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ABP_EnemyCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABP_EnemyCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_PrototypeProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_EnemyCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Enemy/BP_EnemyCharacter.h" },
		{ "ModuleRelativePath", "Enemy/BP_EnemyCharacter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABP_EnemyCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABP_EnemyCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABP_EnemyCharacter_Statics::ClassParams = {
		&ABP_EnemyCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABP_EnemyCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_EnemyCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABP_EnemyCharacter()
	{
		if (!Z_Registration_Info_UClass_ABP_EnemyCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABP_EnemyCharacter.OuterSingleton, Z_Construct_UClass_ABP_EnemyCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABP_EnemyCharacter.OuterSingleton;
	}
	template<> PROTOTYPEPROJECT_API UClass* StaticClass<ABP_EnemyCharacter>()
	{
		return ABP_EnemyCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABP_EnemyCharacter);
	struct Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Enemy_BP_EnemyCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Enemy_BP_EnemyCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABP_EnemyCharacter, ABP_EnemyCharacter::StaticClass, TEXT("ABP_EnemyCharacter"), &Z_Registration_Info_UClass_ABP_EnemyCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABP_EnemyCharacter), 2027322219U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Enemy_BP_EnemyCharacter_h_406447329(TEXT("/Script/PrototypeProject"),
		Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Enemy_BP_EnemyCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Enemy_BP_EnemyCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
