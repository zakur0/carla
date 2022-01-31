// Copyright (c) 2017 Computer Vision Center (CVC) at the Universitat Autonoma de Barcelona (UAB). This work is licensed under the terms of the MIT license. For a copy, see <https://opensource.org/licenses/MIT>.
#include "ITSMSGGenerator.h"
THIRD_PARTY_INCLUDES_START
#include "CPM.h"
THIRD_PARTY_INCLUDES_END


// Sets default values
AITSMSGGenerator::AITSMSGGenerator()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	//if (ITSActorClass != nullptr)
	//{
	//	this->attachedVehicle = Cast<AITSActor>(this->GetComponentByClass(ITSActorClass));
	//	if (this->attachedVehicle == nullptr)
	//	{
	//		UE_LOG(LogTemp, Warning, TEXT("No attachedVehicle found"));
	//		this->mIsValid = false;
	//	}
	//	else
	//	{
	//		this->mIsValid = true;
	//	}
	//}
	//else
	//{
	//	UE_LOG(LogTemp, Warning, TEXT("No ITS class defined"));
	//	this->mIsValid = false;
	//}
}

// Called when the game starts or when spawned
void AITSMSGGenerator::BeginPlay()
{
	Super::BeginPlay();

	
}

// Called every frame
void AITSMSGGenerator::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

CPMResult AITSMSGGenerator::Encode(const Vehicle& v, const TArray<VRU>& vrus)
{
	CPMResult res;
	return res;
}