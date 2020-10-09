// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEALTH_AIPatrolController_generated_h
#error "AIPatrolController.generated.h already included, missing '#pragma once' in AIPatrolController.h"
#endif
#define STEALTH_AIPatrolController_generated_h

#define Stealth_Source_Stealth_AIPatrolController_h_16_SPARSE_DATA
#define Stealth_Source_Stealth_AIPatrolController_h_16_RPC_WRAPPERS
#define Stealth_Source_Stealth_AIPatrolController_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define Stealth_Source_Stealth_AIPatrolController_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAIPatrolController(); \
	friend struct Z_Construct_UClass_AAIPatrolController_Statics; \
public: \
	DECLARE_CLASS(AAIPatrolController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Stealth"), NO_API) \
	DECLARE_SERIALIZER(AAIPatrolController)


#define Stealth_Source_Stealth_AIPatrolController_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAAIPatrolController(); \
	friend struct Z_Construct_UClass_AAIPatrolController_Statics; \
public: \
	DECLARE_CLASS(AAIPatrolController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Stealth"), NO_API) \
	DECLARE_SERIALIZER(AAIPatrolController)


#define Stealth_Source_Stealth_AIPatrolController_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAIPatrolController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAIPatrolController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAIPatrolController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAIPatrolController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAIPatrolController(AAIPatrolController&&); \
	NO_API AAIPatrolController(const AAIPatrolController&); \
public:


#define Stealth_Source_Stealth_AIPatrolController_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAIPatrolController(AAIPatrolController&&); \
	NO_API AAIPatrolController(const AAIPatrolController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAIPatrolController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAIPatrolController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAIPatrolController)


#define Stealth_Source_Stealth_AIPatrolController_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__LocationToGoKey() { return STRUCT_OFFSET(AAIPatrolController, LocationToGoKey); } \
	FORCEINLINE static uint32 __PPO__PlayerKey() { return STRUCT_OFFSET(AAIPatrolController, PlayerKey); }


#define Stealth_Source_Stealth_AIPatrolController_h_13_PROLOG
#define Stealth_Source_Stealth_AIPatrolController_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Stealth_Source_Stealth_AIPatrolController_h_16_PRIVATE_PROPERTY_OFFSET \
	Stealth_Source_Stealth_AIPatrolController_h_16_SPARSE_DATA \
	Stealth_Source_Stealth_AIPatrolController_h_16_RPC_WRAPPERS \
	Stealth_Source_Stealth_AIPatrolController_h_16_INCLASS \
	Stealth_Source_Stealth_AIPatrolController_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Stealth_Source_Stealth_AIPatrolController_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Stealth_Source_Stealth_AIPatrolController_h_16_PRIVATE_PROPERTY_OFFSET \
	Stealth_Source_Stealth_AIPatrolController_h_16_SPARSE_DATA \
	Stealth_Source_Stealth_AIPatrolController_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Stealth_Source_Stealth_AIPatrolController_h_16_INCLASS_NO_PURE_DECLS \
	Stealth_Source_Stealth_AIPatrolController_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEALTH_API UClass* StaticClass<class AAIPatrolController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Stealth_Source_Stealth_AIPatrolController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
