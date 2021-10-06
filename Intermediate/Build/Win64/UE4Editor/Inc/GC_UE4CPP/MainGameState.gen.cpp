// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GC_UE4CPP/Public/MainGameState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainGameState() {}
// Cross Module References
	GC_UE4CPP_API UEnum* Z_Construct_UEnum_GC_UE4CPP_EGameState();
	UPackage* Z_Construct_UPackage__Script_GC_UE4CPP();
	GC_UE4CPP_API UClass* Z_Construct_UClass_AMainGameState_NoRegister();
	GC_UE4CPP_API UClass* Z_Construct_UClass_AMainGameState();
	ENGINE_API UClass* Z_Construct_UClass_AGameState();
// End Cross Module References
	static UEnum* EGameState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GC_UE4CPP_EGameState, Z_Construct_UPackage__Script_GC_UE4CPP(), TEXT("EGameState"));
		}
		return Singleton;
	}
	template<> GC_UE4CPP_API UEnum* StaticEnum<EGameState>()
	{
		return EGameState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGameState(EGameState_StaticEnum, TEXT("/Script/GC_UE4CPP"), TEXT("EGameState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GC_UE4CPP_EGameState_Hash() { return 114831691U; }
	UEnum* Z_Construct_UEnum_GC_UE4CPP_EGameState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GC_UE4CPP();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGameState"), 0, Get_Z_Construct_UEnum_GC_UE4CPP_EGameState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "VICTORY", (int64)VICTORY },
				{ "DEFEAT", (int64)DEFEAT },
				{ "PAUSE", (int64)PAUSE },
				{ "PLAYING", (int64)PLAYING },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "/**\n * \n */" },
				{ "DEFEAT.Comment", "/**\n * \n */" },
				{ "DEFEAT.Name", "DEFEAT" },
				{ "ModuleRelativePath", "Public/MainGameState.h" },
				{ "PAUSE.Comment", "/**\n * \n */" },
				{ "PAUSE.Name", "PAUSE" },
				{ "PLAYING.Comment", "/**\n * \n */" },
				{ "PLAYING.Name", "PLAYING" },
				{ "VICTORY.Comment", "/**\n * \n */" },
				{ "VICTORY.Name", "VICTORY" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GC_UE4CPP,
				nullptr,
				"EGameState",
				"EGameState",
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
	void AMainGameState::StaticRegisterNativesAMainGameState()
	{
	}
	UClass* Z_Construct_UClass_AMainGameState_NoRegister()
	{
		return AMainGameState::StaticClass();
	}
	struct Z_Construct_UClass_AMainGameState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMainGameState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameState,
		(UObject* (*)())Z_Construct_UPackage__Script_GC_UE4CPP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainGameState_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MainGameState.h" },
		{ "ModuleRelativePath", "Public/MainGameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMainGameState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMainGameState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMainGameState_Statics::ClassParams = {
		&AMainGameState::StaticClass,
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
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMainGameState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMainGameState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMainGameState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMainGameState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMainGameState, 4196584721);
	template<> GC_UE4CPP_API UClass* StaticClass<AMainGameState>()
	{
		return AMainGameState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMainGameState(Z_Construct_UClass_AMainGameState, &AMainGameState::StaticClass, TEXT("/Script/GC_UE4CPP"), TEXT("AMainGameState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMainGameState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
