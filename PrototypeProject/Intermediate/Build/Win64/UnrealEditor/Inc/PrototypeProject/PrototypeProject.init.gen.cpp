// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePrototypeProject_init() {}
	PROTOTYPEPROJECT_API UFunction* Z_Construct_UDelegateFunction_PrototypeProject_OnPickUp__DelegateSignature();
	PROTOTYPEPROJECT_API UFunction* Z_Construct_UDelegateFunction_PrototypeProject_OnUseItem__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_PrototypeProject;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_PrototypeProject()
	{
		if (!Z_Registration_Info_UPackage__Script_PrototypeProject.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_PrototypeProject_OnPickUp__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_PrototypeProject_OnUseItem__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/PrototypeProject",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x66617A62,
				0xBA941FCD,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_PrototypeProject.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_PrototypeProject.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_PrototypeProject(Z_Construct_UPackage__Script_PrototypeProject, TEXT("/Script/PrototypeProject"), Z_Registration_Info_UPackage__Script_PrototypeProject, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x66617A62, 0xBA941FCD));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
