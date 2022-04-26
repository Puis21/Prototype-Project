// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROTOTYPEPROJECT_PlayerMovementComponent_generated_h
#error "PlayerMovementComponent.generated.h already included, missing '#pragma once' in PlayerMovementComponent.h"
#endif
#define PROTOTYPEPROJECT_PlayerMovementComponent_generated_h

#define FID_PrototypeProject_Source_PrototypeProject_Player_Components_PlayerMovementComponent_h_29_SPARSE_DATA
#define FID_PrototypeProject_Source_PrototypeProject_Player_Components_PlayerMovementComponent_h_29_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCrouchTimelineProgress);


#define FID_PrototypeProject_Source_PrototypeProject_Player_Components_PlayerMovementComponent_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCrouchTimelineProgress);


#define FID_PrototypeProject_Source_PrototypeProject_Player_Components_PlayerMovementComponent_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayerMovementComponent(); \
	friend struct Z_Construct_UClass_UPlayerMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UPlayerMovementComponent, UCharacterMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PrototypeProject"), NO_API) \
	DECLARE_SERIALIZER(UPlayerMovementComponent)


#define FID_PrototypeProject_Source_PrototypeProject_Player_Components_PlayerMovementComponent_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUPlayerMovementComponent(); \
	friend struct Z_Construct_UClass_UPlayerMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UPlayerMovementComponent, UCharacterMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PrototypeProject"), NO_API) \
	DECLARE_SERIALIZER(UPlayerMovementComponent)


#define FID_PrototypeProject_Source_PrototypeProject_Player_Components_PlayerMovementComponent_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerMovementComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerMovementComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerMovementComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerMovementComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerMovementComponent(UPlayerMovementComponent&&); \
	NO_API UPlayerMovementComponent(const UPlayerMovementComponent&); \
public:


#define FID_PrototypeProject_Source_PrototypeProject_Player_Components_PlayerMovementComponent_h_29_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerMovementComponent(UPlayerMovementComponent&&); \
	NO_API UPlayerMovementComponent(const UPlayerMovementComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerMovementComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerMovementComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPlayerMovementComponent)


#define FID_PrototypeProject_Source_PrototypeProject_Player_Components_PlayerMovementComponent_h_26_PROLOG
#define FID_PrototypeProject_Source_PrototypeProject_Player_Components_PlayerMovementComponent_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PrototypeProject_Source_PrototypeProject_Player_Components_PlayerMovementComponent_h_29_SPARSE_DATA \
	FID_PrototypeProject_Source_PrototypeProject_Player_Components_PlayerMovementComponent_h_29_RPC_WRAPPERS \
	FID_PrototypeProject_Source_PrototypeProject_Player_Components_PlayerMovementComponent_h_29_INCLASS \
	FID_PrototypeProject_Source_PrototypeProject_Player_Components_PlayerMovementComponent_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_PrototypeProject_Source_PrototypeProject_Player_Components_PlayerMovementComponent_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PrototypeProject_Source_PrototypeProject_Player_Components_PlayerMovementComponent_h_29_SPARSE_DATA \
	FID_PrototypeProject_Source_PrototypeProject_Player_Components_PlayerMovementComponent_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PrototypeProject_Source_PrototypeProject_Player_Components_PlayerMovementComponent_h_29_INCLASS_NO_PURE_DECLS \
	FID_PrototypeProject_Source_PrototypeProject_Player_Components_PlayerMovementComponent_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROTOTYPEPROJECT_API UClass* StaticClass<class UPlayerMovementComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PrototypeProject_Source_PrototypeProject_Player_Components_PlayerMovementComponent_h


#define FOREACH_ENUM_EMOVEMENTSTATE(op) \
	op(EMovementState::Walking) \
	op(EMovementState::Jumping) \
	op(EMovementState::Sprinting) \
	op(EMovementState::Crouching) \
	op(EMovementState::Sliding) 

enum class EMovementState : uint8;
template<> PROTOTYPEPROJECT_API UEnum* StaticEnum<EMovementState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
