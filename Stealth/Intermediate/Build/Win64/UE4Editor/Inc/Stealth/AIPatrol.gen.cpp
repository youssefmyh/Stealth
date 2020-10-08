// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Stealth/AIPatrol.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIPatrol() {}
// Cross Module References
	STEALTH_API UClass* Z_Construct_UClass_AAIPatrol_NoRegister();
	STEALTH_API UClass* Z_Construct_UClass_AAIPatrol();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Stealth();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
// End Cross Module References
	void AAIPatrol::StaticRegisterNativesAAIPatrol()
	{
	}
	UClass* Z_Construct_UClass_AAIPatrol_NoRegister()
	{
		return AAIPatrol::StaticClass();
	}
	struct Z_Construct_UClass_AAIPatrol_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BehaviorTree_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BehaviorTree;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAIPatrol_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Stealth,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIPatrol_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AIPatrol.h" },
		{ "ModuleRelativePath", "AIPatrol.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIPatrol_Statics::NewProp_BehaviorTree_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "AIPatrol.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAIPatrol_Statics::NewProp_BehaviorTree = { "BehaviorTree", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAIPatrol, BehaviorTree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAIPatrol_Statics::NewProp_BehaviorTree_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAIPatrol_Statics::NewProp_BehaviorTree_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAIPatrol_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIPatrol_Statics::NewProp_BehaviorTree,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAIPatrol_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAIPatrol>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAIPatrol_Statics::ClassParams = {
		&AAIPatrol::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAIPatrol_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAIPatrol_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAIPatrol_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAIPatrol_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAIPatrol()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAIPatrol_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAIPatrol, 3123064532);
	template<> STEALTH_API UClass* StaticClass<AAIPatrol>()
	{
		return AAIPatrol::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAIPatrol(Z_Construct_UClass_AAIPatrol, &AAIPatrol::StaticClass, TEXT("/Script/Stealth"), TEXT("AAIPatrol"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAIPatrol);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
