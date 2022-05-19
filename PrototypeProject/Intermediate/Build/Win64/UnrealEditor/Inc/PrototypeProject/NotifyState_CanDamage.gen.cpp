// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PrototypeProject/Player/Notify/NotifyState_CanDamage.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNotifyState_CanDamage() {}
// Cross Module References
	PROTOTYPEPROJECT_API UClass* Z_Construct_UClass_UNotifyState_CanDamage_NoRegister();
	PROTOTYPEPROJECT_API UClass* Z_Construct_UClass_UNotifyState_CanDamage();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	UPackage* Z_Construct_UPackage__Script_PrototypeProject();
// End Cross Module References
	void UNotifyState_CanDamage::StaticRegisterNativesUNotifyState_CanDamage()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNotifyState_CanDamage);
	UClass* Z_Construct_UClass_UNotifyState_CanDamage_NoRegister()
	{
		return UNotifyState_CanDamage::StaticClass();
	}
	struct Z_Construct_UClass_UNotifyState_CanDamage_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNotifyState_CanDamage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_PrototypeProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNotifyState_CanDamage_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Player/Notify/NotifyState_CanDamage.h" },
		{ "ModuleRelativePath", "Player/Notify/NotifyState_CanDamage.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNotifyState_CanDamage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNotifyState_CanDamage>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNotifyState_CanDamage_Statics::ClassParams = {
		&UNotifyState_CanDamage::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNotifyState_CanDamage_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNotifyState_CanDamage_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNotifyState_CanDamage()
	{
		if (!Z_Registration_Info_UClass_UNotifyState_CanDamage.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNotifyState_CanDamage.OuterSingleton, Z_Construct_UClass_UNotifyState_CanDamage_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNotifyState_CanDamage.OuterSingleton;
	}
	template<> PROTOTYPEPROJECT_API UClass* StaticClass<UNotifyState_CanDamage>()
	{
		return UNotifyState_CanDamage::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNotifyState_CanDamage);
	struct Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Player_Notify_NotifyState_CanDamage_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Player_Notify_NotifyState_CanDamage_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNotifyState_CanDamage, UNotifyState_CanDamage::StaticClass, TEXT("UNotifyState_CanDamage"), &Z_Registration_Info_UClass_UNotifyState_CanDamage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNotifyState_CanDamage), 1020705408U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Player_Notify_NotifyState_CanDamage_h_2650627730(TEXT("/Script/PrototypeProject"),
		Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Player_Notify_NotifyState_CanDamage_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Player_Notify_NotifyState_CanDamage_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
