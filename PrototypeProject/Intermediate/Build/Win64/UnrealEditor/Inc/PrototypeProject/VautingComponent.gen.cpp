// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PrototypeProject/Player/Components/VautingComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVautingComponent() {}
// Cross Module References
	PROTOTYPEPROJECT_API UEnum* Z_Construct_UEnum_PrototypeProject_EVaultingState();
	UPackage* Z_Construct_UPackage__Script_PrototypeProject();
	PROTOTYPEPROJECT_API UClass* Z_Construct_UClass_UVautingComponent_NoRegister();
	PROTOTYPEPROJECT_API UClass* Z_Construct_UClass_UVautingComponent();
	PROTOTYPEPROJECT_API UClass* Z_Construct_UClass_UParkourMovementComponent();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVaultingState;
	static UEnum* EVaultingState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVaultingState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVaultingState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PrototypeProject_EVaultingState, Z_Construct_UPackage__Script_PrototypeProject(), TEXT("EVaultingState"));
		}
		return Z_Registration_Info_UEnum_EVaultingState.OuterSingleton;
	}
	template<> PROTOTYPEPROJECT_API UEnum* StaticEnum<EVaultingState>()
	{
		return EVaultingState_StaticEnum();
	}
	struct Z_Construct_UEnum_PrototypeProject_EVaultingState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PrototypeProject_EVaultingState_Statics::Enumerators[] = {
		{ "EVaultingState::Ready", (int64)EVaultingState::Ready },
		{ "EVaultingState::Hanging", (int64)EVaultingState::Hanging },
		{ "EVaultingState::Vaulting", (int64)EVaultingState::Vaulting },
		{ "EVaultingState::Unavailable", (int64)EVaultingState::Unavailable },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PrototypeProject_EVaultingState_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Hanging.DisplayName", "Hanging" },
		{ "Hanging.Name", "EVaultingState::Hanging" },
		{ "ModuleRelativePath", "Player/Components/VautingComponent.h" },
		{ "Ready.DisplayName", "Ready" },
		{ "Ready.Name", "EVaultingState::Ready" },
		{ "Unavailable.DisplayName", "Unavailable" },
		{ "Unavailable.Name", "EVaultingState::Unavailable" },
		{ "Vaulting.DisplayName", "Vaulting" },
		{ "Vaulting.Name", "EVaultingState::Vaulting" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PrototypeProject_EVaultingState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PrototypeProject,
		nullptr,
		"EVaultingState",
		"EVaultingState",
		Z_Construct_UEnum_PrototypeProject_EVaultingState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PrototypeProject_EVaultingState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PrototypeProject_EVaultingState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PrototypeProject_EVaultingState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PrototypeProject_EVaultingState()
	{
		if (!Z_Registration_Info_UEnum_EVaultingState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVaultingState.InnerSingleton, Z_Construct_UEnum_PrototypeProject_EVaultingState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVaultingState.InnerSingleton;
	}
	void UVautingComponent::StaticRegisterNativesUVautingComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVautingComponent);
	UClass* Z_Construct_UClass_UVautingComponent_NoRegister()
	{
		return UVautingComponent::StaticClass();
	}
	struct Z_Construct_UClass_UVautingComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_fHorizontalDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_m_fHorizontalDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_fVaultingSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_m_fVaultingSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVautingComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParkourMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_PrototypeProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVautingComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Player/Components/VautingComponent.h" },
		{ "ModuleRelativePath", "Player/Components/VautingComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVautingComponent_Statics::NewProp_m_fHorizontalDistance_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Custom Movement | Vaulting" },
		{ "ClampMax", "200.0" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Vaulting Horizontal Distance" },
		{ "ModuleRelativePath", "Player/Components/VautingComponent.h" },
		{ "UIMax", "200.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVautingComponent_Statics::NewProp_m_fHorizontalDistance = { "m_fHorizontalDistance", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVautingComponent, m_fHorizontalDistance), METADATA_PARAMS(Z_Construct_UClass_UVautingComponent_Statics::NewProp_m_fHorizontalDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVautingComponent_Statics::NewProp_m_fHorizontalDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVautingComponent_Statics::NewProp_m_fVaultingSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Vaulting" },
		{ "DisplayName", "Vaulting Speed" },
		{ "ModuleRelativePath", "Player/Components/VautingComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVautingComponent_Statics::NewProp_m_fVaultingSpeed = { "m_fVaultingSpeed", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVautingComponent, m_fVaultingSpeed), METADATA_PARAMS(Z_Construct_UClass_UVautingComponent_Statics::NewProp_m_fVaultingSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVautingComponent_Statics::NewProp_m_fVaultingSpeed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVautingComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVautingComponent_Statics::NewProp_m_fHorizontalDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVautingComponent_Statics::NewProp_m_fVaultingSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVautingComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVautingComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVautingComponent_Statics::ClassParams = {
		&UVautingComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVautingComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVautingComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UVautingComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVautingComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVautingComponent()
	{
		if (!Z_Registration_Info_UClass_UVautingComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVautingComponent.OuterSingleton, Z_Construct_UClass_UVautingComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVautingComponent.OuterSingleton;
	}
	template<> PROTOTYPEPROJECT_API UClass* StaticClass<UVautingComponent>()
	{
		return UVautingComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVautingComponent);
	struct Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Player_Components_VautingComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Player_Components_VautingComponent_h_Statics::EnumInfo[] = {
		{ EVaultingState_StaticEnum, TEXT("EVaultingState"), &Z_Registration_Info_UEnum_EVaultingState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3957932423U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Player_Components_VautingComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVautingComponent, UVautingComponent::StaticClass, TEXT("UVautingComponent"), &Z_Registration_Info_UClass_UVautingComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVautingComponent), 2138115770U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Player_Components_VautingComponent_h_3853010802(TEXT("/Script/PrototypeProject"),
		Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Player_Components_VautingComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Player_Components_VautingComponent_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Player_Components_VautingComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Player_Components_VautingComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
