// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GC_UE4CPP/Public/BTT_FindRandomPatrol.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTT_FindRandomPatrol() {}
// Cross Module References
	GC_UE4CPP_API UClass* Z_Construct_UClass_UBTT_FindRandomPatrol_NoRegister();
	GC_UE4CPP_API UClass* Z_Construct_UClass_UBTT_FindRandomPatrol();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_GC_UE4CPP();
// End Cross Module References
	void UBTT_FindRandomPatrol::StaticRegisterNativesUBTT_FindRandomPatrol()
	{
	}
	UClass* Z_Construct_UClass_UBTT_FindRandomPatrol_NoRegister()
	{
		return UBTT_FindRandomPatrol::StaticClass();
	}
	struct Z_Construct_UClass_UBTT_FindRandomPatrol_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTT_FindRandomPatrol_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_GC_UE4CPP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTT_FindRandomPatrol_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BTT_FindRandomPatrol.h" },
		{ "ModuleRelativePath", "Public/BTT_FindRandomPatrol.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTT_FindRandomPatrol_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTT_FindRandomPatrol>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTT_FindRandomPatrol_Statics::ClassParams = {
		&UBTT_FindRandomPatrol::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTT_FindRandomPatrol_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTT_FindRandomPatrol_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTT_FindRandomPatrol()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTT_FindRandomPatrol_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTT_FindRandomPatrol, 2934924989);
	template<> GC_UE4CPP_API UClass* StaticClass<UBTT_FindRandomPatrol>()
	{
		return UBTT_FindRandomPatrol::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTT_FindRandomPatrol(Z_Construct_UClass_UBTT_FindRandomPatrol, &UBTT_FindRandomPatrol::StaticClass, TEXT("/Script/GC_UE4CPP"), TEXT("UBTT_FindRandomPatrol"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTT_FindRandomPatrol);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
