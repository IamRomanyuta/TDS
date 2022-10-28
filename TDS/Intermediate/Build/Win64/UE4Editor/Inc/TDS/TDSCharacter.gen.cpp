// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TDS/Charecter/TDSCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTDSCharacter() {}
// Cross Module References
	TDS_API UClass* Z_Construct_UClass_ATDSCharacter_NoRegister();
	TDS_API UClass* Z_Construct_UClass_ATDSCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_TDS();
	TDS_API UEnum* Z_Construct_UEnum_TDS_EMovementState();
	TDS_API UScriptStruct* Z_Construct_UScriptStruct_FCharecterSpeed();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDecalComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ATDSCharacter::execChangeMovementState)
	{
		P_GET_ENUM(EMovementState,Z_Param_NewMovementState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeMovementState(EMovementState(Z_Param_NewMovementState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDSCharacter::execCharecterUpdate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CharecterUpdate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDSCharacter::execMovementTick)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MovementTick(Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDSCharacter::execInputAxisY)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InputAxisY(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDSCharacter::execInputAxisX)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InputAxisX(Z_Param_value);
		P_NATIVE_END;
	}
	void ATDSCharacter::StaticRegisterNativesATDSCharacter()
	{
		UClass* Class = ATDSCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangeMovementState", &ATDSCharacter::execChangeMovementState },
			{ "CharecterUpdate", &ATDSCharacter::execCharecterUpdate },
			{ "InputAxisX", &ATDSCharacter::execInputAxisX },
			{ "InputAxisY", &ATDSCharacter::execInputAxisY },
			{ "MovementTick", &ATDSCharacter::execMovementTick },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATDSCharacter_ChangeMovementState_Statics
	{
		struct TDSCharacter_eventChangeMovementState_Parms
		{
			EMovementState NewMovementState;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewMovementState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewMovementState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATDSCharacter_ChangeMovementState_Statics::NewProp_NewMovementState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ATDSCharacter_ChangeMovementState_Statics::NewProp_NewMovementState = { "NewMovementState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TDSCharacter_eventChangeMovementState_Parms, NewMovementState), Z_Construct_UEnum_TDS_EMovementState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDSCharacter_ChangeMovementState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDSCharacter_ChangeMovementState_Statics::NewProp_NewMovementState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDSCharacter_ChangeMovementState_Statics::NewProp_NewMovementState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDSCharacter_ChangeMovementState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Charecter/TDSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDSCharacter_ChangeMovementState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDSCharacter, nullptr, "ChangeMovementState", nullptr, nullptr, sizeof(TDSCharacter_eventChangeMovementState_Parms), Z_Construct_UFunction_ATDSCharacter_ChangeMovementState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDSCharacter_ChangeMovementState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDSCharacter_ChangeMovementState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDSCharacter_ChangeMovementState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDSCharacter_ChangeMovementState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATDSCharacter_ChangeMovementState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDSCharacter_CharecterUpdate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDSCharacter_CharecterUpdate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Charecter/TDSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDSCharacter_CharecterUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDSCharacter, nullptr, "CharecterUpdate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDSCharacter_CharecterUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDSCharacter_CharecterUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDSCharacter_CharecterUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATDSCharacter_CharecterUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDSCharacter_InputAxisX_Statics
	{
		struct TDSCharacter_eventInputAxisX_Parms
		{
			float value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATDSCharacter_InputAxisX_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TDSCharacter_eventInputAxisX_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDSCharacter_InputAxisX_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDSCharacter_InputAxisX_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDSCharacter_InputAxisX_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Charecter/TDSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDSCharacter_InputAxisX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDSCharacter, nullptr, "InputAxisX", nullptr, nullptr, sizeof(TDSCharacter_eventInputAxisX_Parms), Z_Construct_UFunction_ATDSCharacter_InputAxisX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDSCharacter_InputAxisX_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDSCharacter_InputAxisX_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDSCharacter_InputAxisX_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDSCharacter_InputAxisX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATDSCharacter_InputAxisX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDSCharacter_InputAxisY_Statics
	{
		struct TDSCharacter_eventInputAxisY_Parms
		{
			float value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATDSCharacter_InputAxisY_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TDSCharacter_eventInputAxisY_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDSCharacter_InputAxisY_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDSCharacter_InputAxisY_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDSCharacter_InputAxisY_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Charecter/TDSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDSCharacter_InputAxisY_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDSCharacter, nullptr, "InputAxisY", nullptr, nullptr, sizeof(TDSCharacter_eventInputAxisY_Parms), Z_Construct_UFunction_ATDSCharacter_InputAxisY_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDSCharacter_InputAxisY_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDSCharacter_InputAxisY_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDSCharacter_InputAxisY_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDSCharacter_InputAxisY()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATDSCharacter_InputAxisY_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDSCharacter_MovementTick_Statics
	{
		struct TDSCharacter_eventMovementTick_Parms
		{
			float DeltaTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATDSCharacter_MovementTick_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TDSCharacter_eventMovementTick_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDSCharacter_MovementTick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDSCharacter_MovementTick_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDSCharacter_MovementTick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Charecter/TDSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDSCharacter_MovementTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDSCharacter, nullptr, "MovementTick", nullptr, nullptr, sizeof(TDSCharacter_eventMovementTick_Parms), Z_Construct_UFunction_ATDSCharacter_MovementTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDSCharacter_MovementTick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDSCharacter_MovementTick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDSCharacter_MovementTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDSCharacter_MovementTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATDSCharacter_MovementTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATDSCharacter_NoRegister()
	{
		return ATDSCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ATDSCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MovementState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MovementState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MovementInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TopDownCameraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TopDownCameraComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CursorToWorld_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CursorToWorld;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATDSCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_TDS,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATDSCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATDSCharacter_ChangeMovementState, "ChangeMovementState" }, // 1439706656
		{ &Z_Construct_UFunction_ATDSCharacter_CharecterUpdate, "CharecterUpdate" }, // 3834108171
		{ &Z_Construct_UFunction_ATDSCharacter_InputAxisX, "InputAxisX" }, // 1835018595
		{ &Z_Construct_UFunction_ATDSCharacter_InputAxisY, "InputAxisY" }, // 170565508
		{ &Z_Construct_UFunction_ATDSCharacter_MovementTick, "MovementTick" }, // 2999421482
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDSCharacter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Charecter/TDSCharacter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Charecter/TDSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ATDSCharacter_Statics::NewProp_MovementState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDSCharacter_Statics::NewProp_MovementState_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Charecter/TDSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ATDSCharacter_Statics::NewProp_MovementState = { "MovementState", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATDSCharacter, MovementState), Z_Construct_UEnum_TDS_EMovementState, METADATA_PARAMS(Z_Construct_UClass_ATDSCharacter_Statics::NewProp_MovementState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDSCharacter_Statics::NewProp_MovementState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDSCharacter_Statics::NewProp_MovementInfo_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Charecter/TDSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATDSCharacter_Statics::NewProp_MovementInfo = { "MovementInfo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATDSCharacter, MovementInfo), Z_Construct_UScriptStruct_FCharecterSpeed, METADATA_PARAMS(Z_Construct_UClass_ATDSCharacter_Statics::NewProp_MovementInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDSCharacter_Statics::NewProp_MovementInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDSCharacter_Statics::NewProp_TopDownCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Top down camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Charecter/TDSCharacter.h" },
		{ "ToolTip", "Top down camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATDSCharacter_Statics::NewProp_TopDownCameraComponent = { "TopDownCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATDSCharacter, TopDownCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATDSCharacter_Statics::NewProp_TopDownCameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDSCharacter_Statics::NewProp_TopDownCameraComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDSCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Camera boom positioning the camera above the character */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Charecter/TDSCharacter.h" },
		{ "ToolTip", "Camera boom positioning the camera above the character" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATDSCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATDSCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATDSCharacter_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDSCharacter_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDSCharacter_Statics::NewProp_CursorToWorld_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** A decal that projects to the cursor location. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Charecter/TDSCharacter.h" },
		{ "ToolTip", "A decal that projects to the cursor location." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATDSCharacter_Statics::NewProp_CursorToWorld = { "CursorToWorld", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATDSCharacter, CursorToWorld), Z_Construct_UClass_UDecalComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATDSCharacter_Statics::NewProp_CursorToWorld_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDSCharacter_Statics::NewProp_CursorToWorld_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATDSCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDSCharacter_Statics::NewProp_MovementState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDSCharacter_Statics::NewProp_MovementState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDSCharacter_Statics::NewProp_MovementInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDSCharacter_Statics::NewProp_TopDownCameraComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDSCharacter_Statics::NewProp_CameraBoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDSCharacter_Statics::NewProp_CursorToWorld,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATDSCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATDSCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATDSCharacter_Statics::ClassParams = {
		&ATDSCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATDSCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATDSCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATDSCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATDSCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATDSCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATDSCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATDSCharacter, 2351258413);
	template<> TDS_API UClass* StaticClass<ATDSCharacter>()
	{
		return ATDSCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATDSCharacter(Z_Construct_UClass_ATDSCharacter, &ATDSCharacter::StaticClass, TEXT("/Script/TDS"), TEXT("ATDSCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATDSCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
