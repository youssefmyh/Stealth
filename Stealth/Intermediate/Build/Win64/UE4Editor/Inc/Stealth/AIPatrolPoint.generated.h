// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEALTH_AIPatrolPoint_generated_h
#error "AIPatrolPoint.generated.h already included, missing '#pragma once' in AIPatrolPoint.h"
#endif
#define STEALTH_AIPatrolPoint_generated_h

#define Stealth_Source_Stealth_AIPatrolPoint_h_15_SPARSE_DATA
#define Stealth_Source_Stealth_AIPatrolPoint_h_15_RPC_WRAPPERS
#define Stealth_Source_Stealth_AIPatrolPoint_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Stealth_Source_Stealth_AIPatrolPoint_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAIPatrolPoint(); \
	friend struct Z_Construct_UClass_AAIPatrolPoint_Statics; \
public: \
	DECLARE_CLASS(AAIPatrolPoint, ATargetPoint, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Stealth"), NO_API) \
	DECLARE_SERIALIZER(AAIPatrolPoint)


#define Stealth_Source_Stealth_AIPatrolPoint_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAAIPatrolPoint(); \
	friend struct Z_Construct_UClass_AAIPatrolPoint_Statics; \
public: \
	DECLARE_CLASS(AAIPatrolPoint, ATargetPoint, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Stealth"), NO_API) \
	DECLARE_SERIALIZER(AAIPatrolPoint)


#define Stealth_Source_Stealth_AIPatrolPoint_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAIPatrolPoint(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAIPatrolPoint) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAIPatrolPoint); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAIPatrolPoint); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAIPatrolPoint(AAIPatrolPoint&&); \
	NO_API AAIPatrolPoint(const AAIPatrolPoint&); \
public:


#define Stealth_Source_Stealth_AIPatrolPoint_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAIPatrolPoint(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAIPatrolPoint(AAIPatrolPoint&&); \
	NO_API AAIPatrolPoint(const AAIPatrolPoint&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAIPatrolPoint); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAIPatrolPoint); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAIPatrolPoint)


#define Stealth_Source_Stealth_AIPatrolPoint_h_15_PRIVATE_PROPERTY_OFFSET
#define Stealth_Source_Stealth_AIPatrolPoint_h_12_PROLOG
#define Stealth_Source_Stealth_AIPatrolPoint_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Stealth_Source_Stealth_AIPatrolPoint_h_15_PRIVATE_PROPERTY_OFFSET \
	Stealth_Source_Stealth_AIPatrolPoint_h_15_SPARSE_DATA \
	Stealth_Source_Stealth_AIPatrolPoint_h_15_RPC_WRAPPERS \
	Stealth_Source_Stealth_AIPatrolPoint_h_15_INCLASS \
	Stealth_Source_Stealth_AIPatrolPoint_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Stealth_Source_Stealth_AIPatrolPoint_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Stealth_Source_Stealth_AIPatrolPoint_h_15_PRIVATE_PROPERTY_OFFSET \
	Stealth_Source_Stealth_AIPatrolPoint_h_15_SPARSE_DATA \
	Stealth_Source_Stealth_AIPatrolPoint_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Stealth_Source_Stealth_AIPatrolPoint_h_15_INCLASS_NO_PURE_DECLS \
	Stealth_Source_Stealth_AIPatrolPoint_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEALTH_API UClass* StaticClass<class AAIPatrolPoint>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Stealth_Source_Stealth_AIPatrolPoint_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
