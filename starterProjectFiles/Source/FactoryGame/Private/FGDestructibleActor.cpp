// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGDestructibleActor.h"
#include "Components/StaticMeshComponent.h"

AFGDestructibleActor::AFGDestructibleActor() : Super() {
	this->mStaticMeshProxy = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshProxy"));
	this->mHasBeenFractured = false;
	this->bReplicates = true;
	this->NetDormancy = ENetDormancy::DORM_Initial;
	this->RootComponent = mStaticMeshProxy;
}
void AFGDestructibleActor::BeginPlay(){ }
float AFGDestructibleActor::TakeDamage(float damage,  FDamageEvent const& damageEvent, AController* eventInstigator, AActor* damageCauser){ return float(); }
void AFGDestructibleActor::PreSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGDestructibleActor::PostSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGDestructibleActor::PreLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGDestructibleActor::PostLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGDestructibleActor::GatherDependencies_Implementation(TArray< UObject* >& out_dependentObjects){ }
bool AFGDestructibleActor::NeedTransform_Implementation(){ return bool(); }
bool AFGDestructibleActor::ShouldSave_Implementation() const{ return bool(); }
void AFGDestructibleActor::DisableCollision(){ }
void AFGDestructibleActor::MakeDestructible(){ }
void AFGDestructibleActor::OnDestructibleFractured(const FVector& hitPoint, const FVector& hitDirection){ }
void AFGDestructibleActor::Multicast_OnDestructibleFractured_Implementation(const FVector& hitPoint, const FVector& hitDirection){ }