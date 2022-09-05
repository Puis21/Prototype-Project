// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROTOTYPEPROJECT_DialogueWidget_generated_h
#error "DialogueWidget.generated.h already included, missing '#pragma once' in DialogueWidget.h"
#endif
#define PROTOTYPEPROJECT_DialogueWidget_generated_h

#define FID_PrototypeProject_Source_PrototypeProject_HUD_DialogueWidget_h_15_DELEGATE \
static inline void FOnExitDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnExitDelegate) \
{ \
	OnExitDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_PrototypeProject_Source_PrototypeProject_HUD_DialogueWidget_h_29_SPARSE_DATA
#define FID_PrototypeProject_Source_PrototypeProject_HUD_DialogueWidget_h_29_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSpeak);


#define FID_PrototypeProject_Source_PrototypeProject_HUD_DialogueWidget_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSpeak);


#define FID_PrototypeProject_Source_PrototypeProject_HUD_DialogueWidget_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDialogueWidget(); \
	friend struct Z_Construct_UClass_UDialogueWidget_Statics; \
public: \
	DECLARE_CLASS(UDialogueWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PrototypeProject"), NO_API) \
	DECLARE_SERIALIZER(UDialogueWidget)


#define FID_PrototypeProject_Source_PrototypeProject_HUD_DialogueWidget_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUDialogueWidget(); \
	friend struct Z_Construct_UClass_UDialogueWidget_Statics; \
public: \
	DECLARE_CLASS(UDialogueWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PrototypeProject"), NO_API) \
	DECLARE_SERIALIZER(UDialogueWidget)


#define FID_PrototypeProject_Source_PrototypeProject_HUD_DialogueWidget_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDialogueWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDialogueWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDialogueWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDialogueWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDialogueWidget(UDialogueWidget&&); \
	NO_API UDialogueWidget(const UDialogueWidget&); \
public:


#define FID_PrototypeProject_Source_PrototypeProject_HUD_DialogueWidget_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDialogueWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDialogueWidget(UDialogueWidget&&); \
	NO_API UDialogueWidget(const UDialogueWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDialogueWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDialogueWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDialogueWidget)


#define FID_PrototypeProject_Source_PrototypeProject_HUD_DialogueWidget_h_26_PROLOG
#define FID_PrototypeProject_Source_PrototypeProject_HUD_DialogueWidget_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PrototypeProject_Source_PrototypeProject_HUD_DialogueWidget_h_29_SPARSE_DATA \
	FID_PrototypeProject_Source_PrototypeProject_HUD_DialogueWidget_h_29_RPC_WRAPPERS \
	FID_PrototypeProject_Source_PrototypeProject_HUD_DialogueWidget_h_29_INCLASS \
	FID_PrototypeProject_Source_PrototypeProject_HUD_DialogueWidget_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_PrototypeProject_Source_PrototypeProject_HUD_DialogueWidget_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PrototypeProject_Source_PrototypeProject_HUD_DialogueWidget_h_29_SPARSE_DATA \
	FID_PrototypeProject_Source_PrototypeProject_HUD_DialogueWidget_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PrototypeProject_Source_PrototypeProject_HUD_DialogueWidget_h_29_INCLASS_NO_PURE_DECLS \
	FID_PrototypeProject_Source_PrototypeProject_HUD_DialogueWidget_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROTOTYPEPROJECT_API UClass* StaticClass<class UDialogueWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PrototypeProject_Source_PrototypeProject_HUD_DialogueWidget_h


#define FOREACH_ENUM_EDIALOGUESTATE(op) \
	op(EDialogueState::Speak) \
	op(EDialogueState::Reply) 

enum class EDialogueState : uint8;
template<> PROTOTYPEPROJECT_API UEnum* StaticEnum<EDialogueState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
