// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GC_UE4CPP_MainGameState_generated_h
#error "MainGameState.generated.h already included, missing '#pragma once' in MainGameState.h"
#endif
#define GC_UE4CPP_MainGameState_generated_h

#define UE4InfiltrationGame_Source_GC_UE4CPP_Public_MainGameState_h_24_SPARSE_DATA
#define UE4InfiltrationGame_Source_GC_UE4CPP_Public_MainGameState_h_24_RPC_WRAPPERS
#define UE4InfiltrationGame_Source_GC_UE4CPP_Public_MainGameState_h_24_RPC_WRAPPERS_NO_PURE_DECLS
#define UE4InfiltrationGame_Source_GC_UE4CPP_Public_MainGameState_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMainGameState(); \
	friend struct Z_Construct_UClass_AMainGameState_Statics; \
public: \
	DECLARE_CLASS(AMainGameState, AGameState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GC_UE4CPP"), NO_API) \
	DECLARE_SERIALIZER(AMainGameState)


#define UE4InfiltrationGame_Source_GC_UE4CPP_Public_MainGameState_h_24_INCLASS \
private: \
	static void StaticRegisterNativesAMainGameState(); \
	friend struct Z_Construct_UClass_AMainGameState_Statics; \
public: \
	DECLARE_CLASS(AMainGameState, AGameState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GC_UE4CPP"), NO_API) \
	DECLARE_SERIALIZER(AMainGameState)


#define UE4InfiltrationGame_Source_GC_UE4CPP_Public_MainGameState_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMainGameState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMainGameState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainGameState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainGameState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMainGameState(AMainGameState&&); \
	NO_API AMainGameState(const AMainGameState&); \
public:


#define UE4InfiltrationGame_Source_GC_UE4CPP_Public_MainGameState_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMainGameState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMainGameState(AMainGameState&&); \
	NO_API AMainGameState(const AMainGameState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainGameState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainGameState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMainGameState)


#define UE4InfiltrationGame_Source_GC_UE4CPP_Public_MainGameState_h_24_PRIVATE_PROPERTY_OFFSET
#define UE4InfiltrationGame_Source_GC_UE4CPP_Public_MainGameState_h_21_PROLOG
#define UE4InfiltrationGame_Source_GC_UE4CPP_Public_MainGameState_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4InfiltrationGame_Source_GC_UE4CPP_Public_MainGameState_h_24_PRIVATE_PROPERTY_OFFSET \
	UE4InfiltrationGame_Source_GC_UE4CPP_Public_MainGameState_h_24_SPARSE_DATA \
	UE4InfiltrationGame_Source_GC_UE4CPP_Public_MainGameState_h_24_RPC_WRAPPERS \
	UE4InfiltrationGame_Source_GC_UE4CPP_Public_MainGameState_h_24_INCLASS \
	UE4InfiltrationGame_Source_GC_UE4CPP_Public_MainGameState_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UE4InfiltrationGame_Source_GC_UE4CPP_Public_MainGameState_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4InfiltrationGame_Source_GC_UE4CPP_Public_MainGameState_h_24_PRIVATE_PROPERTY_OFFSET \
	UE4InfiltrationGame_Source_GC_UE4CPP_Public_MainGameState_h_24_SPARSE_DATA \
	UE4InfiltrationGame_Source_GC_UE4CPP_Public_MainGameState_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	UE4InfiltrationGame_Source_GC_UE4CPP_Public_MainGameState_h_24_INCLASS_NO_PURE_DECLS \
	UE4InfiltrationGame_Source_GC_UE4CPP_Public_MainGameState_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GC_UE4CPP_API UClass* StaticClass<class AMainGameState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UE4InfiltrationGame_Source_GC_UE4CPP_Public_MainGameState_h


#define FOREACH_ENUM_EGAMESTATE(op) \
	op(VICTORY) \
	op(DEFEAT) \
	op(PAUSE) \
	op(PLAYING) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
