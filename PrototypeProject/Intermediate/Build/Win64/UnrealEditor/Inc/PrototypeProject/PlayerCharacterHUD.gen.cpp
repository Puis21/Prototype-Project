// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PrototypeProject/HUD/PlayerCharacterHUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerCharacterHUD() {}
// Cross Module References
	PROTOTYPEPROJECT_API UClass* Z_Construct_UClass_APlayerCharacterHUD_NoRegister();
	PROTOTYPEPROJECT_API UClass* Z_Construct_UClass_APlayerCharacterHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_PrototypeProject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	void APlayerCharacterHUD::StaticRegisterNativesAPlayerCharacterHUD()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlayerCharacterHUD);
	UClass* Z_Construct_UClass_APlayerCharacterHUD_NoRegister()
	{
		return APlayerCharacterHUD::StaticClass();
	}
	struct Z_Construct_UClass_APlayerCharacterHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractionWidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_InteractionWidgetClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerCharacterHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_PrototypeProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacterHUD_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "HUD/PlayerCharacterHUD.h" },
		{ "ModuleRelativePath", "HUD/PlayerCharacterHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacterHUD_Statics::NewProp_InteractionWidgetClass_MetaData[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "HUD/PlayerCharacterHUD.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APlayerCharacterHUD_Statics::NewProp_InteractionWidgetClass = { "InteractionWidgetClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerCharacterHUD, InteractionWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_APlayerCharacterHUD_Statics::NewProp_InteractionWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacterHUD_Statics::NewProp_InteractionWidgetClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerCharacterHUD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacterHUD_Statics::NewProp_InteractionWidgetClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerCharacterHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerCharacterHUD>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayerCharacterHUD_Statics::ClassParams = {
		&APlayerCharacterHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APlayerCharacterHUD_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacterHUD_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_APlayerCharacterHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacterHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayerCharacterHUD()
	{
		if (!Z_Registration_Info_UClass_APlayerCharacterHUD.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayerCharacterHUD.OuterSingleton, Z_Construct_UClass_APlayerCharacterHUD_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APlayerCharacterHUD.OuterSingleton;
	}
	template<> PROTOTYPEPROJECT_API UClass* StaticClass<APlayerCharacterHUD>()
	{
		return APlayerCharacterHUD::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerCharacterHUD);
	struct Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_HUD_PlayerCharacterHUD_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_HUD_PlayerCharacterHUD_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APlayerCharacterHUD, APlayerCharacterHUD::StaticClass, TEXT("APlayerCharacterHUD"), &Z_Registration_Info_UClass_APlayerCharacterHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerCharacterHUD), 3837030797U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_HUD_PlayerCharacterHUD_h_577356108(TEXT("/Script/PrototypeProject"),
		Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_HUD_PlayerCharacterHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_HUD_PlayerCharacterHUD_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
