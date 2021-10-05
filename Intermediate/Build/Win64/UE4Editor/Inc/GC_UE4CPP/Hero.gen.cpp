// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GC_UE4CPP/Public/Hero.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHero() {}
// Cross Module References
	GC_UE4CPP_API UClass* Z_Construct_UClass_AHero_NoRegister();
	GC_UE4CPP_API UClass* Z_Construct_UClass_AHero();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_GC_UE4CPP();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AHero::execZoomOut)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ZoomOut();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHero::execZoomIn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ZoomIn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHero::execLookUpRate)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LookUpRate(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHero::execTurnRate)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TurnRate(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHero::execMoveRight)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveRight(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHero::execMoveForward)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveForward(Z_Param_Value);
		P_NATIVE_END;
	}
	void AHero::StaticRegisterNativesAHero()
	{
		UClass* Class = AHero::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LookUpRate", &AHero::execLookUpRate },
			{ "MoveForward", &AHero::execMoveForward },
			{ "MoveRight", &AHero::execMoveRight },
			{ "TurnRate", &AHero::execTurnRate },
			{ "ZoomIn", &AHero::execZoomIn },
			{ "ZoomOut", &AHero::execZoomOut },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AHero_LookUpRate_Statics
	{
		struct Hero_eventLookUpRate_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHero_LookUpRate_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Hero_eventLookUpRate_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHero_LookUpRate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHero_LookUpRate_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHero_LookUpRate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Hero.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHero_LookUpRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHero, nullptr, "LookUpRate", nullptr, nullptr, sizeof(Hero_eventLookUpRate_Parms), Z_Construct_UFunction_AHero_LookUpRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHero_LookUpRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHero_LookUpRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHero_LookUpRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHero_LookUpRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHero_LookUpRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHero_MoveForward_Statics
	{
		struct Hero_eventMoveForward_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHero_MoveForward_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Hero_eventMoveForward_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHero_MoveForward_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHero_MoveForward_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHero_MoveForward_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Hero.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHero_MoveForward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHero, nullptr, "MoveForward", nullptr, nullptr, sizeof(Hero_eventMoveForward_Parms), Z_Construct_UFunction_AHero_MoveForward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHero_MoveForward_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHero_MoveForward_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHero_MoveForward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHero_MoveForward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHero_MoveForward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHero_MoveRight_Statics
	{
		struct Hero_eventMoveRight_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHero_MoveRight_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Hero_eventMoveRight_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHero_MoveRight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHero_MoveRight_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHero_MoveRight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Hero.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHero_MoveRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHero, nullptr, "MoveRight", nullptr, nullptr, sizeof(Hero_eventMoveRight_Parms), Z_Construct_UFunction_AHero_MoveRight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHero_MoveRight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHero_MoveRight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHero_MoveRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHero_MoveRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHero_MoveRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHero_TurnRate_Statics
	{
		struct Hero_eventTurnRate_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHero_TurnRate_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Hero_eventTurnRate_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHero_TurnRate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHero_TurnRate_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHero_TurnRate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Hero.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHero_TurnRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHero, nullptr, "TurnRate", nullptr, nullptr, sizeof(Hero_eventTurnRate_Parms), Z_Construct_UFunction_AHero_TurnRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHero_TurnRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHero_TurnRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHero_TurnRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHero_TurnRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHero_TurnRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHero_ZoomIn_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHero_ZoomIn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Hero.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHero_ZoomIn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHero, nullptr, "ZoomIn", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHero_ZoomIn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHero_ZoomIn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHero_ZoomIn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHero_ZoomIn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHero_ZoomOut_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHero_ZoomOut_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Hero.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHero_ZoomOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHero, nullptr, "ZoomOut", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHero_ZoomOut_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHero_ZoomOut_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHero_ZoomOut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHero_ZoomOut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AHero_NoRegister()
	{
		return AHero::StaticClass();
	}
	struct Z_Construct_UClass_AHero_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraStick_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraStick;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHero_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_GC_UE4CPP,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AHero_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AHero_LookUpRate, "LookUpRate" }, // 1721371688
		{ &Z_Construct_UFunction_AHero_MoveForward, "MoveForward" }, // 2934983457
		{ &Z_Construct_UFunction_AHero_MoveRight, "MoveRight" }, // 1315697832
		{ &Z_Construct_UFunction_AHero_TurnRate, "TurnRate" }, // 4044518363
		{ &Z_Construct_UFunction_AHero_ZoomIn, "ZoomIn" }, // 3252987642
		{ &Z_Construct_UFunction_AHero_ZoomOut, "ZoomOut" }, // 3959005402
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHero_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Hero.h" },
		{ "ModuleRelativePath", "Public/Hero.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHero_Statics::NewProp_CameraStick_MetaData[] = {
		{ "Category", "Hero" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Hero.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHero_Statics::NewProp_CameraStick = { "CameraStick", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHero, CameraStick), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHero_Statics::NewProp_CameraStick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHero_Statics::NewProp_CameraStick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHero_Statics::NewProp_CameraComponent_MetaData[] = {
		{ "Category", "Hero" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Hero.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHero_Statics::NewProp_CameraComponent = { "CameraComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHero, CameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHero_Statics::NewProp_CameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHero_Statics::NewProp_CameraComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHero_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHero_Statics::NewProp_CameraStick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHero_Statics::NewProp_CameraComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHero_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHero>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHero_Statics::ClassParams = {
		&AHero::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AHero_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AHero_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AHero_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHero_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHero()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHero_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHero, 3309580591);
	template<> GC_UE4CPP_API UClass* StaticClass<AHero>()
	{
		return AHero::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHero(Z_Construct_UClass_AHero, &AHero::StaticClass, TEXT("/Script/GC_UE4CPP"), TEXT("AHero"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHero);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
