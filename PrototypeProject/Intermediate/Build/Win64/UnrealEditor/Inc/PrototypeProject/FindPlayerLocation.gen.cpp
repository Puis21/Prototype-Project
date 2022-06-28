// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PrototypeProject/Enemy/BTTasks/FindPlayerLocation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFindPlayerLocation() {}
// Cross Module References
	PROTOTYPEPROJECT_API UClass* Z_Construct_UClass_UFindPlayerLocation_NoRegister();
	PROTOTYPEPROJECT_API UClass* Z_Construct_UClass_UFindPlayerLocation();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlackboardBase();
	UPackage* Z_Construct_UPackage__Script_PrototypeProject();
// End Cross Module References
	void UFindPlayerLocation::StaticRegisterNativesUFindPlayerLocation()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFindPlayerLocation);
	UClass* Z_Construct_UClass_UFindPlayerLocation_NoRegister()
	{
		return UFindPlayerLocation::StaticClass();
	}
	struct Z_Construct_UClass_UFindPlayerLocation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SearchRandom_MetaData[];
#endif
		static void NewProp_SearchRandom_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_SearchRandom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SearchRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SearchRadius;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFindPlayerLocation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTask_BlackboardBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PrototypeProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFindPlayerLocation_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Enemy/BTTasks/FindPlayerLocation.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Enemy/BTTasks/FindPlayerLocation.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFindPlayerLocation_Statics::NewProp_SearchRandom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Search" },
		{ "ModuleRelativePath", "Enemy/BTTasks/FindPlayerLocation.h" },
	};
#endif
	void Z_Construct_UClass_UFindPlayerLocation_Statics::NewProp_SearchRandom_SetBit(void* Obj)
	{
		((UFindPlayerLocation*)Obj)->SearchRandom = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFindPlayerLocation_Statics::NewProp_SearchRandom = { "SearchRandom", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFindPlayerLocation), &Z_Construct_UClass_UFindPlayerLocation_Statics::NewProp_SearchRandom_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFindPlayerLocation_Statics::NewProp_SearchRandom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFindPlayerLocation_Statics::NewProp_SearchRandom_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFindPlayerLocation_Statics::NewProp_SearchRadius_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Search" },
		{ "ModuleRelativePath", "Enemy/BTTasks/FindPlayerLocation.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFindPlayerLocation_Statics::NewProp_SearchRadius = { "SearchRadius", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFindPlayerLocation, SearchRadius), METADATA_PARAMS(Z_Construct_UClass_UFindPlayerLocation_Statics::NewProp_SearchRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFindPlayerLocation_Statics::NewProp_SearchRadius_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFindPlayerLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFindPlayerLocation_Statics::NewProp_SearchRandom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFindPlayerLocation_Statics::NewProp_SearchRadius,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFindPlayerLocation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFindPlayerLocation>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFindPlayerLocation_Statics::ClassParams = {
		&UFindPlayerLocation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFindPlayerLocation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFindPlayerLocation_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFindPlayerLocation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFindPlayerLocation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFindPlayerLocation()
	{
		if (!Z_Registration_Info_UClass_UFindPlayerLocation.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFindPlayerLocation.OuterSingleton, Z_Construct_UClass_UFindPlayerLocation_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFindPlayerLocation.OuterSingleton;
	}
	template<> PROTOTYPEPROJECT_API UClass* StaticClass<UFindPlayerLocation>()
	{
		return UFindPlayerLocation::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFindPlayerLocation);
	struct Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Enemy_BTTasks_FindPlayerLocation_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Enemy_BTTasks_FindPlayerLocation_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFindPlayerLocation, UFindPlayerLocation::StaticClass, TEXT("UFindPlayerLocation"), &Z_Registration_Info_UClass_UFindPlayerLocation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFindPlayerLocation), 2670936538U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Enemy_BTTasks_FindPlayerLocation_h_1740203248(TEXT("/Script/PrototypeProject"),
		Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Enemy_BTTasks_FindPlayerLocation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Enemy_BTTasks_FindPlayerLocation_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
