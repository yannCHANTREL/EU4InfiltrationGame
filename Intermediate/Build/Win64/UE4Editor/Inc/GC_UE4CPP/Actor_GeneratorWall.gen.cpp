// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GC_UE4CPP/Actor_GeneratorWall.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActor_GeneratorWall() {}
// Cross Module References
	GC_UE4CPP_API UEnum* Z_Construct_UEnum_GC_UE4CPP_Axe();
	UPackage* Z_Construct_UPackage__Script_GC_UE4CPP();
	GC_UE4CPP_API UClass* Z_Construct_UClass_AActor_GeneratorWall_NoRegister();
	GC_UE4CPP_API UClass* Z_Construct_UClass_AActor_GeneratorWall();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
// End Cross Module References
	static UEnum* Axe_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GC_UE4CPP_Axe, Z_Construct_UPackage__Script_GC_UE4CPP(), TEXT("Axe"));
		}
		return Singleton;
	}
	template<> GC_UE4CPP_API UEnum* StaticEnum<Axe>()
	{
		return Axe_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_Axe(Axe_StaticEnum, TEXT("/Script/GC_UE4CPP"), TEXT("Axe"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GC_UE4CPP_Axe_Hash() { return 1846499343U; }
	UEnum* Z_Construct_UEnum_GC_UE4CPP_Axe()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GC_UE4CPP();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("Axe"), 0, Get_Z_Construct_UEnum_GC_UE4CPP_Axe_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "AxeX", (int64)AxeX },
				{ "AxeY", (int64)AxeY },
				{ "AxeZ", (int64)AxeZ },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AxeX.DisplayName", "Axe X" },
				{ "AxeX.Name", "AxeX" },
				{ "AxeY.DisplayName", "Axe Y" },
				{ "AxeY.Name", "AxeY" },
				{ "AxeZ.DisplayName", "Axe Z" },
				{ "AxeZ.Name", "AxeZ" },
				{ "ModuleRelativePath", "Actor_GeneratorWall.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GC_UE4CPP,
				nullptr,
				"Axe",
				"Axe",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(AActor_GeneratorWall::execCreateWallFromEditor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateWallFromEditor();
		P_NATIVE_END;
	}
	void AActor_GeneratorWall::StaticRegisterNativesAActor_GeneratorWall()
	{
		UClass* Class = AActor_GeneratorWall::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateWallFromEditor", &AActor_GeneratorWall::execCreateWallFromEditor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AActor_GeneratorWall_CreateWallFromEditor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActor_GeneratorWall_CreateWallFromEditor_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "ModuleRelativePath", "Actor_GeneratorWall.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_GeneratorWall_CreateWallFromEditor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor_GeneratorWall, nullptr, "CreateWallFromEditor", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActor_GeneratorWall_CreateWallFromEditor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GeneratorWall_CreateWallFromEditor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActor_GeneratorWall_CreateWallFromEditor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActor_GeneratorWall_CreateWallFromEditor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AActor_GeneratorWall_NoRegister()
	{
		return AActor_GeneratorWall::StaticClass();
	}
	struct Z_Construct_UClass_AActor_GeneratorWall_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberWallX_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_NumberWallX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberWallY_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_NumberWallY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnWallPrefab_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UnWallPrefab;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AActor_GeneratorWall_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GC_UE4CPP,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AActor_GeneratorWall_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AActor_GeneratorWall_CreateWallFromEditor, "CreateWallFromEditor" }, // 2761207382
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActor_GeneratorWall_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Actor_GeneratorWall.h" },
		{ "ModuleRelativePath", "Actor_GeneratorWall.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActor_GeneratorWall_Statics::NewProp_NumberWallX_MetaData[] = {
		{ "Category", "Actor_GeneratorWall" },
		{ "ModuleRelativePath", "Actor_GeneratorWall.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AActor_GeneratorWall_Statics::NewProp_NumberWallX = { "NumberWallX", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AActor_GeneratorWall, NumberWallX), METADATA_PARAMS(Z_Construct_UClass_AActor_GeneratorWall_Statics::NewProp_NumberWallX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActor_GeneratorWall_Statics::NewProp_NumberWallX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActor_GeneratorWall_Statics::NewProp_NumberWallY_MetaData[] = {
		{ "Category", "Actor_GeneratorWall" },
		{ "ModuleRelativePath", "Actor_GeneratorWall.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AActor_GeneratorWall_Statics::NewProp_NumberWallY = { "NumberWallY", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AActor_GeneratorWall, NumberWallY), METADATA_PARAMS(Z_Construct_UClass_AActor_GeneratorWall_Statics::NewProp_NumberWallY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActor_GeneratorWall_Statics::NewProp_NumberWallY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActor_GeneratorWall_Statics::NewProp_UnWallPrefab_MetaData[] = {
		{ "Category", "Actor_GeneratorWall" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actor_GeneratorWall.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AActor_GeneratorWall_Statics::NewProp_UnWallPrefab = { "UnWallPrefab", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AActor_GeneratorWall, UnWallPrefab), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AActor_GeneratorWall_Statics::NewProp_UnWallPrefab_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActor_GeneratorWall_Statics::NewProp_UnWallPrefab_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AActor_GeneratorWall_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_GeneratorWall_Statics::NewProp_NumberWallX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_GeneratorWall_Statics::NewProp_NumberWallY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_GeneratorWall_Statics::NewProp_UnWallPrefab,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AActor_GeneratorWall_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AActor_GeneratorWall>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AActor_GeneratorWall_Statics::ClassParams = {
		&AActor_GeneratorWall::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AActor_GeneratorWall_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AActor_GeneratorWall_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AActor_GeneratorWall_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AActor_GeneratorWall_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AActor_GeneratorWall()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AActor_GeneratorWall_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AActor_GeneratorWall, 1371006944);
	template<> GC_UE4CPP_API UClass* StaticClass<AActor_GeneratorWall>()
	{
		return AActor_GeneratorWall::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AActor_GeneratorWall(Z_Construct_UClass_AActor_GeneratorWall, &AActor_GeneratorWall::StaticClass, TEXT("/Script/GC_UE4CPP"), TEXT("AActor_GeneratorWall"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AActor_GeneratorWall);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
