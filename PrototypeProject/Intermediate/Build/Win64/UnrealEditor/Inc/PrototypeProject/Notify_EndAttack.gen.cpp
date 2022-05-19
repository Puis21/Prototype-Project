// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PrototypeProject/Player/Notify/Notify_EndAttack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNotify_EndAttack() {}
// Cross Module References
	PROTOTYPEPROJECT_API UClass* Z_Construct_UClass_UNotify_EndAttack_NoRegister();
	PROTOTYPEPROJECT_API UClass* Z_Construct_UClass_UNotify_EndAttack();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	UPackage* Z_Construct_UPackage__Script_PrototypeProject();
// End Cross Module References
	void UNotify_EndAttack::StaticRegisterNativesUNotify_EndAttack()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNotify_EndAttack);
	UClass* Z_Construct_UClass_UNotify_EndAttack_NoRegister()
	{
		return UNotify_EndAttack::StaticClass();
	}
	struct Z_Construct_UClass_UNotify_EndAttack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNotify_EndAttack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_PrototypeProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNotify_EndAttack_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Player/Notify/Notify_EndAttack.h" },
		{ "ModuleRelativePath", "Player/Notify/Notify_EndAttack.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNotify_EndAttack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNotify_EndAttack>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNotify_EndAttack_Statics::ClassParams = {
		&UNotify_EndAttack::StaticClass,
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
		0x001120A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNotify_EndAttack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNotify_EndAttack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNotify_EndAttack()
	{
		if (!Z_Registration_Info_UClass_UNotify_EndAttack.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNotify_EndAttack.OuterSingleton, Z_Construct_UClass_UNotify_EndAttack_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNotify_EndAttack.OuterSingleton;
	}
	template<> PROTOTYPEPROJECT_API UClass* StaticClass<UNotify_EndAttack>()
	{
		return UNotify_EndAttack::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNotify_EndAttack);
	struct Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Player_Notify_Notify_EndAttack_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Player_Notify_Notify_EndAttack_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNotify_EndAttack, UNotify_EndAttack::StaticClass, TEXT("UNotify_EndAttack"), &Z_Registration_Info_UClass_UNotify_EndAttack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNotify_EndAttack), 3539215849U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Player_Notify_Notify_EndAttack_h_401549330(TEXT("/Script/PrototypeProject"),
		Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Player_Notify_Notify_EndAttack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Player_Notify_Notify_EndAttack_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
