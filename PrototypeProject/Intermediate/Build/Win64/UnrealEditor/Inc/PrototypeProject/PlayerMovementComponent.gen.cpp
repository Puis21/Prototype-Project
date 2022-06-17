// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PrototypeProject/Player/Components/PlayerMovementComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerMovementComponent() {}
// Cross Module References
	PROTOTYPEPROJECT_API UEnum* Z_Construct_UEnum_PrototypeProject_EMovementState();
	UPackage* Z_Construct_UPackage__Script_PrototypeProject();
	PROTOTYPEPROJECT_API UClass* Z_Construct_UClass_UPlayerMovementComponent_NoRegister();
	PROTOTYPEPROJECT_API UClass* Z_Construct_UClass_UPlayerMovementComponent();
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMovementState;
	static UEnum* EMovementState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMovementState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMovementState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PrototypeProject_EMovementState, Z_Construct_UPackage__Script_PrototypeProject(), TEXT("EMovementState"));
		}
		return Z_Registration_Info_UEnum_EMovementState.OuterSingleton;
	}
	template<> PROTOTYPEPROJECT_API UEnum* StaticEnum<EMovementState>()
	{
		return EMovementState_StaticEnum();
	}
	struct Z_Construct_UEnum_PrototypeProject_EMovementState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PrototypeProject_EMovementState_Statics::Enumerators[] = {
		{ "EMovementState::Walking", (int64)EMovementState::Walking },
		{ "EMovementState::Jumping", (int64)EMovementState::Jumping },
		{ "EMovementState::Sprinting", (int64)EMovementState::Sprinting },
		{ "EMovementState::Crouching", (int64)EMovementState::Crouching },
		{ "EMovementState::Sliding", (int64)EMovementState::Sliding },
		{ "EMovementState::Ethereal", (int64)EMovementState::Ethereal },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PrototypeProject_EMovementState_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Crouching.DisplayName", "Crouching" },
		{ "Crouching.Name", "EMovementState::Crouching" },
		{ "Ethereal.DisplayName", "Etheral" },
		{ "Ethereal.Name", "EMovementState::Ethereal" },
		{ "Jumping.DisplayName", "Jumping" },
		{ "Jumping.Name", "EMovementState::Jumping" },
		{ "ModuleRelativePath", "Player/Components/PlayerMovementComponent.h" },
		{ "Sliding.DisplayName", "Sliding" },
		{ "Sliding.Name", "EMovementState::Sliding" },
		{ "Sprinting.DisplayName", "Sprinting" },
		{ "Sprinting.Name", "EMovementState::Sprinting" },
		{ "Walking.Comment", "//Idle\x09\x09UMETA(DisplayName = \"Idle\"),\n" },
		{ "Walking.DisplayName", "Walking" },
		{ "Walking.Name", "EMovementState::Walking" },
		{ "Walking.ToolTip", "Idle            UMETA(DisplayName = \"Idle\")," },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PrototypeProject_EMovementState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PrototypeProject,
		nullptr,
		"EMovementState",
		"EMovementState",
		Z_Construct_UEnum_PrototypeProject_EMovementState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PrototypeProject_EMovementState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PrototypeProject_EMovementState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PrototypeProject_EMovementState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PrototypeProject_EMovementState()
	{
		if (!Z_Registration_Info_UEnum_EMovementState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMovementState.InnerSingleton, Z_Construct_UEnum_PrototypeProject_EMovementState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMovementState.InnerSingleton;
	}
	DEFINE_FUNCTION(UPlayerMovementComponent::execStartMovementStateSwitch)
	{
		P_GET_ENUM(EMovementState,Z_Param_eNewMovementState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartMovementStateSwitch(EMovementState(Z_Param_eNewMovementState));
		P_NATIVE_END;
	}
	void UPlayerMovementComponent::StaticRegisterNativesUPlayerMovementComponent()
	{
		UClass* Class = UPlayerMovementComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "StartMovementStateSwitch", &UPlayerMovementComponent::execStartMovementStateSwitch },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlayerMovementComponent_StartMovementStateSwitch_Statics
	{
		struct PlayerMovementComponent_eventStartMovementStateSwitch_Parms
		{
			EMovementState eNewMovementState;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_eNewMovementState_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_eNewMovementState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPlayerMovementComponent_StartMovementStateSwitch_Statics::NewProp_eNewMovementState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPlayerMovementComponent_StartMovementStateSwitch_Statics::NewProp_eNewMovementState = { "eNewMovementState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerMovementComponent_eventStartMovementStateSwitch_Parms, eNewMovementState), Z_Construct_UEnum_PrototypeProject_EMovementState, METADATA_PARAMS(nullptr, 0) }; // 3260941622
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerMovementComponent_StartMovementStateSwitch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerMovementComponent_StartMovementStateSwitch_Statics::NewProp_eNewMovementState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerMovementComponent_StartMovementStateSwitch_Statics::NewProp_eNewMovementState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerMovementComponent_StartMovementStateSwitch_Statics::Function_MetaDataParams[] = {
		{ "Category", "MovementState" },
		{ "ModuleRelativePath", "Player/Components/PlayerMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerMovementComponent_StartMovementStateSwitch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerMovementComponent, nullptr, "StartMovementStateSwitch", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayerMovementComponent_StartMovementStateSwitch_Statics::PlayerMovementComponent_eventStartMovementStateSwitch_Parms), Z_Construct_UFunction_UPlayerMovementComponent_StartMovementStateSwitch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMovementComponent_StartMovementStateSwitch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerMovementComponent_StartMovementStateSwitch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMovementComponent_StartMovementStateSwitch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerMovementComponent_StartMovementStateSwitch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerMovementComponent_StartMovementStateSwitch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerMovementComponent);
	UClass* Z_Construct_UClass_UPlayerMovementComponent_NoRegister()
	{
		return UPlayerMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_fFootstepsPlayRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_m_fFootstepsPlayRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FootStepSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FootStepSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_iJumpCounter_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_m_iJumpCounter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_fJumpHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_m_fJumpHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_bIsJumping_MetaData[];
#endif
		static void NewProp_m_bIsJumping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_m_bIsJumping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_fMaxWalkSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_m_fMaxWalkSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_fMaxSprintSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_m_fMaxSprintSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_fSprintMinForward_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_m_fSprintMinForward;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_bIsSprinting_MetaData[];
#endif
		static void NewProp_m_bIsSprinting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_m_bIsSprinting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_bDisableStateChange_MetaData[];
#endif
		static void NewProp_m_bDisableStateChange_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_m_bDisableStateChange;
		static const UECodeGen_Private::FBytePropertyParams NewProp_eMovementState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_eMovementState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_eMovementState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCharacterMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_PrototypeProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlayerMovementComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerMovementComponent_StartMovementStateSwitch, "StartMovementStateSwitch" }, // 4244446030
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Player/Components/PlayerMovementComponent.h" },
		{ "ModuleRelativePath", "Player/Components/PlayerMovementComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerMovementComponent_Statics::NewProp_m_fFootstepsPlayRate_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Sounds | Movement" },
		{ "ModuleRelativePath", "Player/Components/PlayerMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerMovementComponent_Statics::NewProp_m_fFootstepsPlayRate = { "m_fFootstepsPlayRate", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerMovementComponent, m_fFootstepsPlayRate), METADATA_PARAMS(Z_Construct_UClass_UPlayerMovementComponent_Statics::NewProp_m_fFootstepsPlayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerMovementComponent_Statics::NewProp_m_fFootstepsPlayRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerMovementComponent_Statics::NewProp_FootStepSound_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Sounds | Movement" },
		{ "ModuleRelativePath", "Player/Components/PlayerMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerMovementComponent_Statics::NewProp_FootStepSound = { "FootStepSound", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerMovementComponent, FootStepSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerMovementComponent_Statics::NewProp_FootStepSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerMovementComponent_Statics::NewProp_FootStepSound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerMovementComponent_Statics::NewProp_m_iJumpCounter_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Custom Movement | Jumping" },
		{ "DisplayName", "Jump Count" },
		{ "ModuleRelativePath", "Player/Components/PlayerMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPlayerMovementComponent_Statics::NewProp_m_iJumpCounter = { "m_iJumpCounter", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerMovementComponent, m_iJumpCounter), METADATA_PARAMS(Z_Construct_UClass_UPlayerMovementComponent_Statics::NewProp_m_iJumpCounter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerMovementComponent_Statics::NewProp_m_iJumpCounter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerMovementComponent_Statics::NewProp_m_fJumpHeight_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Custom Movement | Jumping" },
		{ "DisplayName", "Jump Height" },
		{ "ModuleRelativePath", "Player/Components/PlayerMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerMovementComponent_Statics::NewProp_m_fJumpHeight = { "m_fJumpHeight", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerMovementComponent, m_fJumpHeight), METADATA_PARAMS(Z_Construct_UClass_UPlayerMovementComponent_Statics::NewProp_m_fJumpHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerMovementComponent_Statics::NewProp_m_fJumpHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerMovementComponent_Statics::NewProp_m_bIsJumping_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Custom Movement | Jumping" },
		{ "DisplayName", "Is Jumping" },
		{ "ModuleRelativePath", "Player/Components/PlayerMovementComponent.h" },
	};
#endif
	void Z_Construct_UClass_UPlayerMovementComponent_Statics::NewProp_m_bIsJumping_SetBit(void* Obj)
	{
		((UPlayerMovementComponent*)Obj)->m_bIsJumping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlayerMovementComponent_Statics::NewProp_m_bIsJumping = { "m_bIsJumping", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPlayerMovementComponent), &Z_Construct_UClass_UPlayerMovementComponent_Statics::NewProp_m_bIsJumping_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPlayerMovementComponent_Statics::NewProp_m_bIsJumping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerMovementComponent_Statics::NewProp_m_bIsJumping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerMovementComponent_Statics::NewProp_m_fMaxWalkSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Custom Movement | Walking" },
		{ "DisplayName", "Walk Speed" },
		{ "ModuleRelativePath", "Player/Components/PlayerMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerMovementComponent_Statics::NewProp_m_fMaxWalkSpeed = { "m_fMaxWalkSpeed", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerMovementComponent, m_fMaxWalkSpeed), METADATA_PARAMS(Z_Construct_UClass_UPlayerMovementComponent_Statics::NewProp_m_fMaxWalkSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerMovementComponent_Statics::NewProp_m_fMaxWalkSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerMovementComponent_Statics::NewProp_m_fMaxSprintSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Custom Movement | Sprint" },
		{ "DisplayName", "Sprint Speed" },
		{ "ModuleRelativePath", "Player/Components/PlayerMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerMovementComponent_Statics::NewProp_m_fMaxSprintSpeed = { "m_fMaxSprintSpeed", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerMovementComponent, m_fMaxSprintSpeed), METADATA_PARAMS(Z_Construct_UClass_UPlayerMovementComponent_Statics::NewProp_m_fMaxSprintSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerMovementComponent_Statics::NewProp_m_fMaxSprintSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerMovementComponent_Statics::NewProp_m_fSprintMinForward_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Custom Movement | Sprint" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.88" },
		{ "DisplayName", "Minimum value of forwards axis to begin sprint" },
		{ "ModuleRelativePath", "Player/Components/PlayerMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerMovementComponent_Statics::NewProp_m_fSprintMinForward = { "m_fSprintMinForward", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerMovementComponent, m_fSprintMinForward), METADATA_PARAMS(Z_Construct_UClass_UPlayerMovementComponent_Statics::NewProp_m_fSprintMinForward_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerMovementComponent_Statics::NewProp_m_fSprintMinForward_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerMovementComponent_Statics::NewProp_m_bIsSprinting_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Custom Movement | Walking" },
		{ "DisplayName", "Can Sprint" },
		{ "ModuleRelativePath", "Player/Components/PlayerMovementComponent.h" },
	};
#endif
	void Z_Construct_UClass_UPlayerMovementComponent_Statics::NewProp_m_bIsSprinting_SetBit(void* Obj)
	{
		((UPlayerMovementComponent*)Obj)->m_bIsSprinting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlayerMovementComponent_Statics::NewProp_m_bIsSprinting = { "m_bIsSprinting", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPlayerMovementComponent), &Z_Construct_UClass_UPlayerMovementComponent_Statics::NewProp_m_bIsSprinting_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPlayerMovementComponent_Statics::NewProp_m_bIsSprinting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerMovementComponent_Statics::NewProp_m_bIsSprinting_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerMovementComponent_Statics::NewProp_m_bDisableStateChange_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerMovementComponent" },
		{ "ModuleRelativePath", "Player/Components/PlayerMovementComponent.h" },
	};
#endif
	void Z_Construct_UClass_UPlayerMovementComponent_Statics::NewProp_m_bDisableStateChange_SetBit(void* Obj)
	{
		((UPlayerMovementComponent*)Obj)->m_bDisableStateChange = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlayerMovementComponent_Statics::NewProp_m_bDisableStateChange = { "m_bDisableStateChange", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPlayerMovementComponent), &Z_Construct_UClass_UPlayerMovementComponent_Statics::NewProp_m_bDisableStateChange_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPlayerMovementComponent_Statics::NewProp_m_bDisableStateChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerMovementComponent_Statics::NewProp_m_bDisableStateChange_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPlayerMovementComponent_Statics::NewProp_eMovementState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerMovementComponent_Statics::NewProp_eMovementState_MetaData[] = {
		{ "Category", "PlayerMovementComponent" },
		{ "ModuleRelativePath", "Player/Components/PlayerMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPlayerMovementComponent_Statics::NewProp_eMovementState = { "eMovementState", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerMovementComponent, eMovementState), Z_Construct_UEnum_PrototypeProject_EMovementState, METADATA_PARAMS(Z_Construct_UClass_UPlayerMovementComponent_Statics::NewProp_eMovementState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerMovementComponent_Statics::NewProp_eMovementState_MetaData)) }; // 3260941622
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerMovementComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerMovementComponent_Statics::NewProp_m_fFootstepsPlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerMovementComponent_Statics::NewProp_FootStepSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerMovementComponent_Statics::NewProp_m_iJumpCounter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerMovementComponent_Statics::NewProp_m_fJumpHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerMovementComponent_Statics::NewProp_m_bIsJumping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerMovementComponent_Statics::NewProp_m_fMaxWalkSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerMovementComponent_Statics::NewProp_m_fMaxSprintSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerMovementComponent_Statics::NewProp_m_fSprintMinForward,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerMovementComponent_Statics::NewProp_m_bIsSprinting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerMovementComponent_Statics::NewProp_m_bDisableStateChange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerMovementComponent_Statics::NewProp_eMovementState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerMovementComponent_Statics::NewProp_eMovementState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerMovementComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerMovementComponent_Statics::ClassParams = {
		&UPlayerMovementComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPlayerMovementComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerMovementComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayerMovementComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerMovementComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerMovementComponent()
	{
		if (!Z_Registration_Info_UClass_UPlayerMovementComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerMovementComponent.OuterSingleton, Z_Construct_UClass_UPlayerMovementComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlayerMovementComponent.OuterSingleton;
	}
	template<> PROTOTYPEPROJECT_API UClass* StaticClass<UPlayerMovementComponent>()
	{
		return UPlayerMovementComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerMovementComponent);
	struct Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Player_Components_PlayerMovementComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Player_Components_PlayerMovementComponent_h_Statics::EnumInfo[] = {
		{ EMovementState_StaticEnum, TEXT("EMovementState"), &Z_Registration_Info_UEnum_EMovementState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3260941622U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Player_Components_PlayerMovementComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerMovementComponent, UPlayerMovementComponent::StaticClass, TEXT("UPlayerMovementComponent"), &Z_Registration_Info_UClass_UPlayerMovementComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerMovementComponent), 1698798555U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Player_Components_PlayerMovementComponent_h_1595241533(TEXT("/Script/PrototypeProject"),
		Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Player_Components_PlayerMovementComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Player_Components_PlayerMovementComponent_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Player_Components_PlayerMovementComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Player_Components_PlayerMovementComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
