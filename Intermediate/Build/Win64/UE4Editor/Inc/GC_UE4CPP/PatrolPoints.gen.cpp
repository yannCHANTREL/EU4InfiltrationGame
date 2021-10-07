// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GC_UE4CPP/Public/PatrolPoints.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePatrolPoints() {}
// Cross Module References
	GC_UE4CPP_API UClass* Z_Construct_UClass_APatrolPoints_NoRegister();
	GC_UE4CPP_API UClass* Z_Construct_UClass_APatrolPoints();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GC_UE4CPP();
// End Cross Module References
	void APatrolPoints::StaticRegisterNativesAPatrolPoints()
	{
	}
	UClass* Z_Construct_UClass_APatrolPoints_NoRegister()
	{
		return APatrolPoints::StaticClass();
	}
	struct Z_Construct_UClass_APatrolPoints_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APatrolPoints_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GC_UE4CPP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APatrolPoints_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PatrolPoints.h" },
		{ "ModuleRelativePath", "Public/PatrolPoints.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APatrolPoints_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APatrolPoints>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APatrolPoints_Statics::ClassParams = {
		&APatrolPoints::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_APatrolPoints_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APatrolPoints_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APatrolPoints()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APatrolPoints_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APatrolPoints, 724260642);
	template<> GC_UE4CPP_API UClass* StaticClass<APatrolPoints>()
	{
		return APatrolPoints::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APatrolPoints(Z_Construct_UClass_APatrolPoints, &APatrolPoints::StaticClass, TEXT("/Script/GC_UE4CPP"), TEXT("APatrolPoints"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APatrolPoints);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
