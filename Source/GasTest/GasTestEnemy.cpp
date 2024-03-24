// Copyright Kealyane


#include "GasTestEnemy.h"

#include "AbilitySystem/GasTestAbilitySystemComponent.h"
#include "AbilitySystem/GasTestAttributeSet.h"

// Sets default values
AGasTestEnemy::AGasTestEnemy()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	AbilitySystemComponent = CreateDefaultSubobject<UGasTestAbilitySystemComponent>("AbilitySystemComponent");
	AttributeSet = CreateDefaultSubobject<UGasTestAttributeSet>("AttributeSet");
}

// Called when the game starts or when spawned
void AGasTestEnemy::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGasTestEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AGasTestEnemy::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

UAbilitySystemComponent* AGasTestEnemy::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

