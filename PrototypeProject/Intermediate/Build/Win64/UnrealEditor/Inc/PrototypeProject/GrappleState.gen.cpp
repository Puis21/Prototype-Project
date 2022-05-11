// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PrototypeProject/GrappleState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGrappleState() {}
// Cross Module References
	PROTOTYPEPROJECT_API UEnum* Z_Construct_UEnum_PrototypeProject_EGrappleState();
	UPackage* Z_Construct_UPackage__Script_PrototypeProject();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGrappleState;
	static UEnum* EGrappleState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGrappleState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGrappleState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PrototypeProject_EGrappleState, Z_Construct_UPackage__Script_PrototypeProject(), TEXT("EGrappleState"));
		}
		return Z_Registration_Info_UEnum_EGrappleState.OuterSingleton;
	}
	template<> PROTOTYPEPROJECT_API UEnum* StaticEnum<EGrappleState>()
	{
		return EGrappleState_StaticEnum();
	}
	struct Z_Construct_UEnum_PrototypeProject_EGrappleState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PrototypeProject_EGrappleState_Statics::Enumerators[] = {
		{ "EGrappleState::EGS_Retracted", (int64)EGrappleState::EGS_Retracted },
		{ "EGrappleState::EGS_Firing", (int64)EGrappleState::EGS_Firing },
		{ "EGrappleState::EGS_NearingTarget", (int64)EGrappleState::EGS_NearingTarget },
		{ "EGrappleState::EGS_OnTarget", (int64)EGrappleState::EGS_OnTarget },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PrototypeProject_EGrappleState_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EGS_Firing.DisplayName", "Hook Firing" },
		{ "EGS_Firing.Name", "EGrappleState::EGS_Firing" },
		{ "EGS_NearingTarget.DisplayName", "Hook Near Target" },
		{ "EGS_NearingTarget.Name", "EGrappleState::EGS_NearingTarget" },
		{ "EGS_OnTarget.DisplayName", "Hook Attached to Target" },
		{ "EGS_OnTarget.Name", "EGrappleState::EGS_OnTarget" },
		{ "EGS_Retracted.DisplayName", "Hook Retracted" },
		{ "EGS_Retracted.Name", "EGrappleState::EGS_Retracted" },
		{ "ModuleRelativePath", "GrappleState.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PrototypeProject_EGrappleState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PrototypeProject,
		nullptr,
		"EGrappleState",
		"EGrappleState",
		Z_Construct_UEnum_PrototypeProject_EGrappleState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PrototypeProject_EGrappleState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PrototypeProject_EGrappleState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PrototypeProject_EGrappleState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PrototypeProject_EGrappleState()
	{
		if (!Z_Registration_Info_UEnum_EGrappleState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGrappleState.InnerSingleton, Z_Construct_UEnum_PrototypeProject_EGrappleState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGrappleState.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_GrappleState_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_GrappleState_h_Statics::EnumInfo[] = {
		{ EGrappleState_StaticEnum, TEXT("EGrappleState"), &Z_Registration_Info_UEnum_EGrappleState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 900937684U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_GrappleState_h_4002063200(TEXT("/Script/PrototypeProject"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_GrappleState_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_GrappleState_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
