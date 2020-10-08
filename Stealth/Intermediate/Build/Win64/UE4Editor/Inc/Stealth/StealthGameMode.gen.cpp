// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Stealth/StealthGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStealthGameMode() {}
// Cross Module References
	STEALTH_API UClass* Z_Construct_UClass_AStealthGameMode_NoRegister();
	STEALTH_API UClass* Z_Construct_UClass_AStealthGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Stealth();
// End Cross Module References
	void AStealthGameMode::StaticRegisterNativesAStealthGameMode()
	{
	}
	UClass* Z_Construct_UClass_AStealthGameMode_NoRegister()
	{
		return AStealthGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AStealthGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStealthGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Stealth,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStealthGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "StealthGameMode.h" },
		{ "ModuleRelativePath", "StealthGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStealthGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStealthGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AStealthGameMode_Statics::ClassParams = {
		&AStealthGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AStealthGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AStealthGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStealthGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AStealthGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AStealthGameMode, 1112070743);
	template<> STEALTH_API UClass* StaticClass<AStealthGameMode>()
	{
		return AStealthGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AStealthGameMode(Z_Construct_UClass_AStealthGameMode, &AStealthGameMode::StaticClass, TEXT("/Script/Stealth"), TEXT("AStealthGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStealthGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
