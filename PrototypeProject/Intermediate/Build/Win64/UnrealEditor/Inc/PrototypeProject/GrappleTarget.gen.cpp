// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PrototypeProject/Player/GrappleTarget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGrappleTarget() {}
// Cross Module References
	PROTOTYPEPROJECT_API UClass* Z_Construct_UClass_AGrappleTarget_NoRegister();
	PROTOTYPEPROJECT_API UClass* Z_Construct_UClass_AGrappleTarget();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PrototypeProject();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void AGrappleTarget::StaticRegisterNativesAGrappleTarget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGrappleTarget);
	UClass* Z_Construct_UClass_AGrappleTarget_NoRegister()
	{
		return AGrappleTarget::StaticClass();
	}
	struct Z_Construct_UClass_AGrappleTarget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_bBillboard_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_bBillboard;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_wWidgetComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_wWidgetComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_v3CharacterOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_m_v3CharacterOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGrappleTarget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PrototypeProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrappleTarget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Player/GrappleTarget.h" },
		{ "ModuleRelativePath", "Player/GrappleTarget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrappleTarget_Statics::NewProp_m_bBillboard_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "GrappleTarget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/GrappleTarget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGrappleTarget_Statics::NewProp_m_bBillboard = { "m_bBillboard", nullptr, (EPropertyFlags)0x004000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGrappleTarget, m_bBillboard), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGrappleTarget_Statics::NewProp_m_bBillboard_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGrappleTarget_Statics::NewProp_m_bBillboard_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrappleTarget_Statics::NewProp_m_wWidgetComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "GrappleTarget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/GrappleTarget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGrappleTarget_Statics::NewProp_m_wWidgetComponent = { "m_wWidgetComponent", nullptr, (EPropertyFlags)0x004000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGrappleTarget, m_wWidgetComponent), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGrappleTarget_Statics::NewProp_m_wWidgetComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGrappleTarget_Statics::NewProp_m_wWidgetComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrappleTarget_Statics::NewProp_m_v3CharacterOffset_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character Offset" },
		{ "MakeEditWidget", "TRUE" },
		{ "ModuleRelativePath", "Player/GrappleTarget.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGrappleTarget_Statics::NewProp_m_v3CharacterOffset = { "m_v3CharacterOffset", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGrappleTarget, m_v3CharacterOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AGrappleTarget_Statics::NewProp_m_v3CharacterOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGrappleTarget_Statics::NewProp_m_v3CharacterOffset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGrappleTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrappleTarget_Statics::NewProp_m_bBillboard,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrappleTarget_Statics::NewProp_m_wWidgetComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrappleTarget_Statics::NewProp_m_v3CharacterOffset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGrappleTarget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGrappleTarget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGrappleTarget_Statics::ClassParams = {
		&AGrappleTarget::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGrappleTarget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGrappleTarget_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGrappleTarget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGrappleTarget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGrappleTarget()
	{
		if (!Z_Registration_Info_UClass_AGrappleTarget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGrappleTarget.OuterSingleton, Z_Construct_UClass_AGrappleTarget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGrappleTarget.OuterSingleton;
	}
	template<> PROTOTYPEPROJECT_API UClass* StaticClass<AGrappleTarget>()
	{
		return AGrappleTarget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGrappleTarget);
	struct Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Player_GrappleTarget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Player_GrappleTarget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGrappleTarget, AGrappleTarget::StaticClass, TEXT("AGrappleTarget"), &Z_Registration_Info_UClass_AGrappleTarget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGrappleTarget), 3820543838U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Player_GrappleTarget_h_128203507(TEXT("/Script/PrototypeProject"),
		Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Player_GrappleTarget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Player_GrappleTarget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
