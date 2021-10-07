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
	GC_UE4CPP_API UClass* Z_Construct_UClass_AIACharacter_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardComponent_NoRegister();
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterControlled_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CharacterControlled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BehaviorComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BehaviorComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlackboardComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlackboardComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocationToGoKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LocationToGoKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PlayerKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
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
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyIAController_Statics::NewProp_CharacterControlled_MetaData[] = {
		{ "Category", "MyIAController" },
		{ "ModuleRelativePath", "Public/MyIAController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyIAController_Statics::NewProp_CharacterControlled = { "CharacterControlled", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyIAController, CharacterControlled), Z_Construct_UClass_AIACharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyIAController_Statics::NewProp_CharacterControlled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyIAController_Statics::NewProp_CharacterControlled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyIAController_Statics::NewProp_BehaviorComponent_MetaData[] = {
		{ "Category", "MyIAController" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MyIAController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyIAController_Statics::NewProp_BehaviorComponent = { "BehaviorComponent", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyIAController, BehaviorComponent), Z_Construct_UClass_UBehaviorTreeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyIAController_Statics::NewProp_BehaviorComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyIAController_Statics::NewProp_BehaviorComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyIAController_Statics::NewProp_BlackboardComponent_MetaData[] = {
		{ "Category", "MyIAController" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MyIAController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyIAController_Statics::NewProp_BlackboardComponent = { "BlackboardComponent", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyIAController, BlackboardComponent), Z_Construct_UClass_UBlackboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyIAController_Statics::NewProp_BlackboardComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyIAController_Statics::NewProp_BlackboardComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyIAController_Statics::NewProp_LocationToGoKey_MetaData[] = {
		{ "Category", "AI" },
		{ "Comment", "// Blackboard keys\n" },
		{ "ModuleRelativePath", "Public/MyIAController.h" },
		{ "ToolTip", "Blackboard keys" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AMyIAController_Statics::NewProp_LocationToGoKey = { "LocationToGoKey", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyIAController, LocationToGoKey), METADATA_PARAMS(Z_Construct_UClass_AMyIAController_Statics::NewProp_LocationToGoKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyIAController_Statics::NewProp_LocationToGoKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyIAController_Statics::NewProp_PlayerKey_MetaData[] = {
		{ "Category", "AI" },
		{ "Comment", "// Location/point for the AI to go to\n" },
		{ "ModuleRelativePath", "Public/MyIAController.h" },
		{ "ToolTip", "Location/point for the AI to go to" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AMyIAController_Statics::NewProp_PlayerKey = { "PlayerKey", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyIAController, PlayerKey), METADATA_PARAMS(Z_Construct_UClass_AMyIAController_Statics::NewProp_PlayerKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyIAController_Statics::NewProp_PlayerKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyIAController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyIAController_Statics::NewProp_CharacterControlled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyIAController_Statics::NewProp_BehaviorComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyIAController_Statics::NewProp_BlackboardComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyIAController_Statics::NewProp_LocationToGoKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyIAController_Statics::NewProp_PlayerKey,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyIAController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyIAController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyIAController_Statics::ClassParams = {
		&AMyIAController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMyIAController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyIAController_Statics::PropPointers),
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
	IMPLEMENT_CLASS(AMyIAController, 1579408020);
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
