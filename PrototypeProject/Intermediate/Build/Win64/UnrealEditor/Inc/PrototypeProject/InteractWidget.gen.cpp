// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PrototypeProject/HUD/InteractWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractWidget() {}
// Cross Module References
	PROTOTYPEPROJECT_API UClass* Z_Construct_UClass_UInteractWidget_NoRegister();
	PROTOTYPEPROJECT_API UClass* Z_Construct_UClass_UInteractWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_PrototypeProject();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	void UInteractWidget::StaticRegisterNativesUInteractWidget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInteractWidget);
	UClass* Z_Construct_UClass_UInteractWidget_NoRegister()
	{
		return UInteractWidget::StaticClass();
	}
	struct Z_Construct_UClass_UInteractWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteractWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_PrototypeProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "HUD/InteractWidget.h" },
		{ "ModuleRelativePath", "HUD/InteractWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractWidget_Statics::NewProp_InteractText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/InteractWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInteractWidget_Statics::NewProp_InteractText = { "InteractText", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInteractWidget, InteractText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInteractWidget_Statics::NewProp_InteractText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractWidget_Statics::NewProp_InteractText_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInteractWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractWidget_Statics::NewProp_InteractText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteractWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractWidget_Statics::ClassParams = {
		&UInteractWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInteractWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInteractWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInteractWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInteractWidget()
	{
		if (!Z_Registration_Info_UClass_UInteractWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractWidget.OuterSingleton, Z_Construct_UClass_UInteractWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInteractWidget.OuterSingleton;
	}
	template<> PROTOTYPEPROJECT_API UClass* StaticClass<UInteractWidget>()
	{
		return UInteractWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractWidget);
	struct Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_HUD_InteractWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_HUD_InteractWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInteractWidget, UInteractWidget::StaticClass, TEXT("UInteractWidget"), &Z_Registration_Info_UClass_UInteractWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractWidget), 436509116U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_HUD_InteractWidget_h_4073983953(TEXT("/Script/PrototypeProject"),
		Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_HUD_InteractWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_HUD_InteractWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
