// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PrototypeProject/PrototypeProjectGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePrototypeProjectGameMode() {}
// Cross Module References
	PROTOTYPEPROJECT_API UClass* Z_Construct_UClass_APrototypeProjectGameMode_NoRegister();
	PROTOTYPEPROJECT_API UClass* Z_Construct_UClass_APrototypeProjectGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_PrototypeProject();
// End Cross Module References
	void APrototypeProjectGameMode::StaticRegisterNativesAPrototypeProjectGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APrototypeProjectGameMode);
	UClass* Z_Construct_UClass_APrototypeProjectGameMode_NoRegister()
	{
		return APrototypeProjectGameMode::StaticClass();
	}
	struct Z_Construct_UClass_APrototypeProjectGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APrototypeProjectGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PrototypeProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APrototypeProjectGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "PrototypeProjectGameMode.h" },
		{ "ModuleRelativePath", "PrototypeProjectGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APrototypeProjectGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APrototypeProjectGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APrototypeProjectGameMode_Statics::ClassParams = {
		&APrototypeProjectGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_APrototypeProjectGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APrototypeProjectGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APrototypeProjectGameMode()
	{
		if (!Z_Registration_Info_UClass_APrototypeProjectGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APrototypeProjectGameMode.OuterSingleton, Z_Construct_UClass_APrototypeProjectGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APrototypeProjectGameMode.OuterSingleton;
	}
	template<> PROTOTYPEPROJECT_API UClass* StaticClass<APrototypeProjectGameMode>()
	{
		return APrototypeProjectGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APrototypeProjectGameMode);
	struct Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_PrototypeProjectGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_PrototypeProjectGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APrototypeProjectGameMode, APrototypeProjectGameMode::StaticClass, TEXT("APrototypeProjectGameMode"), &Z_Registration_Info_UClass_APrototypeProjectGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APrototypeProjectGameMode), 2759029911U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_PrototypeProjectGameMode_h_1157202072(TEXT("/Script/PrototypeProject"),
		Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_PrototypeProjectGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_PrototypeProjectGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
