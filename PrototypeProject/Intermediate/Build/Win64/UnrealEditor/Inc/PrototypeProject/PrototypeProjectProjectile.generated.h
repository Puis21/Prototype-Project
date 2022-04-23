// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef PROTOTYPEPROJECT_PrototypeProjectProjectile_generated_h
#error "PrototypeProjectProjectile.generated.h already included, missing '#pragma once' in PrototypeProjectProjectile.h"
#endif
#define PROTOTYPEPROJECT_PrototypeProjectProjectile_generated_h

#define FID_PrototypeProject_Source_PrototypeProject_PrototypeProjectProjectile_h_15_SPARSE_DATA
#define FID_PrototypeProject_Source_PrototypeProject_PrototypeProjectProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_PrototypeProject_Source_PrototypeProject_PrototypeProjectProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_PrototypeProject_Source_PrototypeProject_PrototypeProjectProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPrototypeProjectProjectile(); \
	friend struct Z_Construct_UClass_APrototypeProjectProjectile_Statics; \
public: \
	DECLARE_CLASS(APrototypeProjectProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PrototypeProject"), NO_API) \
	DECLARE_SERIALIZER(APrototypeProjectProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_PrototypeProject_Source_PrototypeProject_PrototypeProjectProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAPrototypeProjectProjectile(); \
	friend struct Z_Construct_UClass_APrototypeProjectProjectile_Statics; \
public: \
	DECLARE_CLASS(APrototypeProjectProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PrototypeProject"), NO_API) \
	DECLARE_SERIALIZER(APrototypeProjectProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_PrototypeProject_Source_PrototypeProject_PrototypeProjectProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APrototypeProjectProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APrototypeProjectProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APrototypeProjectProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APrototypeProjectProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APrototypeProjectProjectile(APrototypeProjectProjectile&&); \
	NO_API APrototypeProjectProjectile(const APrototypeProjectProjectile&); \
public:


#define FID_PrototypeProject_Source_PrototypeProject_PrototypeProjectProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APrototypeProjectProjectile(APrototypeProjectProjectile&&); \
	NO_API APrototypeProjectProjectile(const APrototypeProjectProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APrototypeProjectProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APrototypeProjectProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APrototypeProjectProjectile)


#define FID_PrototypeProject_Source_PrototypeProject_PrototypeProjectProjectile_h_12_PROLOG
#define FID_PrototypeProject_Source_PrototypeProject_PrototypeProjectProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PrototypeProject_Source_PrototypeProject_PrototypeProjectProjectile_h_15_SPARSE_DATA \
	FID_PrototypeProject_Source_PrototypeProject_PrototypeProjectProjectile_h_15_RPC_WRAPPERS \
	FID_PrototypeProject_Source_PrototypeProject_PrototypeProjectProjectile_h_15_INCLASS \
	FID_PrototypeProject_Source_PrototypeProject_PrototypeProjectProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_PrototypeProject_Source_PrototypeProject_PrototypeProjectProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PrototypeProject_Source_PrototypeProject_PrototypeProjectProjectile_h_15_SPARSE_DATA \
	FID_PrototypeProject_Source_PrototypeProject_PrototypeProjectProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PrototypeProject_Source_PrototypeProject_PrototypeProjectProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_PrototypeProject_Source_PrototypeProject_PrototypeProjectProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROTOTYPEPROJECT_API UClass* StaticClass<class APrototypeProjectProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PrototypeProject_Source_PrototypeProject_PrototypeProjectProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
