// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "MovementTypes.generated.h"

UENUM(BlueprintType)
enum class EMovementState : uint8
{
	Aim_State UMETA(DisplayName = "Aim State"),
	Walk_State UMETA(DisplayName = "Walk State"),
	Run_State UMETA(DisplayName = "Run State"),
};

USTRUCT(BlueprintType)
struct FCharecterSpeed
{
	GENERATED_BODY()

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Movement")
	float AimSpeed = 300.f;
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Movement")
	float WalkSpeed = 200.f;
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Movement")
	float RunSpeed = 600.f;
};

UCLASS()
class TDS_API UTypes : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
};