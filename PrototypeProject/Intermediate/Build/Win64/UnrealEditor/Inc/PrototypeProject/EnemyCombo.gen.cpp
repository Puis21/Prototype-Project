// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PrototypeProject/Enemy/Notifies/EnemyCombo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyCombo() {}
// Cross Module References
	PROTOTYPEPROJECT_API UClass* Z_Construct_UClass_UEnemyCombo_NoRegister();
	PROTOTYPEPROJECT_API UClass* Z_Construct_UClass_UEnemyCombo();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	UPackage* Z_Construct_UPackage__Script_PrototypeProject();
// End Cross Module References
	void UEnemyCombo::StaticRegisterNativesUEnemyCombo()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnemyCombo);
	UClass* Z_Construct_UClass_UEnemyCombo_NoRegister()
	{
		return UEnemyCombo::StaticClass();
	}
	struct Z_Construct_UClass_UEnemyCombo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NextCombo_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_NextCombo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnemyCombo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_PrototypeProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyCombo_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Enemy/Notifies/EnemyCombo.h" },
		{ "ModuleRelativePath", "Enemy/Notifies/EnemyCombo.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyCombo_Statics::NewProp_NextCombo_MetaData[] = {
		{ "Category", "EnemyCombo" },
		{ "ModuleRelativePath", "Enemy/Notifies/EnemyCombo.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UEnemyCombo_Statics::NewProp_NextCombo = { "NextCombo", nullptr, (EPropertyFlags)0x0040000000000011, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemyCombo, NextCombo), METADATA_PARAMS(Z_Construct_UClass_UEnemyCombo_Statics::NewProp_NextCombo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyCombo_Statics::NewProp_NextCombo_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnemyCombo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyCombo_Statics::NewProp_NextCombo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnemyCombo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnemyCombo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnemyCombo_Statics::ClassParams = {
		&UEnemyCombo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEnemyCombo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyCombo_Statics::PropPointers),
		0,
		0x001130A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEnemyCombo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyCombo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnemyCombo()
	{
		if (!Z_Registration_Info_UClass_UEnemyCombo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnemyCombo.OuterSingleton, Z_Construct_UClass_UEnemyCombo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEnemyCombo.OuterSingleton;
	}
	template<> PROTOTYPEPROJECT_API UClass* StaticClass<UEnemyCombo>()
	{
		return UEnemyCombo::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnemyCombo);
	struct Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Enemy_Notifies_EnemyCombo_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Enemy_Notifies_EnemyCombo_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEnemyCombo, UEnemyCombo::StaticClass, TEXT("UEnemyCombo"), &Z_Registration_Info_UClass_UEnemyCombo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnemyCombo), 1490602847U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Enemy_Notifies_EnemyCombo_h_581701133(TEXT("/Script/PrototypeProject"),
		Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Enemy_Notifies_EnemyCombo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Enemy_Notifies_EnemyCombo_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
