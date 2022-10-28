// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EMovementState : uint8;
#ifdef TDS_TDSCharacter_generated_h
#error "TDSCharacter.generated.h already included, missing '#pragma once' in TDSCharacter.h"
#endif
#define TDS_TDSCharacter_generated_h

#define TDS_Source_TDS_Charecter_TDSCharacter_h_13_SPARSE_DATA
#define TDS_Source_TDS_Charecter_TDSCharacter_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execChangeMovementState); \
	DECLARE_FUNCTION(execCharecterUpdate); \
	DECLARE_FUNCTION(execMovementTick); \
	DECLARE_FUNCTION(execInputAxisY); \
	DECLARE_FUNCTION(execInputAxisX);


#define TDS_Source_TDS_Charecter_TDSCharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execChangeMovementState); \
	DECLARE_FUNCTION(execCharecterUpdate); \
	DECLARE_FUNCTION(execMovementTick); \
	DECLARE_FUNCTION(execInputAxisY); \
	DECLARE_FUNCTION(execInputAxisX);


#define TDS_Source_TDS_Charecter_TDSCharacter_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATDSCharacter(); \
	friend struct Z_Construct_UClass_ATDSCharacter_Statics; \
public: \
	DECLARE_CLASS(ATDSCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TDS"), NO_API) \
	DECLARE_SERIALIZER(ATDSCharacter)


#define TDS_Source_TDS_Charecter_TDSCharacter_h_13_INCLASS \
private: \
	static void StaticRegisterNativesATDSCharacter(); \
	friend struct Z_Construct_UClass_ATDSCharacter_Statics; \
public: \
	DECLARE_CLASS(ATDSCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TDS"), NO_API) \
	DECLARE_SERIALIZER(ATDSCharacter)


#define TDS_Source_TDS_Charecter_TDSCharacter_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATDSCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATDSCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATDSCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATDSCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATDSCharacter(ATDSCharacter&&); \
	NO_API ATDSCharacter(const ATDSCharacter&); \
public:


#define TDS_Source_TDS_Charecter_TDSCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATDSCharacter(ATDSCharacter&&); \
	NO_API ATDSCharacter(const ATDSCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATDSCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATDSCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATDSCharacter)


#define TDS_Source_TDS_Charecter_TDSCharacter_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TopDownCameraComponent() { return STRUCT_OFFSET(ATDSCharacter, TopDownCameraComponent); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ATDSCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__CursorToWorld() { return STRUCT_OFFSET(ATDSCharacter, CursorToWorld); }


#define TDS_Source_TDS_Charecter_TDSCharacter_h_10_PROLOG
#define TDS_Source_TDS_Charecter_TDSCharacter_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TDS_Source_TDS_Charecter_TDSCharacter_h_13_PRIVATE_PROPERTY_OFFSET \
	TDS_Source_TDS_Charecter_TDSCharacter_h_13_SPARSE_DATA \
	TDS_Source_TDS_Charecter_TDSCharacter_h_13_RPC_WRAPPERS \
	TDS_Source_TDS_Charecter_TDSCharacter_h_13_INCLASS \
	TDS_Source_TDS_Charecter_TDSCharacter_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TDS_Source_TDS_Charecter_TDSCharacter_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TDS_Source_TDS_Charecter_TDSCharacter_h_13_PRIVATE_PROPERTY_OFFSET \
	TDS_Source_TDS_Charecter_TDSCharacter_h_13_SPARSE_DATA \
	TDS_Source_TDS_Charecter_TDSCharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	TDS_Source_TDS_Charecter_TDSCharacter_h_13_INCLASS_NO_PURE_DECLS \
	TDS_Source_TDS_Charecter_TDSCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TDS_API UClass* StaticClass<class ATDSCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TDS_Source_TDS_Charecter_TDSCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
