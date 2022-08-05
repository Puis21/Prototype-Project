// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PrototypeProject/Enemy/BP_EnemyCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBP_EnemyCharacter() {}
// Cross Module References
	PROTOTYPEPROJECT_API UClass* Z_Construct_UClass_ABP_EnemyCharacter_NoRegister();
	PROTOTYPEPROJECT_API UClass* Z_Construct_UClass_ABP_EnemyCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_PrototypeProject();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ABP_EnemyCharacter::execSwordAttack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SwordAttack();
		P_NATIVE_END;
	}
	void ABP_EnemyCharacter::StaticRegisterNativesABP_EnemyCharacter()
	{
		UClass* Class = ABP_EnemyCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SwordAttack", &ABP_EnemyCharacter::execSwordAttack },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABP_EnemyCharacter_SwordAttack_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_EnemyCharacter_SwordAttack_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI Attack" },
		{ "ModuleRelativePath", "Enemy/BP_EnemyCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_EnemyCharacter_SwordAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_EnemyCharacter, nullptr, "SwordAttack", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_EnemyCharacter_SwordAttack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_EnemyCharacter_SwordAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_EnemyCharacter_SwordAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABP_EnemyCharacter_SwordAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABP_EnemyCharacter);
	UClass* Z_Construct_UClass_ABP_EnemyCharacter_NoRegister()
	{
		return ABP_EnemyCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ABP_EnemyCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SwordComboMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SwordComboMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BehaviorTree_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BehaviorTree;
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
	UObject* (*const Z_Construct_UClass_ABP_EnemyCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_PrototypeProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABP_EnemyCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABP_EnemyCharacter_SwordAttack, "SwordAttack" }, // 3218651454
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_EnemyCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Enemy/BP_EnemyCharacter.h" },
		{ "ModuleRelativePath", "Enemy/BP_EnemyCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_EnemyCharacter_Statics::NewProp_SwordComboMontage_MetaData[] = {
		{ "Category", "Anim | Sword Combo" },
		{ "ModuleRelativePath", "Enemy/BP_EnemyCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_EnemyCharacter_Statics::NewProp_SwordComboMontage = { "SwordComboMontage", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_EnemyCharacter, SwordComboMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_EnemyCharacter_Statics::NewProp_SwordComboMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_EnemyCharacter_Statics::NewProp_SwordComboMontage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_EnemyCharacter_Statics::NewProp_BehaviorTree_MetaData[] = {
		{ "AlowPrivateAccess", "true" },
		{ "Category", "Behavior Tree" },
		{ "ModuleRelativePath", "Enemy/BP_EnemyCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_EnemyCharacter_Statics::NewProp_BehaviorTree = { "BehaviorTree", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_EnemyCharacter, BehaviorTree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_EnemyCharacter_Statics::NewProp_BehaviorTree_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_EnemyCharacter_Statics::NewProp_BehaviorTree_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_EnemyCharacter_Statics::NewProp_ComboAttack_MetaData[] = {
		{ "Category", "BP_EnemyCharacter" },
		{ "ModuleRelativePath", "Enemy/BP_EnemyCharacter.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ABP_EnemyCharacter_Statics::NewProp_ComboAttack = { "ComboAttack", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_EnemyCharacter, ComboAttack), METADATA_PARAMS(Z_Construct_UClass_ABP_EnemyCharacter_Statics::NewProp_ComboAttack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_EnemyCharacter_Statics::NewProp_ComboAttack_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_EnemyCharacter_Statics::NewProp_DefaultComboAttack_MetaData[] = {
		{ "Category", "Anim | Sword Combo" },
		{ "ModuleRelativePath", "Enemy/BP_EnemyCharacter.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ABP_EnemyCharacter_Statics::NewProp_DefaultComboAttack = { "DefaultComboAttack", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_EnemyCharacter, DefaultComboAttack), METADATA_PARAMS(Z_Construct_UClass_ABP_EnemyCharacter_Statics::NewProp_DefaultComboAttack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_EnemyCharacter_Statics::NewProp_DefaultComboAttack_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_EnemyCharacter_Statics::NewProp_m_fSwingSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "Enemy/BP_EnemyCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_EnemyCharacter_Statics::NewProp_m_fSwingSpeed = { "m_fSwingSpeed", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_EnemyCharacter, m_fSwingSpeed), METADATA_PARAMS(Z_Construct_UClass_ABP_EnemyCharacter_Statics::NewProp_m_fSwingSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_EnemyCharacter_Statics::NewProp_m_fSwingSpeed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABP_EnemyCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_EnemyCharacter_Statics::NewProp_SwordComboMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_EnemyCharacter_Statics::NewProp_BehaviorTree,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_EnemyCharacter_Statics::NewProp_ComboAttack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_EnemyCharacter_Statics::NewProp_DefaultComboAttack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_EnemyCharacter_Statics::NewProp_m_fSwingSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABP_EnemyCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABP_EnemyCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABP_EnemyCharacter_Statics::ClassParams = {
		&ABP_EnemyCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABP_EnemyCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABP_EnemyCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABP_EnemyCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_EnemyCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABP_EnemyCharacter()
	{
		if (!Z_Registration_Info_UClass_ABP_EnemyCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABP_EnemyCharacter.OuterSingleton, Z_Construct_UClass_ABP_EnemyCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABP_EnemyCharacter.OuterSingleton;
	}
	template<> PROTOTYPEPROJECT_API UClass* StaticClass<ABP_EnemyCharacter>()
	{
		return ABP_EnemyCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABP_EnemyCharacter);
	struct Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Enemy_BP_EnemyCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Enemy_BP_EnemyCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABP_EnemyCharacter, ABP_EnemyCharacter::StaticClass, TEXT("ABP_EnemyCharacter"), &Z_Registration_Info_UClass_ABP_EnemyCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABP_EnemyCharacter), 2388506082U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Enemy_BP_EnemyCharacter_h_3866285205(TEXT("/Script/PrototypeProject"),
		Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Enemy_BP_EnemyCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Enemy_BP_EnemyCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
