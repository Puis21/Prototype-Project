// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PrototypeProject/Player/Notify/NotifyState_Combo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNotifyState_Combo() {}
// Cross Module References
	PROTOTYPEPROJECT_API UClass* Z_Construct_UClass_UNotifyState_Combo_NoRegister();
	PROTOTYPEPROJECT_API UClass* Z_Construct_UClass_UNotifyState_Combo();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	UPackage* Z_Construct_UPackage__Script_PrototypeProject();
// End Cross Module References
	void UNotifyState_Combo::StaticRegisterNativesUNotifyState_Combo()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNotifyState_Combo);
	UClass* Z_Construct_UClass_UNotifyState_Combo_NoRegister()
	{
		return UNotifyState_Combo::StaticClass();
	}
	struct Z_Construct_UClass_UNotifyState_Combo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NextCombo_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_NextCombo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNotifyState_Combo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_PrototypeProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNotifyState_Combo_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Player/Notify/NotifyState_Combo.h" },
		{ "ModuleRelativePath", "Player/Notify/NotifyState_Combo.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNotifyState_Combo_Statics::NewProp_NextCombo_MetaData[] = {
		{ "Category", "NotifyState_Combo" },
		{ "ModuleRelativePath", "Player/Notify/NotifyState_Combo.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNotifyState_Combo_Statics::NewProp_NextCombo = { "NextCombo", nullptr, (EPropertyFlags)0x0010000000000011, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNotifyState_Combo, NextCombo), METADATA_PARAMS(Z_Construct_UClass_UNotifyState_Combo_Statics::NewProp_NextCombo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNotifyState_Combo_Statics::NewProp_NextCombo_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNotifyState_Combo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNotifyState_Combo_Statics::NewProp_NextCombo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNotifyState_Combo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNotifyState_Combo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNotifyState_Combo_Statics::ClassParams = {
		&UNotifyState_Combo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNotifyState_Combo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNotifyState_Combo_Statics::PropPointers),
		0,
		0x001130A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNotifyState_Combo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNotifyState_Combo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNotifyState_Combo()
	{
		if (!Z_Registration_Info_UClass_UNotifyState_Combo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNotifyState_Combo.OuterSingleton, Z_Construct_UClass_UNotifyState_Combo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNotifyState_Combo.OuterSingleton;
	}
	template<> PROTOTYPEPROJECT_API UClass* StaticClass<UNotifyState_Combo>()
	{
		return UNotifyState_Combo::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNotifyState_Combo);
	struct Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Player_Notify_NotifyState_Combo_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Player_Notify_NotifyState_Combo_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNotifyState_Combo, UNotifyState_Combo::StaticClass, TEXT("UNotifyState_Combo"), &Z_Registration_Info_UClass_UNotifyState_Combo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNotifyState_Combo), 3927282547U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Player_Notify_NotifyState_Combo_h_1336466494(TEXT("/Script/PrototypeProject"),
		Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Player_Notify_NotifyState_Combo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Player_Notify_NotifyState_Combo_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
