// Copyright (c) 2017 Computer Vision Center (CVC) at the Universitat Autonoma de Barcelona (UAB). This work is licensed under the terms of the MIT license. For a copy, see <https://opensource.org/licenses/MIT>.


#include "itsmsg.h"
THIRD_PARTY_INCLUDES_START
#include "CPM.h"
THIRD_PARTY_INCLUDES_END

// Sets default values
Aitsmsg::Aitsmsg()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void Aitsmsg::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void Aitsmsg::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
