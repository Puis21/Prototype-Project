// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PrototypeProject/PrototypeProject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePrototypeProject() {}
// Cross Module References
	PROTOTYPEPROJECT_API UEnum* Z_Construct_UEnum_PrototypeProject_EGASAbilityInputID();
	UPackage* Z_Construct_UPackage__Script_PrototypeProject();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGASAbilityInputID;
	static UEnum* EGASAbilityInputID_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGASAbilityInputID.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGASAbilityInputID.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PrototypeProject_EGASAbilityInputID, Z_Construct_UPackage__Script_PrototypeProject(), TEXT("EGASAbilityInputID"));
		}
		return Z_Registration_Info_UEnum_EGASAbilityInputID.OuterSingleton;
	}
	template<> PROTOTYPEPROJECT_API UEnum* StaticEnum<EGASAbilityInputID>()
	{
		return EGASAbilityInputID_StaticEnum();
	}
	struct Z_Construct_UEnum_PrototypeProject_EGASAbilityInputID_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PrototypeProject_EGASAbilityInputID_Statics::Enumerators[] = {
		{ "EGASAbilityInputID::None", (int64)EGASAbilityInputID::None },
		{ "EGASAbilityInputID::Confirm", (int64)EGASAbilityInputID::Confirm },
		{ "EGASAbilityInputID::Cancel", (int64)EGASAbilityInputID::Cancel },
		{ "EGASAbilityInputID::Throw", (int64)EGASAbilityInputID::Throw },
		{ "EGASAbilityInputID::Ethereal", (int64)EGASAbilityInputID::Ethereal },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PrototypeProject_EGASAbilityInputID_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Cancel.Name", "EGASAbilityInputID::Cancel" },
		{ "Confirm.Name", "EGASAbilityInputID::Confirm" },
		{ "Ethereal.Name", "EGASAbilityInputID::Ethereal" },
		{ "ModuleRelativePath", "PrototypeProject.h" },
		{ "None.Name", "EGASAbilityInputID::None" },
		{ "Throw.Name", "EGASAbilityInputID::Throw" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PrototypeProject_EGASAbilityInputID_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PrototypeProject,
		nullptr,
		"EGASAbilityInputID",
		"EGASAbilityInputID",
		Z_Construct_UEnum_PrototypeProject_EGASAbilityInputID_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PrototypeProject_EGASAbilityInputID_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PrototypeProject_EGASAbilityInputID_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PrototypeProject_EGASAbilityInputID_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PrototypeProject_EGASAbilityInputID()
	{
		if (!Z_Registration_Info_UEnum_EGASAbilityInputID.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGASAbilityInputID.InnerSingleton, Z_Construct_UEnum_PrototypeProject_EGASAbilityInputID_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGASAbilityInputID.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_PrototypeProject_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_PrototypeProject_h_Statics::EnumInfo[] = {
		{ EGASAbilityInputID_StaticEnum, TEXT("EGASAbilityInputID"), &Z_Registration_Info_UEnum_EGASAbilityInputID, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3357405947U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_PrototypeProject_h_3958049407(TEXT("/Script/PrototypeProject"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_PrototypeProject_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_PrototypeProject_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
