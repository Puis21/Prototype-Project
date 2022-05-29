// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PrototypeProject/Player/GAS/GASAttributeSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGASAttributeSet() {}
// Cross Module References
	PROTOTYPEPROJECT_API UClass* Z_Construct_UClass_UGASAttributeSet_NoRegister();
	PROTOTYPEPROJECT_API UClass* Z_Construct_UClass_UGASAttributeSet();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
	UPackage* Z_Construct_UPackage__Script_PrototypeProject();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
// End Cross Module References
	DEFINE_FUNCTION(UGASAttributeSet::execOnRep_Damage)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldDamage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Damage(Z_Param_Out_OldDamage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGASAttributeSet::execOnRep_Energy)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldEnergy);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Energy(Z_Param_Out_OldEnergy);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGASAttributeSet::execOnRep_Posture)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldPosture);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Posture(Z_Param_Out_OldPosture);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGASAttributeSet::execOnRep_Health)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldHealth);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Health(Z_Param_Out_OldHealth);
		P_NATIVE_END;
	}
	void UGASAttributeSet::StaticRegisterNativesUGASAttributeSet()
	{
		UClass* Class = UGASAttributeSet::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_Damage", &UGASAttributeSet::execOnRep_Damage },
			{ "OnRep_Energy", &UGASAttributeSet::execOnRep_Energy },
			{ "OnRep_Health", &UGASAttributeSet::execOnRep_Health },
			{ "OnRep_Posture", &UGASAttributeSet::execOnRep_Posture },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGASAttributeSet_OnRep_Damage_Statics
	{
		struct GASAttributeSet_eventOnRep_Damage_Parms
		{
			FGameplayAttributeData OldDamage;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldDamage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldDamage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGASAttributeSet_OnRep_Damage_Statics::NewProp_OldDamage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGASAttributeSet_OnRep_Damage_Statics::NewProp_OldDamage = { "OldDamage", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GASAttributeSet_eventOnRep_Damage_Parms, OldDamage), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_UGASAttributeSet_OnRep_Damage_Statics::NewProp_OldDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGASAttributeSet_OnRep_Damage_Statics::NewProp_OldDamage_MetaData)) }; // 1975042971
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGASAttributeSet_OnRep_Damage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGASAttributeSet_OnRep_Damage_Statics::NewProp_OldDamage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGASAttributeSet_OnRep_Damage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/GAS/GASAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGASAttributeSet_OnRep_Damage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGASAttributeSet, nullptr, "OnRep_Damage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGASAttributeSet_OnRep_Damage_Statics::GASAttributeSet_eventOnRep_Damage_Parms), Z_Construct_UFunction_UGASAttributeSet_OnRep_Damage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGASAttributeSet_OnRep_Damage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGASAttributeSet_OnRep_Damage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGASAttributeSet_OnRep_Damage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGASAttributeSet_OnRep_Damage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGASAttributeSet_OnRep_Damage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGASAttributeSet_OnRep_Energy_Statics
	{
		struct GASAttributeSet_eventOnRep_Energy_Parms
		{
			FGameplayAttributeData OldEnergy;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldEnergy_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldEnergy;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGASAttributeSet_OnRep_Energy_Statics::NewProp_OldEnergy_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGASAttributeSet_OnRep_Energy_Statics::NewProp_OldEnergy = { "OldEnergy", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GASAttributeSet_eventOnRep_Energy_Parms, OldEnergy), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_UGASAttributeSet_OnRep_Energy_Statics::NewProp_OldEnergy_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGASAttributeSet_OnRep_Energy_Statics::NewProp_OldEnergy_MetaData)) }; // 1975042971
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGASAttributeSet_OnRep_Energy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGASAttributeSet_OnRep_Energy_Statics::NewProp_OldEnergy,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGASAttributeSet_OnRep_Energy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/GAS/GASAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGASAttributeSet_OnRep_Energy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGASAttributeSet, nullptr, "OnRep_Energy", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGASAttributeSet_OnRep_Energy_Statics::GASAttributeSet_eventOnRep_Energy_Parms), Z_Construct_UFunction_UGASAttributeSet_OnRep_Energy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGASAttributeSet_OnRep_Energy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGASAttributeSet_OnRep_Energy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGASAttributeSet_OnRep_Energy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGASAttributeSet_OnRep_Energy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGASAttributeSet_OnRep_Energy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGASAttributeSet_OnRep_Health_Statics
	{
		struct GASAttributeSet_eventOnRep_Health_Parms
		{
			FGameplayAttributeData OldHealth;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldHealth_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldHealth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGASAttributeSet_OnRep_Health_Statics::NewProp_OldHealth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGASAttributeSet_OnRep_Health_Statics::NewProp_OldHealth = { "OldHealth", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GASAttributeSet_eventOnRep_Health_Parms, OldHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_UGASAttributeSet_OnRep_Health_Statics::NewProp_OldHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGASAttributeSet_OnRep_Health_Statics::NewProp_OldHealth_MetaData)) }; // 1975042971
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGASAttributeSet_OnRep_Health_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGASAttributeSet_OnRep_Health_Statics::NewProp_OldHealth,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGASAttributeSet_OnRep_Health_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/GAS/GASAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGASAttributeSet_OnRep_Health_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGASAttributeSet, nullptr, "OnRep_Health", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGASAttributeSet_OnRep_Health_Statics::GASAttributeSet_eventOnRep_Health_Parms), Z_Construct_UFunction_UGASAttributeSet_OnRep_Health_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGASAttributeSet_OnRep_Health_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGASAttributeSet_OnRep_Health_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGASAttributeSet_OnRep_Health_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGASAttributeSet_OnRep_Health()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGASAttributeSet_OnRep_Health_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGASAttributeSet_OnRep_Posture_Statics
	{
		struct GASAttributeSet_eventOnRep_Posture_Parms
		{
			FGameplayAttributeData OldPosture;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldPosture_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldPosture;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGASAttributeSet_OnRep_Posture_Statics::NewProp_OldPosture_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGASAttributeSet_OnRep_Posture_Statics::NewProp_OldPosture = { "OldPosture", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GASAttributeSet_eventOnRep_Posture_Parms, OldPosture), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_UGASAttributeSet_OnRep_Posture_Statics::NewProp_OldPosture_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGASAttributeSet_OnRep_Posture_Statics::NewProp_OldPosture_MetaData)) }; // 1975042971
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGASAttributeSet_OnRep_Posture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGASAttributeSet_OnRep_Posture_Statics::NewProp_OldPosture,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGASAttributeSet_OnRep_Posture_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/GAS/GASAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGASAttributeSet_OnRep_Posture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGASAttributeSet, nullptr, "OnRep_Posture", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGASAttributeSet_OnRep_Posture_Statics::GASAttributeSet_eventOnRep_Posture_Parms), Z_Construct_UFunction_UGASAttributeSet_OnRep_Posture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGASAttributeSet_OnRep_Posture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGASAttributeSet_OnRep_Posture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGASAttributeSet_OnRep_Posture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGASAttributeSet_OnRep_Posture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGASAttributeSet_OnRep_Posture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGASAttributeSet);
	UClass* Z_Construct_UClass_UGASAttributeSet_NoRegister()
	{
		return UGASAttributeSet::StaticClass();
	}
	struct Z_Construct_UClass_UGASAttributeSet_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaxHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Posture_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Posture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Energy_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Energy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Damage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGASAttributeSet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAttributeSet,
		(UObject* (*)())Z_Construct_UPackage__Script_PrototypeProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGASAttributeSet_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGASAttributeSet_OnRep_Damage, "OnRep_Damage" }, // 3704227059
		{ &Z_Construct_UFunction_UGASAttributeSet_OnRep_Energy, "OnRep_Energy" }, // 912020485
		{ &Z_Construct_UFunction_UGASAttributeSet_OnRep_Health, "OnRep_Health" }, // 1961320395
		{ &Z_Construct_UFunction_UGASAttributeSet_OnRep_Posture, "OnRep_Posture" }, // 2763023813
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGASAttributeSet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Player/GAS/GASAttributeSet.h" },
		{ "ModuleRelativePath", "Player/GAS/GASAttributeSet.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGASAttributeSet_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Player/GAS/GASAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGASAttributeSet_Statics::NewProp_Health = { "Health", "OnRep_Health", (EPropertyFlags)0x0010000100000035, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGASAttributeSet, Health), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UGASAttributeSet_Statics::NewProp_Health_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGASAttributeSet_Statics::NewProp_Health_MetaData)) }; // 1975042971
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGASAttributeSet_Statics::NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Player/GAS/GASAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGASAttributeSet_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGASAttributeSet, MaxHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UGASAttributeSet_Statics::NewProp_MaxHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGASAttributeSet_Statics::NewProp_MaxHealth_MetaData)) }; // 1975042971
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGASAttributeSet_Statics::NewProp_Posture_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Player/GAS/GASAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGASAttributeSet_Statics::NewProp_Posture = { "Posture", "OnRep_Posture", (EPropertyFlags)0x0010000100000035, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGASAttributeSet, Posture), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UGASAttributeSet_Statics::NewProp_Posture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGASAttributeSet_Statics::NewProp_Posture_MetaData)) }; // 1975042971
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGASAttributeSet_Statics::NewProp_Energy_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Player/GAS/GASAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGASAttributeSet_Statics::NewProp_Energy = { "Energy", "OnRep_Energy", (EPropertyFlags)0x0010000100000035, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGASAttributeSet, Energy), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UGASAttributeSet_Statics::NewProp_Energy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGASAttributeSet_Statics::NewProp_Energy_MetaData)) }; // 1975042971
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGASAttributeSet_Statics::NewProp_Damage_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Player/GAS/GASAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGASAttributeSet_Statics::NewProp_Damage = { "Damage", "OnRep_Damage", (EPropertyFlags)0x0010000100000035, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGASAttributeSet, Damage), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UGASAttributeSet_Statics::NewProp_Damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGASAttributeSet_Statics::NewProp_Damage_MetaData)) }; // 1975042971
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGASAttributeSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGASAttributeSet_Statics::NewProp_Health,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGASAttributeSet_Statics::NewProp_MaxHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGASAttributeSet_Statics::NewProp_Posture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGASAttributeSet_Statics::NewProp_Energy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGASAttributeSet_Statics::NewProp_Damage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGASAttributeSet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGASAttributeSet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGASAttributeSet_Statics::ClassParams = {
		&UGASAttributeSet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGASAttributeSet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGASAttributeSet_Statics::PropPointers),
		0,
		0x003000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGASAttributeSet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGASAttributeSet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGASAttributeSet()
	{
		if (!Z_Registration_Info_UClass_UGASAttributeSet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGASAttributeSet.OuterSingleton, Z_Construct_UClass_UGASAttributeSet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGASAttributeSet.OuterSingleton;
	}
	template<> PROTOTYPEPROJECT_API UClass* StaticClass<UGASAttributeSet>()
	{
		return UGASAttributeSet::StaticClass();
	}

	void UGASAttributeSet::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_Health(TEXT("Health"));
		static const FName Name_Posture(TEXT("Posture"));
		static const FName Name_Energy(TEXT("Energy"));
		static const FName Name_Damage(TEXT("Damage"));

		const bool bIsValid = true
			&& Name_Health == ClassReps[(int32)ENetFields_Private::Health].Property->GetFName()
			&& Name_Posture == ClassReps[(int32)ENetFields_Private::Posture].Property->GetFName()
			&& Name_Energy == ClassReps[(int32)ENetFields_Private::Energy].Property->GetFName()
			&& Name_Damage == ClassReps[(int32)ENetFields_Private::Damage].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UGASAttributeSet"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGASAttributeSet);
	struct Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Player_GAS_GASAttributeSet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Player_GAS_GASAttributeSet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGASAttributeSet, UGASAttributeSet::StaticClass, TEXT("UGASAttributeSet"), &Z_Registration_Info_UClass_UGASAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGASAttributeSet), 1738789420U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Player_GAS_GASAttributeSet_h_1968026760(TEXT("/Script/PrototypeProject"),
		Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Player_GAS_GASAttributeSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Player_GAS_GASAttributeSet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
