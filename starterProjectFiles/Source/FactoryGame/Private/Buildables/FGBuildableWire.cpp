// This file has been automatically generated by the Unreal Header Implementation tool

#include "Buildables/FGBuildableWire.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Hologram/FGWireHologram.h"

AFGBuildableWire::AFGBuildableWire() : Super() {
	this->mMaxLength = 5000.0;
	this->mLengthPerCost = 100.0;
	this->mCircuitType = nullptr;
	this->mWireMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MainMesh"));
	this->mConnections[0] = nullptr;
	this->mConnections[1] = nullptr;
	this->mLocations[0].X = 0.0;;
	this->mLocations[0].Y = 0.0;;
	this->mLocations[0].Z = 0.0;;
	this->mLocations[1].X = 0.0;;
	this->mLocations[1].Y = 0.0;;
	this->mLocations[1].Z = 0.0;;
	this->mHologramClass = AFGWireHologram::StaticClass();
	this->mDismantleEffectClassName = FSoftClassPath("None");
	this->mBuildEffectClassName = FSoftClassPath("/Game/FactoryGame/Buildable/Factory/-Shared/BP_MaterialEffect_WireBuild.BP_MaterialEffect_WireBuild_C");
	this->NetDormancy = ENetDormancy::DORM_DormantAll;
	this->mWireMesh->SetupAttachment(RootComponent);
}
void AFGBuildableWire::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AFGBuildableWire, mConnections);
	DOREPLIFETIME(AFGBuildableWire, mLocations);
}
void AFGBuildableWire::Serialize(FArchive& ar){ Super::Serialize(ar); }
void AFGBuildableWire::BeginPlay(){ }
void AFGBuildableWire::Destroyed(){ }
int32 AFGBuildableWire::GetDismantleRefundReturnsMultiplier() const{ return int32(); }
UFGCircuitConnectionComponent* AFGBuildableWire::GetOppositeConnection(const  UFGCircuitConnectionComponent* connection) const{ return nullptr; }
void AFGBuildableWire::Disconnect(){ }
void AFGBuildableWire::DisplayDebug( UCanvas* canvas, const  FDebugDisplayInfo& debugDisplay, float& YL, float& YPos){ }
void AFGBuildableWire::UpdateWireMesh(){ }
bool AFGBuildableWire::Connect( UFGCircuitConnectionComponent* first,  UFGCircuitConnectionComponent* second){ return bool(); }
bool AFGBuildableWire::IsConnected() const{ return bool(); }
void AFGBuildableWire::OnRep_Locations(){ }
FName AFGBuildableWire::mWireMeshTag = FName();