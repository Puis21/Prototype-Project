// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EEnemyState : uint8;
class AActor;
struct FAIStimulus;
#ifdef PROTOTYPEPROJECT_EnemyController_generated_h
#error "EnemyController.generated.h already included, missing '#pragma once' in EnemyController.h"
#endif
#define PROTOTYPEPROJECT_EnemyController_generated_h

#define FID_PrototypeProject_Source_PrototypeProject_Enemy_EnemyController_h_26_SPARSE_DATA
#define FID_PrototypeProject_Source_PrototypeProject_Enemy_EnemyController_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStartMovementStateSwitch); \
	DECLARE_FUNCTION(execOnTargetDetected); \
	DECLARE_FUNCTION(execOnPawnDetected);


#define FID_PrototypeProject_Source_PrototypeProject_Enemy_EnemyController_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStartMovementStateSwitch); \
	DECLARE_FUNCTION(execOnTargetDetected); \
	DECLARE_FUNCTION(execOnPawnDetected);


#define FID_PrototypeProject_Source_PrototypeProject_Enemy_EnemyController_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemyController(); \
	friend struct Z_Construct_UClass_AEnemyController_Statics; \
public: \
	DECLARE_CLASS(AEnemyController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PrototypeProject"), NO_API) \
	DECLARE_SERIALIZER(AEnemyController)


#define FID_PrototypeProject_Source_PrototypeProject_Enemy_EnemyController_h_26_INCLASS \
private: \
	static void StaticRegisterNativesAEnemyController(); \
	friend struct Z_Construct_UClass_AEnemyController_Statics; \
public: \
	DECLARE_CLASS(AEnemyController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PrototypeProject"), NO_API) \
	DECLARE_SERIALIZER(AEnemyController)


#define FID_PrototypeProject_Source_PrototypeProject_Enemy_EnemyController_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemyController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemyController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyController(AEnemyController&&); \
	NO_API AEnemyController(const AEnemyController&); \
public:


#define FID_PrototypeProject_Source_PrototypeProject_Enemy_EnemyController_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyController(AEnemyController&&); \
	NO_API AEnemyController(const AEnemyController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemyController)


#define FID_PrototypeProject_Source_PrototypeProject_Enemy_EnemyController_h_23_PROLOG
#define FID_PrototypeProject_Source_PrototypeProject_Enemy_EnemyController_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PrototypeProject_Source_PrototypeProject_Enemy_EnemyController_h_26_SPARSE_DATA \
	FID_PrototypeProject_Source_PrototypeProject_Enemy_EnemyController_h_26_RPC_WRAPPERS \
	FID_PrototypeProject_Source_PrototypeProject_Enemy_EnemyController_h_26_INCLASS \
	FID_PrototypeProject_Source_PrototypeProject_Enemy_EnemyController_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_PrototypeProject_Source_PrototypeProject_Enemy_EnemyController_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PrototypeProject_Source_PrototypeProject_Enemy_EnemyController_h_26_SPARSE_DATA \
	FID_PrototypeProject_Source_PrototypeProject_Enemy_EnemyController_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PrototypeProject_Source_PrototypeProject_Enemy_EnemyController_h_26_INCLASS_NO_PURE_DECLS \
	FID_PrototypeProject_Source_PrototypeProject_Enemy_EnemyController_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROTOTYPEPROJECT_API UClass* StaticClass<class AEnemyController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PrototypeProject_Source_PrototypeProject_Enemy_EnemyController_h


#define FOREACH_ENUM_EENEMYSTATE(op) \
	op(EEnemyState::Patrolling) \
	op(EEnemyState::Chasing) \
	op(EEnemyState::Investigating) \
	op(EEnemyState::Combat) \
	op(EEnemyState::Attacking) 

enum class EEnemyState : uint8;
template<> PROTOTYPEPROJECT_API UEnum* StaticEnum<EEnemyState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
