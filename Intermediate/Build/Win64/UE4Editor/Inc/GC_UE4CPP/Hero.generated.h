// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GC_UE4CPP_Hero_generated_h
#error "Hero.generated.h already included, missing '#pragma once' in Hero.h"
#endif
#define GC_UE4CPP_Hero_generated_h

#define UE4InfiltrationGame_Source_GC_UE4CPP_Public_Hero_h_14_SPARSE_DATA
#define UE4InfiltrationGame_Source_GC_UE4CPP_Public_Hero_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execZoomOut); \
	DECLARE_FUNCTION(execZoomIn); \
	DECLARE_FUNCTION(execLookUpRate); \
	DECLARE_FUNCTION(execTurnRate); \
	DECLARE_FUNCTION(execMoveRight); \
	DECLARE_FUNCTION(execMoveForward);


#define UE4InfiltrationGame_Source_GC_UE4CPP_Public_Hero_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execZoomOut); \
	DECLARE_FUNCTION(execZoomIn); \
	DECLARE_FUNCTION(execLookUpRate); \
	DECLARE_FUNCTION(execTurnRate); \
	DECLARE_FUNCTION(execMoveRight); \
	DECLARE_FUNCTION(execMoveForward);


#define UE4InfiltrationGame_Source_GC_UE4CPP_Public_Hero_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHero(); \
	friend struct Z_Construct_UClass_AHero_Statics; \
public: \
	DECLARE_CLASS(AHero, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GC_UE4CPP"), NO_API) \
	DECLARE_SERIALIZER(AHero)


#define UE4InfiltrationGame_Source_GC_UE4CPP_Public_Hero_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAHero(); \
	friend struct Z_Construct_UClass_AHero_Statics; \
public: \
	DECLARE_CLASS(AHero, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GC_UE4CPP"), NO_API) \
	DECLARE_SERIALIZER(AHero)


#define UE4InfiltrationGame_Source_GC_UE4CPP_Public_Hero_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHero(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHero) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHero); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHero); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHero(AHero&&); \
	NO_API AHero(const AHero&); \
public:


#define UE4InfiltrationGame_Source_GC_UE4CPP_Public_Hero_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHero(AHero&&); \
	NO_API AHero(const AHero&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHero); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHero); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHero)


#define UE4InfiltrationGame_Source_GC_UE4CPP_Public_Hero_h_14_PRIVATE_PROPERTY_OFFSET
#define UE4InfiltrationGame_Source_GC_UE4CPP_Public_Hero_h_11_PROLOG
#define UE4InfiltrationGame_Source_GC_UE4CPP_Public_Hero_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4InfiltrationGame_Source_GC_UE4CPP_Public_Hero_h_14_PRIVATE_PROPERTY_OFFSET \
	UE4InfiltrationGame_Source_GC_UE4CPP_Public_Hero_h_14_SPARSE_DATA \
	UE4InfiltrationGame_Source_GC_UE4CPP_Public_Hero_h_14_RPC_WRAPPERS \
	UE4InfiltrationGame_Source_GC_UE4CPP_Public_Hero_h_14_INCLASS \
	UE4InfiltrationGame_Source_GC_UE4CPP_Public_Hero_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UE4InfiltrationGame_Source_GC_UE4CPP_Public_Hero_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4InfiltrationGame_Source_GC_UE4CPP_Public_Hero_h_14_PRIVATE_PROPERTY_OFFSET \
	UE4InfiltrationGame_Source_GC_UE4CPP_Public_Hero_h_14_SPARSE_DATA \
	UE4InfiltrationGame_Source_GC_UE4CPP_Public_Hero_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	UE4InfiltrationGame_Source_GC_UE4CPP_Public_Hero_h_14_INCLASS_NO_PURE_DECLS \
	UE4InfiltrationGame_Source_GC_UE4CPP_Public_Hero_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GC_UE4CPP_API UClass* StaticClass<class AHero>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UE4InfiltrationGame_Source_GC_UE4CPP_Public_Hero_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
