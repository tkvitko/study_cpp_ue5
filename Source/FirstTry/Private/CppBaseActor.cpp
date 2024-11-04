// Fill out your copyright notice in the Description page of Project Settings.


#include "CppBaseActor.h"
#include <Kismet/GameplayStatics.h>


// Sets default values
ACppBaseActor::ACppBaseActor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");
	SetRootComponent(Mesh);
}

// Called when the game starts or when spawned
void ACppBaseActor::BeginPlay()
{
	Super::BeginPlay();
	InitialLocation = GetActorLocation();

}

// Called every frame
void ACppBaseActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// homework 3
void ACppBaseActor::ShowActorInformation()
{
	const FString InstanceName = GetActorNameOrLabel();
	UE_LOG(LogTemp, Display, TEXT("PlayerName: %s"), *PlayerName);
	UE_LOG(LogTemp, Display, TEXT("Instance name: %s"), *InstanceName);
	UE_LOG(LogTemp, Display, TEXT("EnemyNum: %d"), EnemyNum);
	UE_LOG(LogTemp, Display, TEXT("IsAlive: %i"), IsAlive);
	UE_LOG(LogTemp, Display, TEXT("test"));
}

// homework 4
void ACppBaseActor::SinMovement() 
{	
	InitialLocation.Z += Amplitude * FMath::Sin(Frequency * UGameplayStatics::GetTimeSeconds(this));
	UE_LOG(LogTemp, Display, TEXT("NewPosition: %f"), InitialLocation.Z);
	SetActorLocation(InitialLocation);
}