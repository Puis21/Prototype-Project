// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PrototypeProject/NPC/Components/NPCDialogueComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNPCDialogueComponent() {}
// Cross Module References
	PROTOTYPEPROJECT_API UClass* Z_Construct_UClass_UNPCDialogueComponent_NoRegister();
	PROTOTYPEPROJECT_API UClass* Z_Construct_UClass_UNPCDialogueComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_PrototypeProject();
// End Cross Module References
	void UNPCDialogueComponent::StaticRegisterNativesUNPCDialogueComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNPCDialogueComponent);
	UClass* Z_Construct_UClass_UNPCDialogueComponent_NoRegister()
	{
		return UNPCDialogueComponent::StaticClass();
	}
	struct Z_Construct_UClass_UNPCDialogueComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNPCDialogueComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_PrototypeProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNPCDialogueComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "NPC/Components/NPCDialogueComponent.h" },
		{ "ModuleRelativePath", "NPC/Components/NPCDialogueComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNPCDialogueComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNPCDialogueComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNPCDialogueComponent_Statics::ClassParams = {
		&UNPCDialogueComponent::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UNPCDialogueComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNPCDialogueComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNPCDialogueComponent()
	{
		if (!Z_Registration_Info_UClass_UNPCDialogueComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNPCDialogueComponent.OuterSingleton, Z_Construct_UClass_UNPCDialogueComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNPCDialogueComponent.OuterSingleton;
	}
	template<> PROTOTYPEPROJECT_API UClass* StaticClass<UNPCDialogueComponent>()
	{
		return UNPCDialogueComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNPCDialogueComponent);
	struct Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_NPC_Components_NPCDialogueComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_NPC_Components_NPCDialogueComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNPCDialogueComponent, UNPCDialogueComponent::StaticClass, TEXT("UNPCDialogueComponent"), &Z_Registration_Info_UClass_UNPCDialogueComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNPCDialogueComponent), 3968510110U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_NPC_Components_NPCDialogueComponent_h_642658711(TEXT("/Script/PrototypeProject"),
		Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_NPC_Components_NPCDialogueComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_NPC_Components_NPCDialogueComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
