// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TDS_TDSPlayerController_generated_h
#error "TDSPlayerController.generated.h already included, missing '#pragma once' in TDSPlayerController.h"
#endif
#define TDS_TDSPlayerController_generated_h

#define TDS_Source_TDS_TDSPlayerController_h_12_SPARSE_DATA
#define TDS_Source_TDS_TDSPlayerController_h_12_RPC_WRAPPERS
#define TDS_Source_TDS_TDSPlayerController_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define TDS_Source_TDS_TDSPlayerController_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATDSPlayerController(); \
	friend struct Z_Construct_UClass_ATDSPlayerController_Statics; \
public: \
	DECLARE_CLASS(ATDSPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TDS"), NO_API) \
	DECLARE_SERIALIZER(ATDSPlayerController)


#define TDS_Source_TDS_TDSPlayerController_h_12_INCLASS \
private: \
	static void StaticRegisterNativesATDSPlayerController(); \
	friend struct Z_Construct_UClass_ATDSPlayerController_Statics; \
public: \
	DECLARE_CLASS(ATDSPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TDS"), NO_API) \
	DECLARE_SERIALIZER(ATDSPlayerController)


#define TDS_Source_TDS_TDSPlayerController_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATDSPlayerController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATDSPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATDSPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATDSPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATDSPlayerController(ATDSPlayerController&&); \
	NO_API ATDSPlayerController(const ATDSPlayerController&); \
public:


#define TDS_Source_TDS_TDSPlayerController_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATDSPlayerController(ATDSPlayerController&&); \
	NO_API ATDSPlayerController(const ATDSPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATDSPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATDSPlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATDSPlayerController)


#define TDS_Source_TDS_TDSPlayerController_h_12_PRIVATE_PROPERTY_OFFSET
#define TDS_Source_TDS_TDSPlayerController_h_9_PROLOG
#define TDS_Source_TDS_TDSPlayerController_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TDS_Source_TDS_TDSPlayerController_h_12_PRIVATE_PROPERTY_OFFSET \
	TDS_Source_TDS_TDSPlayerController_h_12_SPARSE_DATA \
	TDS_Source_TDS_TDSPlayerController_h_12_RPC_WRAPPERS \
	TDS_Source_TDS_TDSPlayerController_h_12_INCLASS \
	TDS_Source_TDS_TDSPlayerController_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TDS_Source_TDS_TDSPlayerController_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TDS_Source_TDS_TDSPlayerController_h_12_PRIVATE_PROPERTY_OFFSET \
	TDS_Source_TDS_TDSPlayerController_h_12_SPARSE_DATA \
	TDS_Source_TDS_TDSPlayerController_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	TDS_Source_TDS_TDSPlayerController_h_12_INCLASS_NO_PURE_DECLS \
	TDS_Source_TDS_TDSPlayerController_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TDS_API UClass* StaticClass<class ATDSPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TDS_Source_TDS_TDSPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
