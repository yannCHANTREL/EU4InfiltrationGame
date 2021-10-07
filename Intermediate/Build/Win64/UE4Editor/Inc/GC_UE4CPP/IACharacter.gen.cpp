// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GC_UE4CPP/Public/IACharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIACharacter() {}
// Cross Module References
	GC_UE4CPP_API UClass* Z_Construct_UClass_AIACharacter_NoRegister();
	GC_UE4CPP_API UClass* Z_Construct_UClass_AIACharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_GC_UE4CPP();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
// End Cross Module References
	void AIACharacter::StaticRegisterNativesAIACharacter()
	{
	}
	UClass* Z_Construct_UClass_AIACharacter_NoRegister()
	{
		return AIACharacter::StaticClass();
	}
	struct Z_Construct_UClass_AIACharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BehaviourTree_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BehaviourTree;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AIACharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_GC_UE4CPP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIACharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "IACharacter.h" },
		{ "ModuleRelativePath", "Public/IACharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIACharacter_Statics::NewProp_BehaviourTree_MetaData[] = {
		{ "Category", "IACharacter" },
		{ "ModuleRelativePath", "Public/IACharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIACharacter_Statics::NewProp_BehaviourTree = { "BehaviourTree", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIACharacter, BehaviourTree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AIACharacter_Statics::NewProp_BehaviourTree_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AIACharacter_Statics::NewProp_BehaviourTree_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AIACharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIACharacter_Statics::NewProp_BehaviourTree,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AIACharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIACharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AIACharacter_Statics::ClassParams = {
		&AIACharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AIACharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AIACharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AIACharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AIACharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AIACharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AIACharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AIACharacter, 812423115);
	template<> GC_UE4CPP_API UClass* StaticClass<AIACharacter>()
	{
		return AIACharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AIACharacter(Z_Construct_UClass_AIACharacter, &AIACharacter::StaticClass, TEXT("/Script/GC_UE4CPP"), TEXT("AIACharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AIACharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
