// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GC_UE4CPP_Actor_GeneratorWall_generated_h
#error "Actor_GeneratorWall.generated.h already included, missing '#pragma once' in Actor_GeneratorWall.h"
#endif
#define GC_UE4CPP_Actor_GeneratorWall_generated_h

#define UE4InfiltrationGame_Source_GC_UE4CPP_Actor_GeneratorWall_h_22_SPARSE_DATA
#define UE4InfiltrationGame_Source_GC_UE4CPP_Actor_GeneratorWall_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreateWallFromEditor);


#define UE4InfiltrationGame_Source_GC_UE4CPP_Actor_GeneratorWall_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateWallFromEditor);


#define UE4InfiltrationGame_Source_GC_UE4CPP_Actor_GeneratorWall_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAActor_GeneratorWall(); \
	friend struct Z_Construct_UClass_AActor_GeneratorWall_Statics; \
public: \
	DECLARE_CLASS(AActor_GeneratorWall, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GC_UE4CPP"), NO_API) \
	DECLARE_SERIALIZER(AActor_GeneratorWall)


#define UE4InfiltrationGame_Source_GC_UE4CPP_Actor_GeneratorWall_h_22_INCLASS \
private: \
	static void StaticRegisterNativesAActor_GeneratorWall(); \
	friend struct Z_Construct_UClass_AActor_GeneratorWall_Statics; \
public: \
	DECLARE_CLASS(AActor_GeneratorWall, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GC_UE4CPP"), NO_API) \
	DECLARE_SERIALIZER(AActor_GeneratorWall)


#define UE4InfiltrationGame_Source_GC_UE4CPP_Actor_GeneratorWall_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AActor_GeneratorWall(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AActor_GeneratorWall) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AActor_GeneratorWall); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AActor_GeneratorWall); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AActor_GeneratorWall(AActor_GeneratorWall&&); \
	NO_API AActor_GeneratorWall(const AActor_GeneratorWall&); \
public:


#define UE4InfiltrationGame_Source_GC_UE4CPP_Actor_GeneratorWall_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AActor_GeneratorWall(AActor_GeneratorWall&&); \
	NO_API AActor_GeneratorWall(const AActor_GeneratorWall&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AActor_GeneratorWall); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AActor_GeneratorWall); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AActor_GeneratorWall)


#define UE4InfiltrationGame_Source_GC_UE4CPP_Actor_GeneratorWall_h_22_PRIVATE_PROPERTY_OFFSET
#define UE4InfiltrationGame_Source_GC_UE4CPP_Actor_GeneratorWall_h_17_PROLOG
#define UE4InfiltrationGame_Source_GC_UE4CPP_Actor_GeneratorWall_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4InfiltrationGame_Source_GC_UE4CPP_Actor_GeneratorWall_h_22_PRIVATE_PROPERTY_OFFSET \
	UE4InfiltrationGame_Source_GC_UE4CPP_Actor_GeneratorWall_h_22_SPARSE_DATA \
	UE4InfiltrationGame_Source_GC_UE4CPP_Actor_GeneratorWall_h_22_RPC_WRAPPERS \
	UE4InfiltrationGame_Source_GC_UE4CPP_Actor_GeneratorWall_h_22_INCLASS \
	UE4InfiltrationGame_Source_GC_UE4CPP_Actor_GeneratorWall_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UE4InfiltrationGame_Source_GC_UE4CPP_Actor_GeneratorWall_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4InfiltrationGame_Source_GC_UE4CPP_Actor_GeneratorWall_h_22_PRIVATE_PROPERTY_OFFSET \
	UE4InfiltrationGame_Source_GC_UE4CPP_Actor_GeneratorWall_h_22_SPARSE_DATA \
	UE4InfiltrationGame_Source_GC_UE4CPP_Actor_GeneratorWall_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	UE4InfiltrationGame_Source_GC_UE4CPP_Actor_GeneratorWall_h_22_INCLASS_NO_PURE_DECLS \
	UE4InfiltrationGame_Source_GC_UE4CPP_Actor_GeneratorWall_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GC_UE4CPP_API UClass* StaticClass<class AActor_GeneratorWall>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UE4InfiltrationGame_Source_GC_UE4CPP_Actor_GeneratorWall_h


#define FOREACH_ENUM_AXE(op) \
	op(AxeX) \
	op(AxeY) \
	op(AxeZ) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
