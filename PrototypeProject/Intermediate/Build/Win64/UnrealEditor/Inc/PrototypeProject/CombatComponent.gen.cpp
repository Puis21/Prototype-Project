// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PrototypeProject/Player/Components/CombatComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatComponent() {}
// Cross Module References
	PROTOTYPEPROJECT_API UClass* Z_Construct_UClass_UCombatComponent_NoRegister();
	PROTOTYPEPROJECT_API UClass* Z_Construct_UClass_UCombatComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_PrototypeProject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	PROTOTYPEPROJECT_API UClass* Z_Construct_UClass_AKatanaWeapon_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
// End Cross Module References
	void UCombatComponent::StaticRegisterNativesUCombatComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCombatComponent);
	UClass* Z_Construct_UClass_UCombatComponent_NoRegister()
	{
		return UCombatComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCombatComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Katana_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Katana;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SwordComboMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SwordComboMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComboAttack_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ComboAttack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultComboAttack_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_DefaultComboAttack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_fSwingSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_m_fSwingSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCombatComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_PrototypeProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Player/Components/CombatComponent.h" },
		{ "ModuleRelativePath", "Player/Components/CombatComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatComponent_Statics::NewProp_Katana_MetaData[] = {
		{ "Category", "CombatComponent" },
		{ "ModuleRelativePath", "Player/Components/CombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_Katana = { "Katana", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCombatComponent, Katana), Z_Construct_UClass_AKatanaWeapon_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UCombatComponent_Statics::NewProp_Katana_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCombatComponent_Statics::NewProp_Katana_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatComponent_Statics::NewProp_SwordComboMontage_MetaData[] = {
		{ "Category", "Anim | Sword Combo" },
		{ "ModuleRelativePath", "Player/Components/CombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_SwordComboMontage = { "SwordComboMontage", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCombatComponent, SwordComboMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCombatComponent_Statics::NewProp_SwordComboMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCombatComponent_Statics::NewProp_SwordComboMontage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatComponent_Statics::NewProp_ComboAttack_MetaData[] = {
		{ "Category", "CombatComponent" },
		{ "ModuleRelativePath", "Player/Components/CombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_ComboAttack = { "ComboAttack", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCombatComponent, ComboAttack), METADATA_PARAMS(Z_Construct_UClass_UCombatComponent_Statics::NewProp_ComboAttack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCombatComponent_Statics::NewProp_ComboAttack_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatComponent_Statics::NewProp_DefaultComboAttack_MetaData[] = {
		{ "Category", "Anim | Sword Combo" },
		{ "ModuleRelativePath", "Player/Components/CombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_DefaultComboAttack = { "DefaultComboAttack", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCombatComponent, DefaultComboAttack), METADATA_PARAMS(Z_Construct_UClass_UCombatComponent_Statics::NewProp_DefaultComboAttack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCombatComponent_Statics::NewProp_DefaultComboAttack_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatComponent_Statics::NewProp_m_fSwingSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "Player/Components/CombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_m_fSwingSpeed = { "m_fSwingSpeed", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCombatComponent, m_fSwingSpeed), METADATA_PARAMS(Z_Construct_UClass_UCombatComponent_Statics::NewProp_m_fSwingSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCombatComponent_Statics::NewProp_m_fSwingSpeed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCombatComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_Katana,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_SwordComboMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_ComboAttack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_DefaultComboAttack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_m_fSwingSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCombatComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCombatComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatComponent_Statics::ClassParams = {
		&UCombatComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCombatComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCombatComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCombatComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCombatComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCombatComponent()
	{
		if (!Z_Registration_Info_UClass_UCombatComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatComponent.OuterSingleton, Z_Construct_UClass_UCombatComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCombatComponent.OuterSingleton;
	}
	template<> PROTOTYPEPROJECT_API UClass* StaticClass<UCombatComponent>()
	{
		return UCombatComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatComponent);
	struct Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Player_Components_CombatComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Player_Components_CombatComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCombatComponent, UCombatComponent::StaticClass, TEXT("UCombatComponent"), &Z_Registration_Info_UClass_UCombatComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatComponent), 3528257638U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Player_Components_CombatComponent_h_1153373893(TEXT("/Script/PrototypeProject"),
		Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Player_Components_CombatComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Player_Components_CombatComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
