// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PrototypeProject/Player/Notify/Notify_QueueNextAttack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNotify_QueueNextAttack() {}
// Cross Module References
	PROTOTYPEPROJECT_API UClass* Z_Construct_UClass_UNotify_QueueNextAttack_NoRegister();
	PROTOTYPEPROJECT_API UClass* Z_Construct_UClass_UNotify_QueueNextAttack();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	UPackage* Z_Construct_UPackage__Script_PrototypeProject();
// End Cross Module References
	void UNotify_QueueNextAttack::StaticRegisterNativesUNotify_QueueNextAttack()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNotify_QueueNextAttack);
	UClass* Z_Construct_UClass_UNotify_QueueNextAttack_NoRegister()
	{
		return UNotify_QueueNextAttack::StaticClass();
	}
	struct Z_Construct_UClass_UNotify_QueueNextAttack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNotify_QueueNextAttack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_PrototypeProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNotify_QueueNextAttack_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Player/Notify/Notify_QueueNextAttack.h" },
		{ "ModuleRelativePath", "Player/Notify/Notify_QueueNextAttack.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNotify_QueueNextAttack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNotify_QueueNextAttack>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNotify_QueueNextAttack_Statics::ClassParams = {
		&UNotify_QueueNextAttack::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNotify_QueueNextAttack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNotify_QueueNextAttack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNotify_QueueNextAttack()
	{
		if (!Z_Registration_Info_UClass_UNotify_QueueNextAttack.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNotify_QueueNextAttack.OuterSingleton, Z_Construct_UClass_UNotify_QueueNextAttack_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNotify_QueueNextAttack.OuterSingleton;
	}
	template<> PROTOTYPEPROJECT_API UClass* StaticClass<UNotify_QueueNextAttack>()
	{
		return UNotify_QueueNextAttack::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNotify_QueueNextAttack);
	struct Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Player_Notify_Notify_QueueNextAttack_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Player_Notify_Notify_QueueNextAttack_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNotify_QueueNextAttack, UNotify_QueueNextAttack::StaticClass, TEXT("UNotify_QueueNextAttack"), &Z_Registration_Info_UClass_UNotify_QueueNextAttack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNotify_QueueNextAttack), 1009145935U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Player_Notify_Notify_QueueNextAttack_h_3971746442(TEXT("/Script/PrototypeProject"),
		Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Player_Notify_Notify_QueueNextAttack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Player_Notify_Notify_QueueNextAttack_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
