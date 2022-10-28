// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TDS/FunctionLibrary/MovementTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovementTypes() {}
// Cross Module References
	TDS_API UEnum* Z_Construct_UEnum_TDS_EMovementState();
	UPackage* Z_Construct_UPackage__Script_TDS();
	TDS_API UScriptStruct* Z_Construct_UScriptStruct_FCharecterSpeed();
	TDS_API UClass* Z_Construct_UClass_UTypes_NoRegister();
	TDS_API UClass* Z_Construct_UClass_UTypes();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
// End Cross Module References
	static UEnum* EMovementState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TDS_EMovementState, Z_Construct_UPackage__Script_TDS(), TEXT("EMovementState"));
		}
		return Singleton;
	}
	template<> TDS_API UEnum* StaticEnum<EMovementState>()
	{
		return EMovementState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMovementState(EMovementState_StaticEnum, TEXT("/Script/TDS"), TEXT("EMovementState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TDS_EMovementState_Hash() { return 1166536923U; }
	UEnum* Z_Construct_UEnum_TDS_EMovementState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TDS();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMovementState"), 0, Get_Z_Construct_UEnum_TDS_EMovementState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMovementState::Aim_State", (int64)EMovementState::Aim_State },
				{ "EMovementState::Walk_State", (int64)EMovementState::Walk_State },
				{ "EMovementState::Run_State", (int64)EMovementState::Run_State },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Aim_State.DisplayName", "Aim State" },
				{ "Aim_State.Name", "EMovementState::Aim_State" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "FunctionLibrary/MovementTypes.h" },
				{ "Run_State.DisplayName", "Run State" },
				{ "Run_State.Name", "EMovementState::Run_State" },
				{ "Walk_State.DisplayName", "Walk State" },
				{ "Walk_State.Name", "EMovementState::Walk_State" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TDS,
				nullptr,
				"EMovementState",
				"EMovementState",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FCharecterSpeed::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TDS_API uint32 Get_Z_Construct_UScriptStruct_FCharecterSpeed_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCharecterSpeed, Z_Construct_UPackage__Script_TDS(), TEXT("CharecterSpeed"), sizeof(FCharecterSpeed), Get_Z_Construct_UScriptStruct_FCharecterSpeed_Hash());
	}
	return Singleton;
}
template<> TDS_API UScriptStruct* StaticStruct<FCharecterSpeed>()
{
	return FCharecterSpeed::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCharecterSpeed(FCharecterSpeed::StaticStruct, TEXT("/Script/TDS"), TEXT("CharecterSpeed"), false, nullptr, nullptr);
static struct FScriptStruct_TDS_StaticRegisterNativesFCharecterSpeed
{
	FScriptStruct_TDS_StaticRegisterNativesFCharecterSpeed()
	{
		UScriptStruct::DeferCppStructOps<FCharecterSpeed>(FName(TEXT("CharecterSpeed")));
	}
} ScriptStruct_TDS_StaticRegisterNativesFCharecterSpeed;
	struct Z_Construct_UScriptStruct_FCharecterSpeed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AimSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WalkSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WalkSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RunSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RunSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharecterSpeed_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "FunctionLibrary/MovementTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCharecterSpeed_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCharecterSpeed>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharecterSpeed_Statics::NewProp_AimSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "FunctionLibrary/MovementTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCharecterSpeed_Statics::NewProp_AimSpeed = { "AimSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharecterSpeed, AimSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharecterSpeed_Statics::NewProp_AimSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharecterSpeed_Statics::NewProp_AimSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharecterSpeed_Statics::NewProp_WalkSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "FunctionLibrary/MovementTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCharecterSpeed_Statics::NewProp_WalkSpeed = { "WalkSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharecterSpeed, WalkSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharecterSpeed_Statics::NewProp_WalkSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharecterSpeed_Statics::NewProp_WalkSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharecterSpeed_Statics::NewProp_RunSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "FunctionLibrary/MovementTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCharecterSpeed_Statics::NewProp_RunSpeed = { "RunSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharecterSpeed, RunSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharecterSpeed_Statics::NewProp_RunSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharecterSpeed_Statics::NewProp_RunSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCharecterSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharecterSpeed_Statics::NewProp_AimSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharecterSpeed_Statics::NewProp_WalkSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharecterSpeed_Statics::NewProp_RunSpeed,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCharecterSpeed_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TDS,
		nullptr,
		&NewStructOps,
		"CharecterSpeed",
		sizeof(FCharecterSpeed),
		alignof(FCharecterSpeed),
		Z_Construct_UScriptStruct_FCharecterSpeed_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharecterSpeed_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCharecterSpeed_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharecterSpeed_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCharecterSpeed()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCharecterSpeed_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TDS();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CharecterSpeed"), sizeof(FCharecterSpeed), Get_Z_Construct_UScriptStruct_FCharecterSpeed_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCharecterSpeed_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCharecterSpeed_Hash() { return 2275190067U; }
	void UTypes::StaticRegisterNativesUTypes()
	{
	}
	UClass* Z_Construct_UClass_UTypes_NoRegister()
	{
		return UTypes::StaticClass();
	}
	struct Z_Construct_UClass_UTypes_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTypes_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_TDS,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTypes_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FunctionLibrary/MovementTypes.h" },
		{ "ModuleRelativePath", "FunctionLibrary/MovementTypes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTypes_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTypes>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTypes_Statics::ClassParams = {
		&UTypes::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTypes_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTypes_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTypes()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTypes_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTypes, 3255574322);
	template<> TDS_API UClass* StaticClass<UTypes>()
	{
		return UTypes::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTypes(Z_Construct_UClass_UTypes, &UTypes::StaticClass, TEXT("/Script/TDS"), TEXT("UTypes"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTypes);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
