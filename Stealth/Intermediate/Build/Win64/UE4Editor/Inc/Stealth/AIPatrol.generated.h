// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
#ifdef STEALTH_AIPatrol_generated_h
#error "AIPatrol.generated.h already included, missing '#pragma once' in AIPatrol.h"
#endif
#define STEALTH_AIPatrol_generated_h

#define Stealth_Source_Stealth_AIPatrol_h_12_SPARSE_DATA
#define Stealth_Source_Stealth_AIPatrol_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnPlayCaught);


#define Stealth_Source_Stealth_AIPatrol_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnPlayCaught);


#define Stealth_Source_Stealth_AIPatrol_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAIPatrol(); \
	friend struct Z_Construct_UClass_AAIPatrol_Statics; \
public: \
	DECLARE_CLASS(AAIPatrol, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Stealth"), NO_API) \
	DECLARE_SERIALIZER(AAIPatrol)


#define Stealth_Source_Stealth_AIPatrol_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAAIPatrol(); \
	friend struct Z_Construct_UClass_AAIPatrol_Statics; \
public: \
	DECLARE_CLASS(AAIPatrol, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Stealth"), NO_API) \
	DECLARE_SERIALIZER(AAIPatrol)


#define Stealth_Source_Stealth_AIPatrol_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAIPatrol(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAIPatrol) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAIPatrol); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAIPatrol); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAIPatrol(AAIPatrol&&); \
	NO_API AAIPatrol(const AAIPatrol&); \
public:


#define Stealth_Source_Stealth_AIPatrol_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAIPatrol(AAIPatrol&&); \
	NO_API AAIPatrol(const AAIPatrol&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAIPatrol); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAIPatrol); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAIPatrol)


#define Stealth_Source_Stealth_AIPatrol_h_12_PRIVATE_PROPERTY_OFFSET
#define Stealth_Source_Stealth_AIPatrol_h_9_PROLOG
#define Stealth_Source_Stealth_AIPatrol_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Stealth_Source_Stealth_AIPatrol_h_12_PRIVATE_PROPERTY_OFFSET \
	Stealth_Source_Stealth_AIPatrol_h_12_SPARSE_DATA \
	Stealth_Source_Stealth_AIPatrol_h_12_RPC_WRAPPERS \
	Stealth_Source_Stealth_AIPatrol_h_12_INCLASS \
	Stealth_Source_Stealth_AIPatrol_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Stealth_Source_Stealth_AIPatrol_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Stealth_Source_Stealth_AIPatrol_h_12_PRIVATE_PROPERTY_OFFSET \
	Stealth_Source_Stealth_AIPatrol_h_12_SPARSE_DATA \
	Stealth_Source_Stealth_AIPatrol_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Stealth_Source_Stealth_AIPatrol_h_12_INCLASS_NO_PURE_DECLS \
	Stealth_Source_Stealth_AIPatrol_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEALTH_API UClass* StaticClass<class AAIPatrol>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Stealth_Source_Stealth_AIPatrol_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
