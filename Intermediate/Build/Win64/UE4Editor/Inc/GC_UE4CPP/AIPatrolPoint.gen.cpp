// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GC_UE4CPP/Public/AIPatrolPoint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIPatrolPoint() {}
// Cross Module References
	GC_UE4CPP_API UClass* Z_Construct_UClass_AAIPatrolPoint_NoRegister();
	GC_UE4CPP_API UClass* Z_Construct_UClass_AAIPatrolPoint();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GC_UE4CPP();
// End Cross Module References
	void AAIPatrolPoint::StaticRegisterNativesAAIPatrolPoint()
	{
	}
	UClass* Z_Construct_UClass_AAIPatrolPoint_NoRegister()
	{
		return AAIPatrolPoint::StaticClass();
	}
	struct Z_Construct_UClass_AAIPatrolPoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAIPatrolPoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GC_UE4CPP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIPatrolPoint_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AIPatrolPoint.h" },
		{ "ModuleRelativePath", "Public/AIPatrolPoint.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAIPatrolPoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAIPatrolPoint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAIPatrolPoint_Statics::ClassParams = {
		&AAIPatrolPoint::StaticClass,
		"Engine",
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
		METADATA_PARAMS(Z_Construct_UClass_AAIPatrolPoint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAIPatrolPoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAIPatrolPoint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAIPatrolPoint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAIPatrolPoint, 2914960561);
	template<> GC_UE4CPP_API UClass* StaticClass<AAIPatrolPoint>()
	{
		return AAIPatrolPoint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAIPatrolPoint(Z_Construct_UClass_AAIPatrolPoint, &AAIPatrolPoint::StaticClass, TEXT("/Script/GC_UE4CPP"), TEXT("AAIPatrolPoint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAIPatrolPoint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
