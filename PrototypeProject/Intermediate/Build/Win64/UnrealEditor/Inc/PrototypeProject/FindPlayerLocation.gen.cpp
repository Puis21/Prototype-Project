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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_fMaxRangeFromPlayer_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_m_fMaxRangeFromPlayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_fMinRangeFromPlayer_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_m_fMinRangeFromPlayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_fMinDistanceToCover_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_m_fMinDistanceToCover;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_iMaxIterations_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_m_iMaxIterations;
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFindPlayerLocation_Statics::NewProp_m_fMaxRangeFromPlayer_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AI" },
		{ "Comment", "// How far away we are willing to look for a random position to move to, in range of the player\n" },
		{ "DisplayName", "Max Range From Player" },
		{ "ModuleRelativePath", "Enemy/BTTasks/FindPlayerLocation.h" },
		{ "ToolTip", "How far away we are willing to look for a random position to move to, in range of the player" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFindPlayerLocation_Statics::NewProp_m_fMaxRangeFromPlayer = { "m_fMaxRangeFromPlayer", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFindPlayerLocation, m_fMaxRangeFromPlayer), METADATA_PARAMS(Z_Construct_UClass_UFindPlayerLocation_Statics::NewProp_m_fMaxRangeFromPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFindPlayerLocation_Statics::NewProp_m_fMaxRangeFromPlayer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFindPlayerLocation_Statics::NewProp_m_fMinRangeFromPlayer_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AI" },
		{ "Comment", "// How close we are willing to look for a random position to move to, in range of the player\n" },
		{ "DisplayName", "Min Range From Player" },
		{ "ModuleRelativePath", "Enemy/BTTasks/FindPlayerLocation.h" },
		{ "ToolTip", "How close we are willing to look for a random position to move to, in range of the player" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFindPlayerLocation_Statics::NewProp_m_fMinRangeFromPlayer = { "m_fMinRangeFromPlayer", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFindPlayerLocation, m_fMinRangeFromPlayer), METADATA_PARAMS(Z_Construct_UClass_UFindPlayerLocation_Statics::NewProp_m_fMinRangeFromPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFindPlayerLocation_Statics::NewProp_m_fMinRangeFromPlayer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFindPlayerLocation_Statics::NewProp_m_fMinDistanceToCover_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AI" },
		{ "Comment", "// How far this new target location needs to be from our current location\n" },
		{ "DisplayName", "Min Distance To Cover" },
		{ "ModuleRelativePath", "Enemy/BTTasks/FindPlayerLocation.h" },
		{ "ToolTip", "How far this new target location needs to be from our current location" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFindPlayerLocation_Statics::NewProp_m_fMinDistanceToCover = { "m_fMinDistanceToCover", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFindPlayerLocation, m_fMinDistanceToCover), METADATA_PARAMS(Z_Construct_UClass_UFindPlayerLocation_Statics::NewProp_m_fMinDistanceToCover_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFindPlayerLocation_Statics::NewProp_m_fMinDistanceToCover_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFindPlayerLocation_Statics::NewProp_m_iMaxIterations_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AI" },
		{ "Comment", "// Amount of times that we attempt to get a random location\n" },
		{ "DisplayName", "Max Iterations" },
		{ "ModuleRelativePath", "Enemy/BTTasks/FindPlayerLocation.h" },
		{ "ToolTip", "Amount of times that we attempt to get a random location" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UFindPlayerLocation_Statics::NewProp_m_iMaxIterations = { "m_iMaxIterations", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFindPlayerLocation, m_iMaxIterations), METADATA_PARAMS(Z_Construct_UClass_UFindPlayerLocation_Statics::NewProp_m_iMaxIterations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFindPlayerLocation_Statics::NewProp_m_iMaxIterations_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFindPlayerLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFindPlayerLocation_Statics::NewProp_SearchRandom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFindPlayerLocation_Statics::NewProp_SearchRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFindPlayerLocation_Statics::NewProp_m_fMaxRangeFromPlayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFindPlayerLocation_Statics::NewProp_m_fMinRangeFromPlayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFindPlayerLocation_Statics::NewProp_m_fMinDistanceToCover,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFindPlayerLocation_Statics::NewProp_m_iMaxIterations,
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
		{ Z_Construct_UClass_UFindPlayerLocation, UFindPlayerLocation::StaticClass, TEXT("UFindPlayerLocation"), &Z_Registration_Info_UClass_UFindPlayerLocation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFindPlayerLocation), 2745091512U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Enemy_BTTasks_FindPlayerLocation_h_2540532613(TEXT("/Script/PrototypeProject"),
		Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Enemy_BTTasks_FindPlayerLocation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PrototypeProject_Source_PrototypeProject_Enemy_BTTasks_FindPlayerLocation_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
