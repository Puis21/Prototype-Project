// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PrototypeProject/NPC/NPCSpeakTask.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNPCSpeakTask() {}
// Cross Module References
	PROTOTYPEPROJECT_API UClass* Z_Construct_UClass_UNPCSpeakTask_NoRegister();
	PROTOTYPEPROJECT_API UClass* Z_Construct_UClass_UNPCSpeakTask();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlackboardBase();
	UPackage* Z_Construct_UPackage__Script_PrototypeProject();
// End Cross Module References
	void UNPCSpeakTask::StaticRegisterNativesUNPCSpeakTask()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNPCSpeakTask);
	UClass* Z_Construct_UClass_UNPCSpeakTask_NoRegister()
	{
		return UNPCSpeakTask::StaticClass();
	}
	struct Z_Construct_UClass_UNPCSpeakTask_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNPCSpeakTask_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTask_BlackboardBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PrototypeProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNPCSpeakTask_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "NPC/NPCSpeakTask.h" },
		{ "ModuleRelativePath", "NPC/NPCSpeakTask.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNPCSpeakTask_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNPCSpeakTask>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNPCSpeakTask_Statics::ClassParams = {
		&UNPCSpeakTask::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNPCSpeakTask_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNPCSpeakTask_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNPCSpeakTask()
	{
		if (!Z_Registration_Info_UClass_UNPCSpeakTask.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNPCSpeakTask.OuterSingleton, Z_Construct_UClass_UNPCSpeakTask_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNPCSpeakTask.OuterSingleton;
	}
	template<> PROTOTYPEPROJECT_API UClass* StaticClass<UNPCSpeakTask>()
	{
		return UNPCSpeakTask::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNPCSpeakTask);
	struct Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_NPC_NPCSpeakTask_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_NPC_NPCSpeakTask_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNPCSpeakTask, UNPCSpeakTask::StaticClass, TEXT("UNPCSpeakTask"), &Z_Registration_Info_UClass_UNPCSpeakTask, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNPCSpeakTask), 3400516385U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_NPC_NPCSpeakTask_h_2776802907(TEXT("/Script/PrototypeProject"),
		Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_NPC_NPCSpeakTask_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_NPC_NPCSpeakTask_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
