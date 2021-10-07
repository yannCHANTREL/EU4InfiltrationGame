// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GC_UE4CPP/Public/BTT_ChasePlayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTT_ChasePlayer() {}
// Cross Module References
	GC_UE4CPP_API UClass* Z_Construct_UClass_UBTT_ChasePlayer_NoRegister();
	GC_UE4CPP_API UClass* Z_Construct_UClass_UBTT_ChasePlayer();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlackboardBase();
	UPackage* Z_Construct_UPackage__Script_GC_UE4CPP();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
// End Cross Module References
	void UBTT_ChasePlayer::StaticRegisterNativesUBTT_ChasePlayer()
	{
	}
	UClass* Z_Construct_UClass_UBTT_ChasePlayer_NoRegister()
	{
		return UBTT_ChasePlayer::StaticClass();
	}
	struct Z_Construct_UClass_UBTT_ChasePlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Player_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTT_ChasePlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTask_BlackboardBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GC_UE4CPP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTT_ChasePlayer_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BTT_ChasePlayer.h" },
		{ "ModuleRelativePath", "Public/BTT_ChasePlayer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTT_ChasePlayer_Statics::NewProp_Player_MetaData[] = {
		{ "Category", "BTT_ChasePlayer" },
		{ "ModuleRelativePath", "Public/BTT_ChasePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBTT_ChasePlayer_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTT_ChasePlayer, Player), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBTT_ChasePlayer_Statics::NewProp_Player_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTT_ChasePlayer_Statics::NewProp_Player_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTT_ChasePlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTT_ChasePlayer_Statics::NewProp_Player,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTT_ChasePlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTT_ChasePlayer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTT_ChasePlayer_Statics::ClassParams = {
		&UBTT_ChasePlayer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTT_ChasePlayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTT_ChasePlayer_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTT_ChasePlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTT_ChasePlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTT_ChasePlayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTT_ChasePlayer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTT_ChasePlayer, 222092099);
	template<> GC_UE4CPP_API UClass* StaticClass<UBTT_ChasePlayer>()
	{
		return UBTT_ChasePlayer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTT_ChasePlayer(Z_Construct_UClass_UBTT_ChasePlayer, &UBTT_ChasePlayer::StaticClass, TEXT("/Script/GC_UE4CPP"), TEXT("UBTT_ChasePlayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTT_ChasePlayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
