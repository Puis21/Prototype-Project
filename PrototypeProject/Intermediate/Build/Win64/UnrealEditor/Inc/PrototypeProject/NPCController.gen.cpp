// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PrototypeProject/NPC/NPCController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNPCController() {}
// Cross Module References
	PROTOTYPEPROJECT_API UClass* Z_Construct_UClass_ANPCController_NoRegister();
	PROTOTYPEPROJECT_API UClass* Z_Construct_UClass_ANPCController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_PrototypeProject();
// End Cross Module References
	void ANPCController::StaticRegisterNativesANPCController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANPCController);
	UClass* Z_Construct_UClass_ANPCController_NoRegister()
	{
		return ANPCController::StaticClass();
	}
	struct Z_Construct_UClass_ANPCController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANPCController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_PrototypeProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPCController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "NPC/NPCController.h" },
		{ "ModuleRelativePath", "NPC/NPCController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANPCController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANPCController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ANPCController_Statics::ClassParams = {
		&ANPCController::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ANPCController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANPCController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANPCController()
	{
		if (!Z_Registration_Info_UClass_ANPCController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANPCController.OuterSingleton, Z_Construct_UClass_ANPCController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ANPCController.OuterSingleton;
	}
	template<> PROTOTYPEPROJECT_API UClass* StaticClass<ANPCController>()
	{
		return ANPCController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANPCController);
	struct Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_NPC_NPCController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_NPC_NPCController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ANPCController, ANPCController::StaticClass, TEXT("ANPCController"), &Z_Registration_Info_UClass_ANPCController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANPCController), 2432106096U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_NPC_NPCController_h_1666232128(TEXT("/Script/PrototypeProject"),
		Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_NPC_NPCController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_NPC_NPCController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
