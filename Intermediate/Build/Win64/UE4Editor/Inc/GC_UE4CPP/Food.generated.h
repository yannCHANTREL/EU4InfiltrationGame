// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GC_UE4CPP_Food_generated_h
#error "Food.generated.h already included, missing '#pragma once' in Food.h"
#endif
#define GC_UE4CPP_Food_generated_h

#define UE4InfiltrationGame_Source_GC_UE4CPP_Public_Food_h_20_SPARSE_DATA
#define UE4InfiltrationGame_Source_GC_UE4CPP_Public_Food_h_20_RPC_WRAPPERS
#define UE4InfiltrationGame_Source_GC_UE4CPP_Public_Food_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define UE4InfiltrationGame_Source_GC_UE4CPP_Public_Food_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFood(); \
	friend struct Z_Construct_UClass_AFood_Statics; \
public: \
	DECLARE_CLASS(AFood, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GC_UE4CPP"), NO_API) \
	DECLARE_SERIALIZER(AFood)


#define UE4InfiltrationGame_Source_GC_UE4CPP_Public_Food_h_20_INCLASS \
private: \
	static void StaticRegisterNativesAFood(); \
	friend struct Z_Construct_UClass_AFood_Statics; \
public: \
	DECLARE_CLASS(AFood, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GC_UE4CPP"), NO_API) \
	DECLARE_SERIALIZER(AFood)


#define UE4InfiltrationGame_Source_GC_UE4CPP_Public_Food_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFood(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFood) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFood); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFood); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFood(AFood&&); \
	NO_API AFood(const AFood&); \
public:


#define UE4InfiltrationGame_Source_GC_UE4CPP_Public_Food_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFood(AFood&&); \
	NO_API AFood(const AFood&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFood); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFood); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFood)


#define UE4InfiltrationGame_Source_GC_UE4CPP_Public_Food_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__StaticMesh() { return STRUCT_OFFSET(AFood, StaticMesh); } \
	FORCEINLINE static uint32 __PPO__AreaSphere() { return STRUCT_OFFSET(AFood, AreaSphere); }


#define UE4InfiltrationGame_Source_GC_UE4CPP_Public_Food_h_17_PROLOG
#define UE4InfiltrationGame_Source_GC_UE4CPP_Public_Food_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4InfiltrationGame_Source_GC_UE4CPP_Public_Food_h_20_PRIVATE_PROPERTY_OFFSET \
	UE4InfiltrationGame_Source_GC_UE4CPP_Public_Food_h_20_SPARSE_DATA \
	UE4InfiltrationGame_Source_GC_UE4CPP_Public_Food_h_20_RPC_WRAPPERS \
	UE4InfiltrationGame_Source_GC_UE4CPP_Public_Food_h_20_INCLASS \
	UE4InfiltrationGame_Source_GC_UE4CPP_Public_Food_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UE4InfiltrationGame_Source_GC_UE4CPP_Public_Food_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4InfiltrationGame_Source_GC_UE4CPP_Public_Food_h_20_PRIVATE_PROPERTY_OFFSET \
	UE4InfiltrationGame_Source_GC_UE4CPP_Public_Food_h_20_SPARSE_DATA \
	UE4InfiltrationGame_Source_GC_UE4CPP_Public_Food_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	UE4InfiltrationGame_Source_GC_UE4CPP_Public_Food_h_20_INCLASS_NO_PURE_DECLS \
	UE4InfiltrationGame_Source_GC_UE4CPP_Public_Food_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GC_UE4CPP_API UClass* StaticClass<class AFood>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UE4InfiltrationGame_Source_GC_UE4CPP_Public_Food_h


#define FOREACH_ENUM_EFOODSTATE(op) \
	op(EFS_PickedUp) \
	op(EFS_Dropped) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
