// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Bird.generated.h"

// Forward declarations for components to prevent code bloat
class UCapsuleComponent;
class USkeletalMeshComponent;

UCLASS()
class ETERNALVALOR_API ABird : public APawn
{
	GENERATED_BODY()

public:
	ABird();

protected:
	virtual void BeginPlay() override;

public:	

	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:
	UPROPERTY(VisibleAnywhere)
		UCapsuleComponent* Capsule;

	UPROPERTY(VisibleAnywhere)
		USkeletalMeshComponent* BirdMesh;
};
