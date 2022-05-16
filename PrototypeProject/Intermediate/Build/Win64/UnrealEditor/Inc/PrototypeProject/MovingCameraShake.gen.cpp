// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PrototypeProject/Player/Camera/CameraShakes/MovingCameraShake.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovingCameraShake() {}
// Cross Module References
	PROTOTYPEPROJECT_API UClass* Z_Construct_UClass_UMovingCameraShake_NoRegister();
	PROTOTYPEPROJECT_API UClass* Z_Construct_UClass_UMovingCameraShake();
	ENGINE_API UClass* Z_Construct_UClass_UCameraShakeBase();
	UPackage* Z_Construct_UPackage__Script_PrototypeProject();
// End Cross Module References
	void UMovingCameraShake::StaticRegisterNativesUMovingCameraShake()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovingCameraShake);
	UClass* Z_Construct_UClass_UMovingCameraShake_NoRegister()
	{
		return UMovingCameraShake::StaticClass();
	}
	struct Z_Construct_UClass_UMovingCameraShake_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovingCameraShake_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCameraShakeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PrototypeProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovingCameraShake_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Player/Camera/CameraShakes/MovingCameraShake.h" },
		{ "ModuleRelativePath", "Player/Camera/CameraShakes/MovingCameraShake.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovingCameraShake_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovingCameraShake>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovingCameraShake_Statics::ClassParams = {
		&UMovingCameraShake::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovingCameraShake_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovingCameraShake_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovingCameraShake()
	{
		if (!Z_Registration_Info_UClass_UMovingCameraShake.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovingCameraShake.OuterSingleton, Z_Construct_UClass_UMovingCameraShake_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovingCameraShake.OuterSingleton;
	}
	template<> PROTOTYPEPROJECT_API UClass* StaticClass<UMovingCameraShake>()
	{
		return UMovingCameraShake::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovingCameraShake);
	struct Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Player_Camera_CameraShakes_MovingCameraShake_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Player_Camera_CameraShakes_MovingCameraShake_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovingCameraShake, UMovingCameraShake::StaticClass, TEXT("UMovingCameraShake"), &Z_Registration_Info_UClass_UMovingCameraShake, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovingCameraShake), 1428656282U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Player_Camera_CameraShakes_MovingCameraShake_h_443996874(TEXT("/Script/PrototypeProject"),
		Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Player_Camera_CameraShakes_MovingCameraShake_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Player_Camera_CameraShakes_MovingCameraShake_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
