// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TDS_MovementTypes_generated_h
#error "MovementTypes.generated.h already included, missing '#pragma once' in MovementTypes.h"
#endif
#define TDS_MovementTypes_generated_h

#define TDS_Source_TDS_FunctionLibrary_MovementTypes_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCharecterSpeed_Statics; \
	TDS_API static class UScriptStruct* StaticStruct();


template<> TDS_API UScriptStruct* StaticStruct<struct FCharecterSpeed>();

#define TDS_Source_TDS_FunctionLibrary_MovementTypes_h_32_SPARSE_DATA
#define TDS_Source_TDS_FunctionLibrary_MovementTypes_h_32_RPC_WRAPPERS
#define TDS_Source_TDS_FunctionLibrary_MovementTypes_h_32_RPC_WRAPPERS_NO_PURE_DECLS
#define TDS_Source_TDS_FunctionLibrary_MovementTypes_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTypes(); \
	friend struct Z_Construct_UClass_UTypes_Statics; \
public: \
	DECLARE_CLASS(UTypes, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TDS"), NO_API) \
	DECLARE_SERIALIZER(UTypes)


#define TDS_Source_TDS_FunctionLibrary_MovementTypes_h_32_INCLASS \
private: \
	static void StaticRegisterNativesUTypes(); \
	friend struct Z_Construct_UClass_UTypes_Statics; \
public: \
	DECLARE_CLASS(UTypes, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TDS"), NO_API) \
	DECLARE_SERIALIZER(UTypes)


#define TDS_Source_TDS_FunctionLibrary_MovementTypes_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTypes(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTypes) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTypes); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTypes); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTypes(UTypes&&); \
	NO_API UTypes(const UTypes&); \
public:


#define TDS_Source_TDS_FunctionLibrary_MovementTypes_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTypes(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTypes(UTypes&&); \
	NO_API UTypes(const UTypes&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTypes); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTypes); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTypes)


#define TDS_Source_TDS_FunctionLibrary_MovementTypes_h_32_PRIVATE_PROPERTY_OFFSET
#define TDS_Source_TDS_FunctionLibrary_MovementTypes_h_29_PROLOG
#define TDS_Source_TDS_FunctionLibrary_MovementTypes_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TDS_Source_TDS_FunctionLibrary_MovementTypes_h_32_PRIVATE_PROPERTY_OFFSET \
	TDS_Source_TDS_FunctionLibrary_MovementTypes_h_32_SPARSE_DATA \
	TDS_Source_TDS_FunctionLibrary_MovementTypes_h_32_RPC_WRAPPERS \
	TDS_Source_TDS_FunctionLibrary_MovementTypes_h_32_INCLASS \
	TDS_Source_TDS_FunctionLibrary_MovementTypes_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TDS_Source_TDS_FunctionLibrary_MovementTypes_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TDS_Source_TDS_FunctionLibrary_MovementTypes_h_32_PRIVATE_PROPERTY_OFFSET \
	TDS_Source_TDS_FunctionLibrary_MovementTypes_h_32_SPARSE_DATA \
	TDS_Source_TDS_FunctionLibrary_MovementTypes_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	TDS_Source_TDS_FunctionLibrary_MovementTypes_h_32_INCLASS_NO_PURE_DECLS \
	TDS_Source_TDS_FunctionLibrary_MovementTypes_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TDS_API UClass* StaticClass<class UTypes>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TDS_Source_TDS_FunctionLibrary_MovementTypes_h


#define FOREACH_ENUM_EMOVEMENTSTATE(op) \
	op(EMovementState::Aim_State) \
	op(EMovementState::Walk_State) \
	op(EMovementState::Run_State) 

enum class EMovementState : uint8;
template<> TDS_API UEnum* StaticEnum<EMovementState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
