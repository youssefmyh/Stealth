// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Stealth/AIPatrolController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIPatrolController() {}
// Cross Module References
	STEALTH_API UClass* Z_Construct_UClass_AAIPatrolController_NoRegister();
	STEALTH_API UClass* Z_Construct_UClass_AAIPatrolController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_Stealth();
// End Cross Module References
	void AAIPatrolController::StaticRegisterNativesAAIPatrolController()
	{
	}
	UClass* Z_Construct_UClass_AAIPatrolController_NoRegister()
	{
		return AAIPatrolController::StaticClass();
	}
	struct Z_Construct_UClass_AAIPatrolController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PlayerKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocationToGoKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LocationToGoKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAIPatrolController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_Stealth,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIPatrolController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "AIPatrolController.h" },
		{ "ModuleRelativePath", "AIPatrolController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIPatrolController_Statics::NewProp_PlayerKey_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "AIPatrolController.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AAIPatrolController_Statics::NewProp_PlayerKey = { "PlayerKey", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAIPatrolController, PlayerKey), METADATA_PARAMS(Z_Construct_UClass_AAIPatrolController_Statics::NewProp_PlayerKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAIPatrolController_Statics::NewProp_PlayerKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIPatrolController_Statics::NewProp_LocationToGoKey_MetaData[] = {
		{ "Category", "AI" },
		{ "Comment", "/*Blackboard Case*/" },
		{ "ModuleRelativePath", "AIPatrolController.h" },
		{ "ToolTip", "Blackboard Case" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AAIPatrolController_Statics::NewProp_LocationToGoKey = { "LocationToGoKey", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAIPatrolController, LocationToGoKey), METADATA_PARAMS(Z_Construct_UClass_AAIPatrolController_Statics::NewProp_LocationToGoKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAIPatrolController_Statics::NewProp_LocationToGoKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAIPatrolController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIPatrolController_Statics::NewProp_PlayerKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIPatrolController_Statics::NewProp_LocationToGoKey,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAIPatrolController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAIPatrolController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAIPatrolController_Statics::ClassParams = {
		&AAIPatrolController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAIPatrolController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAIPatrolController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAIPatrolController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAIPatrolController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAIPatrolController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAIPatrolController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAIPatrolController, 3666364425);
	template<> STEALTH_API UClass* StaticClass<AAIPatrolController>()
	{
		return AAIPatrolController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAIPatrolController(Z_Construct_UClass_AAIPatrolController, &AAIPatrolController::StaticClass, TEXT("/Script/Stealth"), TEXT("AAIPatrolController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAIPatrolController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
