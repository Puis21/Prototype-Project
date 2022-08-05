// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PrototypeProject/Enemy/EnemyController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyController() {}
// Cross Module References
	PROTOTYPEPROJECT_API UEnum* Z_Construct_UEnum_PrototypeProject_EEnemyState();
	UPackage* Z_Construct_UPackage__Script_PrototypeProject();
	PROTOTYPEPROJECT_API UClass* Z_Construct_UClass_AEnemyController_NoRegister();
	PROTOTYPEPROJECT_API UClass* Z_Construct_UClass_AEnemyController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIStimulus();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEnemyState;
	static UEnum* EEnemyState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EEnemyState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EEnemyState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PrototypeProject_EEnemyState, Z_Construct_UPackage__Script_PrototypeProject(), TEXT("EEnemyState"));
		}
		return Z_Registration_Info_UEnum_EEnemyState.OuterSingleton;
	}
	template<> PROTOTYPEPROJECT_API UEnum* StaticEnum<EEnemyState>()
	{
		return EEnemyState_StaticEnum();
	}
	struct Z_Construct_UEnum_PrototypeProject_EEnemyState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PrototypeProject_EEnemyState_Statics::Enumerators[] = {
		{ "EEnemyState::Patrolling", (int64)EEnemyState::Patrolling },
		{ "EEnemyState::Chasing", (int64)EEnemyState::Chasing },
		{ "EEnemyState::Investigating", (int64)EEnemyState::Investigating },
		{ "EEnemyState::Combat", (int64)EEnemyState::Combat },
		{ "EEnemyState::Attacking", (int64)EEnemyState::Attacking },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PrototypeProject_EEnemyState_Statics::Enum_MetaDataParams[] = {
		{ "Attacking.DisplayName", "Attacking" },
		{ "Attacking.Name", "EEnemyState::Attacking" },
		{ "BlueprintType", "true" },
		{ "Chasing.DisplayName", "Chasing" },
		{ "Chasing.Name", "EEnemyState::Chasing" },
		{ "Combat.DisplayName", "Combat" },
		{ "Combat.Name", "EEnemyState::Combat" },
		{ "Investigating.DisplayName", "Investigating" },
		{ "Investigating.Name", "EEnemyState::Investigating" },
		{ "ModuleRelativePath", "Enemy/EnemyController.h" },
		{ "Patrolling.DisplayName", "Patrolling" },
		{ "Patrolling.Name", "EEnemyState::Patrolling" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PrototypeProject_EEnemyState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PrototypeProject,
		nullptr,
		"EEnemyState",
		"EEnemyState",
		Z_Construct_UEnum_PrototypeProject_EEnemyState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PrototypeProject_EEnemyState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PrototypeProject_EEnemyState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PrototypeProject_EEnemyState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PrototypeProject_EEnemyState()
	{
		if (!Z_Registration_Info_UEnum_EEnemyState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEnemyState.InnerSingleton, Z_Construct_UEnum_PrototypeProject_EEnemyState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EEnemyState.InnerSingleton;
	}
	DEFINE_FUNCTION(AEnemyController::execStartMovementStateSwitch)
	{
		P_GET_ENUM(EEnemyState,Z_Param_eNewMovementState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartMovementStateSwitch(EEnemyState(Z_Param_eNewMovementState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEnemyController::execOnTargetDetected)
	{
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_Actors);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTargetDetected(Z_Param_Out_Actors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEnemyController::execOnPawnDetected)
	{
		P_GET_OBJECT(AActor,Z_Param_actor);
		P_GET_STRUCT(FAIStimulus,Z_Param_stimulus);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPawnDetected(Z_Param_actor,Z_Param_stimulus);
		P_NATIVE_END;
	}
	void AEnemyController::StaticRegisterNativesAEnemyController()
	{
		UClass* Class = AEnemyController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnPawnDetected", &AEnemyController::execOnPawnDetected },
			{ "OnTargetDetected", &AEnemyController::execOnTargetDetected },
			{ "StartMovementStateSwitch", &AEnemyController::execStartMovementStateSwitch },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AEnemyController_OnPawnDetected_Statics
	{
		struct EnemyController_eventOnPawnDetected_Parms
		{
			AActor* actor;
			FAIStimulus stimulus;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_actor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_stimulus_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_stimulus;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemyController_OnPawnDetected_Statics::NewProp_actor = { "actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnemyController_eventOnPawnDetected_Parms, actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyController_OnPawnDetected_Statics::NewProp_stimulus_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEnemyController_OnPawnDetected_Statics::NewProp_stimulus = { "stimulus", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnemyController_eventOnPawnDetected_Parms, stimulus), Z_Construct_UScriptStruct_FAIStimulus, METADATA_PARAMS(Z_Construct_UFunction_AEnemyController_OnPawnDetected_Statics::NewProp_stimulus_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyController_OnPawnDetected_Statics::NewProp_stimulus_MetaData)) }; // 1354403599
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemyController_OnPawnDetected_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyController_OnPawnDetected_Statics::NewProp_actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyController_OnPawnDetected_Statics::NewProp_stimulus,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyController_OnPawnDetected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Enemy/EnemyController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyController_OnPawnDetected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyController, nullptr, "OnPawnDetected", nullptr, nullptr, sizeof(Z_Construct_UFunction_AEnemyController_OnPawnDetected_Statics::EnemyController_eventOnPawnDetected_Parms), Z_Construct_UFunction_AEnemyController_OnPawnDetected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyController_OnPawnDetected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemyController_OnPawnDetected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyController_OnPawnDetected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemyController_OnPawnDetected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemyController_OnPawnDetected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEnemyController_OnTargetDetected_Statics
	{
		struct EnemyController_eventOnTargetDetected_Parms
		{
			TArray<AActor*> Actors;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Actors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemyController_OnTargetDetected_Statics::NewProp_Actors_Inner = { "Actors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyController_OnTargetDetected_Statics::NewProp_Actors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AEnemyController_OnTargetDetected_Statics::NewProp_Actors = { "Actors", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnemyController_eventOnTargetDetected_Parms, Actors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_AEnemyController_OnTargetDetected_Statics::NewProp_Actors_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyController_OnTargetDetected_Statics::NewProp_Actors_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemyController_OnTargetDetected_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyController_OnTargetDetected_Statics::NewProp_Actors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyController_OnTargetDetected_Statics::NewProp_Actors,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyController_OnTargetDetected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Enemy/EnemyController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyController_OnTargetDetected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyController, nullptr, "OnTargetDetected", nullptr, nullptr, sizeof(Z_Construct_UFunction_AEnemyController_OnTargetDetected_Statics::EnemyController_eventOnTargetDetected_Parms), Z_Construct_UFunction_AEnemyController_OnTargetDetected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyController_OnTargetDetected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemyController_OnTargetDetected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyController_OnTargetDetected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemyController_OnTargetDetected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemyController_OnTargetDetected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEnemyController_StartMovementStateSwitch_Statics
	{
		struct EnemyController_eventStartMovementStateSwitch_Parms
		{
			EEnemyState eNewMovementState;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_eNewMovementState_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_eNewMovementState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AEnemyController_StartMovementStateSwitch_Statics::NewProp_eNewMovementState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AEnemyController_StartMovementStateSwitch_Statics::NewProp_eNewMovementState = { "eNewMovementState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnemyController_eventStartMovementStateSwitch_Parms, eNewMovementState), Z_Construct_UEnum_PrototypeProject_EEnemyState, METADATA_PARAMS(nullptr, 0) }; // 1232481691
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemyController_StartMovementStateSwitch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyController_StartMovementStateSwitch_Statics::NewProp_eNewMovementState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyController_StartMovementStateSwitch_Statics::NewProp_eNewMovementState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyController_StartMovementStateSwitch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Enemy/EnemyController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyController_StartMovementStateSwitch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyController, nullptr, "StartMovementStateSwitch", nullptr, nullptr, sizeof(Z_Construct_UFunction_AEnemyController_StartMovementStateSwitch_Statics::EnemyController_eventStartMovementStateSwitch_Parms), Z_Construct_UFunction_AEnemyController_StartMovementStateSwitch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyController_StartMovementStateSwitch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemyController_StartMovementStateSwitch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyController_StartMovementStateSwitch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemyController_StartMovementStateSwitch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemyController_StartMovementStateSwitch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemyController);
	UClass* Z_Construct_UClass_AEnemyController_NoRegister()
	{
		return AEnemyController::StaticClass();
	}
	struct Z_Construct_UClass_AEnemyController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlackboardComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BlackboardComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BehaviorTreeComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BehaviorTreeComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetFocus_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetFocus;
		static const UECodeGen_Private::FBytePropertyParams NewProp_eEnemyState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_eEnemyState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_eEnemyState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_fMeleeRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_m_fMeleeRange;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemyController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_PrototypeProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AEnemyController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AEnemyController_OnPawnDetected, "OnPawnDetected" }, // 1459059251
		{ &Z_Construct_UFunction_AEnemyController_OnTargetDetected, "OnTargetDetected" }, // 4017772996
		{ &Z_Construct_UFunction_AEnemyController_StartMovementStateSwitch, "StartMovementStateSwitch" }, // 3232394170
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Enemy/EnemyController.h" },
		{ "ModuleRelativePath", "Enemy/EnemyController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyController_Statics::NewProp_BlackboardComponent_MetaData[] = {
		{ "AlowPrivateAccess", "true" },
		{ "Category", "AI Behavior" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Enemy/EnemyController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyController_Statics::NewProp_BlackboardComponent = { "BlackboardComponent", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyController, BlackboardComponent), Z_Construct_UClass_UBlackboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemyController_Statics::NewProp_BlackboardComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyController_Statics::NewProp_BlackboardComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyController_Statics::NewProp_BehaviorTreeComponent_MetaData[] = {
		{ "AlowPrivateAccess", "true" },
		{ "Category", "AI Behavior" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Enemy/EnemyController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyController_Statics::NewProp_BehaviorTreeComponent = { "BehaviorTreeComponent", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyController, BehaviorTreeComponent), Z_Construct_UClass_UBehaviorTreeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemyController_Statics::NewProp_BehaviorTreeComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyController_Statics::NewProp_BehaviorTreeComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyController_Statics::NewProp_TargetFocus_MetaData[] = {
		{ "Category", "EnemyController" },
		{ "ModuleRelativePath", "Enemy/EnemyController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyController_Statics::NewProp_TargetFocus = { "TargetFocus", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyController, TargetFocus), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemyController_Statics::NewProp_TargetFocus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyController_Statics::NewProp_TargetFocus_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AEnemyController_Statics::NewProp_eEnemyState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyController_Statics::NewProp_eEnemyState_MetaData[] = {
		{ "Category", "EnemyController" },
		{ "ModuleRelativePath", "Enemy/EnemyController.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AEnemyController_Statics::NewProp_eEnemyState = { "eEnemyState", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyController, eEnemyState), Z_Construct_UEnum_PrototypeProject_EEnemyState, METADATA_PARAMS(Z_Construct_UClass_AEnemyController_Statics::NewProp_eEnemyState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyController_Statics::NewProp_eEnemyState_MetaData)) }; // 1232481691
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyController_Statics::NewProp_m_fMeleeRange_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Enemy/EnemyController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemyController_Statics::NewProp_m_fMeleeRange = { "m_fMeleeRange", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyController, m_fMeleeRange), METADATA_PARAMS(Z_Construct_UClass_AEnemyController_Statics::NewProp_m_fMeleeRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyController_Statics::NewProp_m_fMeleeRange_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemyController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyController_Statics::NewProp_BlackboardComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyController_Statics::NewProp_BehaviorTreeComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyController_Statics::NewProp_TargetFocus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyController_Statics::NewProp_eEnemyState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyController_Statics::NewProp_eEnemyState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyController_Statics::NewProp_m_fMeleeRange,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemyController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemyController_Statics::ClassParams = {
		&AEnemyController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AEnemyController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemyController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemyController()
	{
		if (!Z_Registration_Info_UClass_AEnemyController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemyController.OuterSingleton, Z_Construct_UClass_AEnemyController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEnemyController.OuterSingleton;
	}
	template<> PROTOTYPEPROJECT_API UClass* StaticClass<AEnemyController>()
	{
		return AEnemyController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyController);
	struct Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Enemy_EnemyController_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Enemy_EnemyController_h_Statics::EnumInfo[] = {
		{ EEnemyState_StaticEnum, TEXT("EEnemyState"), &Z_Registration_Info_UEnum_EEnemyState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1232481691U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Enemy_EnemyController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEnemyController, AEnemyController::StaticClass, TEXT("AEnemyController"), &Z_Registration_Info_UClass_AEnemyController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemyController), 4111674499U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Enemy_EnemyController_h_1829037489(TEXT("/Script/PrototypeProject"),
		Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Enemy_EnemyController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Enemy_EnemyController_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Enemy_EnemyController_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Enemy_EnemyController_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
