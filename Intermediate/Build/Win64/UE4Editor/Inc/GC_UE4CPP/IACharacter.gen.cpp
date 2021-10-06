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
	const FCppClassTypeInfoStatic Z_Construct_UClass_AIACharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIACharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AIACharacter_Statics::ClassParams = {
		&AIACharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
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
	IMPLEMENT_CLASS(AIACharacter, 1513960388);
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
