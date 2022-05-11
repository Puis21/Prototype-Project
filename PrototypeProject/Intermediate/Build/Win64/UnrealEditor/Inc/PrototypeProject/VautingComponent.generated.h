// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROTOTYPEPROJECT_VautingComponent_generated_h
#error "VautingComponent.generated.h already included, missing '#pragma once' in VautingComponent.h"
#endif
#define PROTOTYPEPROJECT_VautingComponent_generated_h

#define FID_PrototypeProject_Source_PrototypeProject_Player_Components_VautingComponent_h_24_SPARSE_DATA
#define FID_PrototypeProject_Source_PrototypeProject_Player_Components_VautingComponent_h_24_RPC_WRAPPERS
#define FID_PrototypeProject_Source_PrototypeProject_Player_Components_VautingComponent_h_24_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_PrototypeProject_Source_PrototypeProject_Player_Components_VautingComponent_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVautingComponent(); \
	friend struct Z_Construct_UClass_UVautingComponent_Statics; \
public: \
	DECLARE_CLASS(UVautingComponent, UParkourMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PrototypeProject"), NO_API) \
	DECLARE_SERIALIZER(UVautingComponent)


#define FID_PrototypeProject_Source_PrototypeProject_Player_Components_VautingComponent_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUVautingComponent(); \
	friend struct Z_Construct_UClass_UVautingComponent_Statics; \
public: \
	DECLARE_CLASS(UVautingComponent, UParkourMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PrototypeProject"), NO_API) \
	DECLARE_SERIALIZER(UVautingComponent)


#define FID_PrototypeProject_Source_PrototypeProject_Player_Components_VautingComponent_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVautingComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVautingComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVautingComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVautingComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVautingComponent(UVautingComponent&&); \
	NO_API UVautingComponent(const UVautingComponent&); \
public:


#define FID_PrototypeProject_Source_PrototypeProject_Player_Components_VautingComponent_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVautingComponent(UVautingComponent&&); \
	NO_API UVautingComponent(const UVautingComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVautingComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVautingComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UVautingComponent)


#define FID_PrototypeProject_Source_PrototypeProject_Player_Components_VautingComponent_h_21_PROLOG
#define FID_PrototypeProject_Source_PrototypeProject_Player_Components_VautingComponent_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PrototypeProject_Source_PrototypeProject_Player_Components_VautingComponent_h_24_SPARSE_DATA \
	FID_PrototypeProject_Source_PrototypeProject_Player_Components_VautingComponent_h_24_RPC_WRAPPERS \
	FID_PrototypeProject_Source_PrototypeProject_Player_Components_VautingComponent_h_24_INCLASS \
	FID_PrototypeProject_Source_PrototypeProject_Player_Components_VautingComponent_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_PrototypeProject_Source_PrototypeProject_Player_Components_VautingComponent_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PrototypeProject_Source_PrototypeProject_Player_Components_VautingComponent_h_24_SPARSE_DATA \
	FID_PrototypeProject_Source_PrototypeProject_Player_Components_VautingComponent_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PrototypeProject_Source_PrototypeProject_Player_Components_VautingComponent_h_24_INCLASS_NO_PURE_DECLS \
	FID_PrototypeProject_Source_PrototypeProject_Player_Components_VautingComponent_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROTOTYPEPROJECT_API UClass* StaticClass<class UVautingComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PrototypeProject_Source_PrototypeProject_Player_Components_VautingComponent_h


#define FOREACH_ENUM_EVAULTINGSTATE(op) \
	op(EVaultingState::Ready) \
	op(EVaultingState::WantsToVault) \
	op(EVaultingState::Vaulting) \
	op(EVaultingState::Unavailable) 

enum class EVaultingState : uint8;
template<> PROTOTYPEPROJECT_API UEnum* StaticEnum<EVaultingState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
