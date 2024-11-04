// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CppBaseActor.generated.h"

UCLASS()
class FIRSTTRY_API ACppBaseActor : public AActor
{
	GENERATED_BODY()

public:

	// Sets default values for this actor's properties
	ACppBaseActor();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* Mesh;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// homework 3
	UPROPERTY(VisibleAnywhere)
	FString PlayerName = "Player";

	UPROPERTY(EditInstanceOnly)
	int EnemyNum = 20;

	UPROPERTY(EditInstanceOnly)
	bool IsAlive = true;

	UFUNCTION(BlueprintCallable)
	void ShowActorInformation();

	// homework 4
	UPROPERTY(EditInstanceOnly)
	float Amplitude = 70.0;

	UPROPERTY(EditInstanceOnly)
	float Frequency = 4.0;

	UPROPERTY(VisibleAnywhere)
	FVector InitialLocation = FVector(0.0f, 0.0f, 0.0f);

	UFUNCTION(BlueprintCallable)
	void SinMovement();

private:
	

};
