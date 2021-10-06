// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GC_UE4CPP/Public/MyIAController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyIAController() {}
// Cross Module References
	GC_UE4CPP_API UClass* Z_Construct_UClass_AMyIAController_NoRegister();
	GC_UE4CPP_API UClass* Z_Construct_UClass_AMyIAController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_GC_UE4CPP();
// End Cross Module References
	void AMyIAController::StaticRegisterNativesAMyIAController()
	{
	}
	UClass* Z_Construct_UClass_AMyIAController_NoRegister()
	{
		return AMyIAController::StaticClass();
	}
	struct Z_Construct_UClass_AMyIAController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyIAController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_GC_UE4CPP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyIAController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MyIAController.h" },
		{ "ModuleRelativePath", "Public/MyIAController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyIAController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyIAController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyIAController_Statics::ClassParams = {
		&AMyIAController::StaticClass,
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
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMyIAController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyIAController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyIAController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyIAController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyIAController, 2023585703);
	template<> GC_UE4CPP_API UClass* StaticClass<AMyIAController>()
	{
		return AMyIAController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyIAController(Z_Construct_UClass_AMyIAController, &AMyIAController::StaticClass, TEXT("/Script/GC_UE4CPP"), TEXT("AMyIAController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyIAController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
