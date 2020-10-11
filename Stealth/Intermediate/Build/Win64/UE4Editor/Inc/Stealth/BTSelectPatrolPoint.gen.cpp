// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Stealth/BTSelectPatrolPoint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTSelectPatrolPoint() {}
// Cross Module References
	STEALTH_API UClass* Z_Construct_UClass_UBTSelectPatrolPoint_NoRegister();
	STEALTH_API UClass* Z_Construct_UClass_UBTSelectPatrolPoint();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_Stealth();
// End Cross Module References
	void UBTSelectPatrolPoint::StaticRegisterNativesUBTSelectPatrolPoint()
	{
	}
	UClass* Z_Construct_UClass_UBTSelectPatrolPoint_NoRegister()
	{
		return UBTSelectPatrolPoint::StaticClass();
	}
	struct Z_Construct_UClass_UBTSelectPatrolPoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTSelectPatrolPoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_Stealth,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTSelectPatrolPoint_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BTSelectPatrolPoint.h" },
		{ "ModuleRelativePath", "BTSelectPatrolPoint.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTSelectPatrolPoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTSelectPatrolPoint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTSelectPatrolPoint_Statics::ClassParams = {
		&UBTSelectPatrolPoint::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBTSelectPatrolPoint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTSelectPatrolPoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTSelectPatrolPoint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTSelectPatrolPoint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTSelectPatrolPoint, 1454629313);
	template<> STEALTH_API UClass* StaticClass<UBTSelectPatrolPoint>()
	{
		return UBTSelectPatrolPoint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTSelectPatrolPoint(Z_Construct_UClass_UBTSelectPatrolPoint, &UBTSelectPatrolPoint::StaticClass, TEXT("/Script/Stealth"), TEXT("UBTSelectPatrolPoint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTSelectPatrolPoint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
