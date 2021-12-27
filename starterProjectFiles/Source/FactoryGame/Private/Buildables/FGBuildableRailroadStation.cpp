// This file has been automatically generated by the Unreal Header Implementation tool

#include "Buildables/FGBuildableRailroadStation.h"

AFGBuildableRailroadStation::AFGBuildableRailroadStation() : Super() {
	this->mShouldTeleportHere = false;
	this->mStationIdentifier = nullptr;
	this->mCurrentDockedWithRuleSet.DockingDefinition = ETrainDockingDefinition::TDD_LoadUnloadOnce;
	this->mCurrentDockedWithRuleSet.DockForDuration = 15.0;
	this->mCurrentDockedWithRuleSet.IsDurationAndRule = false;
	this->mDockingLocomotive = nullptr;
	this->mCurrentDockForDuration = 0.0;
	this->mActorRepresentationTexture = nullptr;
	this->mPlatformConnections.Add(mPlatformConnection0);
	this->mPlatformConnections.Add(mPlatformConnection1);
}
void AFGBuildableRailroadStation::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AFGBuildableRailroadStation, mStationIdentifier);
}
void AFGBuildableRailroadStation::BeginPlay(){ }
void AFGBuildableRailroadStation::Destroyed(){ }
void AFGBuildableRailroadStation::PostLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
bool AFGBuildableRailroadStation::CanDismantle_Implementation() const{ return bool(); }
void AFGBuildableRailroadStation::Factory_Tick(float dt){ }
bool AFGBuildableRailroadStation::CanProduce_Implementation() const{ return bool(); }
UFGTrainPlatformConnection* AFGBuildableRailroadStation::GetStationOutputConnection(){ return nullptr; }
bool AFGBuildableRailroadStation::CanDock( AFGLocomotive* locomotive){ return bool(); }
bool AFGBuildableRailroadStation::StartDocking( AFGLocomotive* locomotive, float offset){ return bool(); }
void AFGBuildableRailroadStation::NotifyPlatformDockingComplete( AFGBuildableTrainPlatform* completedPlatform){ }
void AFGBuildableRailroadStation::CancelDockingSequence(){ }
void AFGBuildableRailroadStation::SetupRailroadTrack(){ }
bool AFGBuildableRailroadStation::DockVehiclesToPlatforms( AFGLocomotive* locomotive){ return bool(); }
void AFGBuildableRailroadStation::FinishDockingSequence(){ }