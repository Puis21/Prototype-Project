// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PrototypeProject/Enemy/Enemy_AnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemy_AnimInstance() {}
// Cross Module References
	PROTOTYPEPROJECT_API UClass* Z_Construct_UClass_UEnemy_AnimInstance_NoRegister();
	PROTOTYPEPROJECT_API UClass* Z_Construct_UClass_UEnemy_AnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_PrototypeProject();
	PROTOTYPEPROJECT_API UClass* Z_Construct_UClass_ABP_EnemyCharacter_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UEnemy_AnimInstance::execUpdateAnimationProperties)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateAnimationProperties(Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	void UEnemy_AnimInstance::StaticRegisterNativesUEnemy_AnimInstance()
	{
		UClass* Class = UEnemy_AnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateAnimationProperties", &UEnemy_AnimInstance::execUpdateAnimationProperties },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEnemy_AnimInstance_UpdateAnimationProperties_Statics
	{
		struct Enemy_AnimInstance_eventUpdateAnimationProperties_Parms
		{
			float DeltaTime;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEnemy_AnimInstance_UpdateAnimationProperties_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Enemy_AnimInstance_eventUpdateAnimationProperties_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnemy_AnimInstance_UpdateAnimationProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnemy_AnimInstance_UpdateAnimationProperties_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnemy_AnimInstance_UpdateAnimationProperties_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Enemy/Enemy_AnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnemy_AnimInstance_UpdateAnimationProperties_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnemy_AnimInstance, nullptr, "UpdateAnimationProperties", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEnemy_AnimInstance_UpdateAnimationProperties_Statics::Enemy_AnimInstance_eventUpdateAnimationProperties_Parms), Z_Construct_UFunction_UEnemy_AnimInstance_UpdateAnimationProperties_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemy_AnimInstance_UpdateAnimationProperties_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEnemy_AnimInstance_UpdateAnimationProperties_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemy_AnimInstance_UpdateAnimationProperties_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEnemy_AnimInstance_UpdateAnimationProperties()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnemy_AnimInstance_UpdateAnimationProperties_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnemy_AnimInstance);
	UClass* Z_Construct_UClass_UEnemy_AnimInstance_NoRegister()
	{
		return UEnemy_AnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UEnemy_AnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_pOwnerPawn_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_pOwnerPawn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_speed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_speed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnemy_AnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_PrototypeProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEnemy_AnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEnemy_AnimInstance_UpdateAnimationProperties, "UpdateAnimationProperties" }, // 1140011460
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemy_AnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Enemy/Enemy_AnimInstance.h" },
		{ "ModuleRelativePath", "Enemy/Enemy_AnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemy_AnimInstance_Statics::NewProp_m_pOwnerPawn_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Enemy" },
		{ "ModuleRelativePath", "Enemy/Enemy_AnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnemy_AnimInstance_Statics::NewProp_m_pOwnerPawn = { "m_pOwnerPawn", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemy_AnimInstance, m_pOwnerPawn), Z_Construct_UClass_ABP_EnemyCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEnemy_AnimInstance_Statics::NewProp_m_pOwnerPawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemy_AnimInstance_Statics::NewProp_m_pOwnerPawn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemy_AnimInstance_Statics::NewProp_speed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Enemy/Enemy_AnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnemy_AnimInstance_Statics::NewProp_speed = { "speed", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemy_AnimInstance, speed), METADATA_PARAMS(Z_Construct_UClass_UEnemy_AnimInstance_Statics::NewProp_speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemy_AnimInstance_Statics::NewProp_speed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnemy_AnimInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemy_AnimInstance_Statics::NewProp_m_pOwnerPawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemy_AnimInstance_Statics::NewProp_speed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnemy_AnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnemy_AnimInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnemy_AnimInstance_Statics::ClassParams = {
		&UEnemy_AnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEnemy_AnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEnemy_AnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UEnemy_AnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemy_AnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnemy_AnimInstance()
	{
		if (!Z_Registration_Info_UClass_UEnemy_AnimInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnemy_AnimInstance.OuterSingleton, Z_Construct_UClass_UEnemy_AnimInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEnemy_AnimInstance.OuterSingleton;
	}
	template<> PROTOTYPEPROJECT_API UClass* StaticClass<UEnemy_AnimInstance>()
	{
		return UEnemy_AnimInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnemy_AnimInstance);
	struct Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Enemy_Enemy_AnimInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Enemy_Enemy_AnimInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEnemy_AnimInstance, UEnemy_AnimInstance::StaticClass, TEXT("UEnemy_AnimInstance"), &Z_Registration_Info_UClass_UEnemy_AnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnemy_AnimInstance), 3951765677U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Enemy_Enemy_AnimInstance_h_4238186249(TEXT("/Script/PrototypeProject"),
		Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Enemy_Enemy_AnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Enemy_Enemy_AnimInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
