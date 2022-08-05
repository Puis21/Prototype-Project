// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PrototypeProject/Enemy/Notifies/EnemyCanDamage.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyCanDamage() {}
// Cross Module References
	PROTOTYPEPROJECT_API UClass* Z_Construct_UClass_UEnemyCanDamage_NoRegister();
	PROTOTYPEPROJECT_API UClass* Z_Construct_UClass_UEnemyCanDamage();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	UPackage* Z_Construct_UPackage__Script_PrototypeProject();
// End Cross Module References
	void UEnemyCanDamage::StaticRegisterNativesUEnemyCanDamage()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnemyCanDamage);
	UClass* Z_Construct_UClass_UEnemyCanDamage_NoRegister()
	{
		return UEnemyCanDamage::StaticClass();
	}
	struct Z_Construct_UClass_UEnemyCanDamage_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnemyCanDamage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_PrototypeProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyCanDamage_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Enemy/Notifies/EnemyCanDamage.h" },
		{ "ModuleRelativePath", "Enemy/Notifies/EnemyCanDamage.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnemyCanDamage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnemyCanDamage>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnemyCanDamage_Statics::ClassParams = {
		&UEnemyCanDamage::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001130A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEnemyCanDamage_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyCanDamage_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnemyCanDamage()
	{
		if (!Z_Registration_Info_UClass_UEnemyCanDamage.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnemyCanDamage.OuterSingleton, Z_Construct_UClass_UEnemyCanDamage_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEnemyCanDamage.OuterSingleton;
	}
	template<> PROTOTYPEPROJECT_API UClass* StaticClass<UEnemyCanDamage>()
	{
		return UEnemyCanDamage::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnemyCanDamage);
	struct Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Enemy_Notifies_EnemyCanDamage_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Enemy_Notifies_EnemyCanDamage_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEnemyCanDamage, UEnemyCanDamage::StaticClass, TEXT("UEnemyCanDamage"), &Z_Registration_Info_UClass_UEnemyCanDamage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnemyCanDamage), 3405387945U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Enemy_Notifies_EnemyCanDamage_h_2507074268(TEXT("/Script/PrototypeProject"),
		Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Enemy_Notifies_EnemyCanDamage_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Enemy_Notifies_EnemyCanDamage_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
