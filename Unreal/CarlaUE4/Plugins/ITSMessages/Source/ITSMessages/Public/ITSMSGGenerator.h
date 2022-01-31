// Copyright (c) 2017 Computer Vision Center (CVC) at the Universitat Autonoma de Barcelona (UAB). This work is licensed under the terms of the MIT license. For a copy, see <https://opensource.org/licenses/MIT>.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ITSMSGGenerator.generated.h"

struct CPMResult
{
	char* encodedMSG;
	long size;
};

struct Vehicle
{
	long stationID;
	FVector direction;
	float speed;
	FVector Position;
	bool isGPS;
	bool isVRU;
};

struct VRU
{
	FVector perceivedPos;
	float confidence;
	float speed;
};

UCLASS()
class ITSMESSAGES_API AITSMSGGenerator : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AITSMSGGenerator();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;	

	CPMResult Encode(const Vehicle& v, const TArray<VRU>& vrus);
};
