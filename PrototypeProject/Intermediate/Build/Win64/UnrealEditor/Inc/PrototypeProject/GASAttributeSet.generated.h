// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayAttributeData;
#ifdef PROTOTYPEPROJECT_GASAttributeSet_generated_h
#error "GASAttributeSet.generated.h already included, missing '#pragma once' in GASAttributeSet.h"
#endif
#define PROTOTYPEPROJECT_GASAttributeSet_generated_h

#define FID_PrototypeProject_Source_PrototypeProject_Player_GAS_GASAttributeSet_h_20_SPARSE_DATA
#define FID_PrototypeProject_Source_PrototypeProject_Player_GAS_GASAttributeSet_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_Damage); \
	DECLARE_FUNCTION(execOnRep_Energy); \
	DECLARE_FUNCTION(execOnRep_Posture); \
	DECLARE_FUNCTION(execOnRep_Health);


#define FID_PrototypeProject_Source_PrototypeProject_Player_GAS_GASAttributeSet_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_Damage); \
	DECLARE_FUNCTION(execOnRep_Energy); \
	DECLARE_FUNCTION(execOnRep_Posture); \
	DECLARE_FUNCTION(execOnRep_Health);


#define FID_PrototypeProject_Source_PrototypeProject_Player_GAS_GASAttributeSet_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGASAttributeSet(); \
	friend struct Z_Construct_UClass_UGASAttributeSet_Statics; \
public: \
	DECLARE_CLASS(UGASAttributeSet, UAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PrototypeProject"), NO_API) \
	DECLARE_SERIALIZER(UGASAttributeSet) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Health=NETFIELD_REP_START, \
		Posture, \
		Energy, \
		Damage, \
		NETFIELD_REP_END=Damage	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UGASAttributeSet) \
public:


#define FID_PrototypeProject_Source_PrototypeProject_Player_GAS_GASAttributeSet_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUGASAttributeSet(); \
	friend struct Z_Construct_UClass_UGASAttributeSet_Statics; \
public: \
	DECLARE_CLASS(UGASAttributeSet, UAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PrototypeProject"), NO_API) \
	DECLARE_SERIALIZER(UGASAttributeSet) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Health=NETFIELD_REP_START, \
		Posture, \
		Energy, \
		Damage, \
		NETFIELD_REP_END=Damage	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UGASAttributeSet) \
public:


#define FID_PrototypeProject_Source_PrototypeProject_Player_GAS_GASAttributeSet_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGASAttributeSet(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGASAttributeSet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGASAttributeSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGASAttributeSet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGASAttributeSet(UGASAttributeSet&&); \
	NO_API UGASAttributeSet(const UGASAttributeSet&); \
public:


#define FID_PrototypeProject_Source_PrototypeProject_Player_GAS_GASAttributeSet_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGASAttributeSet(UGASAttributeSet&&); \
	NO_API UGASAttributeSet(const UGASAttributeSet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGASAttributeSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGASAttributeSet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGASAttributeSet)


#define FID_PrototypeProject_Source_PrototypeProject_Player_GAS_GASAttributeSet_h_17_PROLOG
#define FID_PrototypeProject_Source_PrototypeProject_Player_GAS_GASAttributeSet_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PrototypeProject_Source_PrototypeProject_Player_GAS_GASAttributeSet_h_20_SPARSE_DATA \
	FID_PrototypeProject_Source_PrototypeProject_Player_GAS_GASAttributeSet_h_20_RPC_WRAPPERS \
	FID_PrototypeProject_Source_PrototypeProject_Player_GAS_GASAttributeSet_h_20_INCLASS \
	FID_PrototypeProject_Source_PrototypeProject_Player_GAS_GASAttributeSet_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_PrototypeProject_Source_PrototypeProject_Player_GAS_GASAttributeSet_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PrototypeProject_Source_PrototypeProject_Player_GAS_GASAttributeSet_h_20_SPARSE_DATA \
	FID_PrototypeProject_Source_PrototypeProject_Player_GAS_GASAttributeSet_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PrototypeProject_Source_PrototypeProject_Player_GAS_GASAttributeSet_h_20_INCLASS_NO_PURE_DECLS \
	FID_PrototypeProject_Source_PrototypeProject_Player_GAS_GASAttributeSet_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROTOTYPEPROJECT_API UClass* StaticClass<class UGASAttributeSet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PrototypeProject_Source_PrototypeProject_Player_GAS_GASAttributeSet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
