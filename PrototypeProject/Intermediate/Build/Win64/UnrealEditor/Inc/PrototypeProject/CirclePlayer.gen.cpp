// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PrototypeProject/Enemy/BTTasks/CirclePlayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCirclePlayer() {}
// Cross Module References
	PROTOTYPEPROJECT_API UClass* Z_Construct_UClass_UCirclePlayer_NoRegister();
	PROTOTYPEPROJECT_API UClass* Z_Construct_UClass_UCirclePlayer();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlackboardBase();
	UPackage* Z_Construct_UPackage__Script_PrototypeProject();
// End Cross Module References
	void UCirclePlayer::StaticRegisterNativesUCirclePlayer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCirclePlayer);
	UClass* Z_Construct_UClass_UCirclePlayer_NoRegister()
	{
		return UCirclePlayer::StaticClass();
	}
	struct Z_Construct_UClass_UCirclePlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCirclePlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTask_BlackboardBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PrototypeProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCirclePlayer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Enemy/BTTasks/CirclePlayer.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Enemy/BTTasks/CirclePlayer.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCirclePlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCirclePlayer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCirclePlayer_Statics::ClassParams = {
		&UCirclePlayer::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCirclePlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCirclePlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCirclePlayer()
	{
		if (!Z_Registration_Info_UClass_UCirclePlayer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCirclePlayer.OuterSingleton, Z_Construct_UClass_UCirclePlayer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCirclePlayer.OuterSingleton;
	}
	template<> PROTOTYPEPROJECT_API UClass* StaticClass<UCirclePlayer>()
	{
		return UCirclePlayer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCirclePlayer);
	struct Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Enemy_BTTasks_CirclePlayer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Enemy_BTTasks_CirclePlayer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCirclePlayer, UCirclePlayer::StaticClass, TEXT("UCirclePlayer"), &Z_Registration_Info_UClass_UCirclePlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCirclePlayer), 1938167414U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Enemy_BTTasks_CirclePlayer_h_4077433442(TEXT("/Script/PrototypeProject"),
		Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Enemy_BTTasks_CirclePlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Enemy_BTTasks_CirclePlayer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
