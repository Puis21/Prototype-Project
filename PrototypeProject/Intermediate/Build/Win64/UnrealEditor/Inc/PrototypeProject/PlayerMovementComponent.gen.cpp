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
		{ "EMovementState::Vaulting", (int64)EMovementState::Vaulting },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PrototypeProject_EMovementState_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Crouching.DisplayName", "Crouching" },
		{ "Crouching.Name", "EMovementState::Crouching" },
		{ "Jumping.DisplayName", "Jumping" },
		{ "Jumping.Name", "EMovementState::Jumping" },
		{ "ModuleRelativePath", "Player/Components/PlayerMovementComponent.h" },
		{ "Sliding.DisplayName", "Sliding" },
		{ "Sliding.Name", "EMovementState::Sliding" },
		{ "Sprinting.DisplayName", "Sprinting" },
		{ "Sprinting.Name", "EMovementState::Sprinting" },
		{ "Vaulting.DisplayName", "Vaulting" },
		{ "Vaulting.Name", "EMovementState::Vaulting" },
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
	void UPlayerMovementComponent::StaticRegisterNativesUPlayerMovementComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerMovementComponent);
	UClass* Z_Construct_UClass_UPlayerMovementComponent_NoRegister()
	{
		return UPlayerMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_fMaxCrouchSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_m_fMaxCrouchSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_fSprintMinForward_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_m_fSprintMinForward;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_bIsSprinting_MetaData[];
#endif
		static void NewProp_m_bIsSprinting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_m_bIsSprinting;
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Player/Components/PlayerMovementComponent.h" },
		{ "ModuleRelativePath", "Player/Components/PlayerMovementComponent.h" },
	};
#endif
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
		{ "Category", "Custom Movement | Walking" },
		{ "DisplayName", "Sprint Speed" },
		{ "ModuleRelativePath", "Player/Components/PlayerMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerMovementComponent_Statics::NewProp_m_fMaxSprintSpeed = { "m_fMaxSprintSpeed", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerMovementComponent, m_fMaxSprintSpeed), METADATA_PARAMS(Z_Construct_UClass_UPlayerMovementComponent_Statics::NewProp_m_fMaxSprintSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerMovementComponent_Statics::NewProp_m_fMaxSprintSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerMovementComponent_Statics::NewProp_m_fMaxCrouchSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Custom Movement | Walking" },
		{ "DisplayName", "Crouch Speed" },
		{ "ModuleRelativePath", "Player/Components/PlayerMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerMovementComponent_Statics::NewProp_m_fMaxCrouchSpeed = { "m_fMaxCrouchSpeed", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerMovementComponent, m_fMaxCrouchSpeed), METADATA_PARAMS(Z_Construct_UClass_UPlayerMovementComponent_Statics::NewProp_m_fMaxCrouchSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerMovementComponent_Statics::NewProp_m_fMaxCrouchSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerMovementComponent_Statics::NewProp_m_fSprintMinForward_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement | Sprint" },
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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPlayerMovementComponent_Statics::NewProp_eMovementState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerMovementComponent_Statics::NewProp_eMovementState_MetaData[] = {
		{ "Category", "PlayerMovementComponent" },
		{ "ModuleRelativePath", "Player/Components/PlayerMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPlayerMovementComponent_Statics::NewProp_eMovementState = { "eMovementState", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerMovementComponent, eMovementState), Z_Construct_UEnum_PrototypeProject_EMovementState, METADATA_PARAMS(Z_Construct_UClass_UPlayerMovementComponent_Statics::NewProp_eMovementState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerMovementComponent_Statics::NewProp_eMovementState_MetaData)) }; // 4046139049
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerMovementComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerMovementComponent_Statics::NewProp_m_iJumpCounter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerMovementComponent_Statics::NewProp_m_fJumpHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerMovementComponent_Statics::NewProp_m_bIsJumping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerMovementComponent_Statics::NewProp_m_fMaxWalkSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerMovementComponent_Statics::NewProp_m_fMaxSprintSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerMovementComponent_Statics::NewProp_m_fMaxCrouchSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerMovementComponent_Statics::NewProp_m_fSprintMinForward,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerMovementComponent_Statics::NewProp_m_bIsSprinting,
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
		nullptr,
		Z_Construct_UClass_UPlayerMovementComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
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
		{ EMovementState_StaticEnum, TEXT("EMovementState"), &Z_Registration_Info_UEnum_EMovementState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4046139049U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Player_Components_PlayerMovementComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerMovementComponent, UPlayerMovementComponent::StaticClass, TEXT("UPlayerMovementComponent"), &Z_Registration_Info_UClass_UPlayerMovementComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerMovementComponent), 2581234374U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Player_Components_PlayerMovementComponent_h_3787104924(TEXT("/Script/PrototypeProject"),
		Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Player_Components_PlayerMovementComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Player_Components_PlayerMovementComponent_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Player_Components_PlayerMovementComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Player_Components_PlayerMovementComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
