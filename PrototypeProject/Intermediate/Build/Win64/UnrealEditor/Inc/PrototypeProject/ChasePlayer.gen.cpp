// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PrototypeProject/Enemy/BTTasks/ChasePlayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChasePlayer() {}
// Cross Module References
	PROTOTYPEPROJECT_API UClass* Z_Construct_UClass_UChasePlayer_NoRegister();
	PROTOTYPEPROJECT_API UClass* Z_Construct_UClass_UChasePlayer();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlackboardBase();
	UPackage* Z_Construct_UPackage__Script_PrototypeProject();
// End Cross Module References
	void UChasePlayer::StaticRegisterNativesUChasePlayer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UChasePlayer);
	UClass* Z_Construct_UClass_UChasePlayer_NoRegister()
	{
		return UChasePlayer::StaticClass();
	}
	struct Z_Construct_UClass_UChasePlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UChasePlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTask_BlackboardBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PrototypeProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChasePlayer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Enemy/BTTasks/ChasePlayer.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Enemy/BTTasks/ChasePlayer.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UChasePlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChasePlayer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UChasePlayer_Statics::ClassParams = {
		&UChasePlayer::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UChasePlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UChasePlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UChasePlayer()
	{
		if (!Z_Registration_Info_UClass_UChasePlayer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UChasePlayer.OuterSingleton, Z_Construct_UClass_UChasePlayer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UChasePlayer.OuterSingleton;
	}
	template<> PROTOTYPEPROJECT_API UClass* StaticClass<UChasePlayer>()
	{
		return UChasePlayer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChasePlayer);
	struct Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Enemy_BTTasks_ChasePlayer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Enemy_BTTasks_ChasePlayer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UChasePlayer, UChasePlayer::StaticClass, TEXT("UChasePlayer"), &Z_Registration_Info_UClass_UChasePlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UChasePlayer), 1471044465U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Enemy_BTTasks_ChasePlayer_h_232089001(TEXT("/Script/PrototypeProject"),
		Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Enemy_BTTasks_ChasePlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Enemy_BTTasks_ChasePlayer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
