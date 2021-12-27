// This file has been automatically generated by the Unreal Header Implementation tool

#include "Buildables/FGBuildableCircuitSwitch.h"

AFGBuildableCircuitSwitch::AFGBuildableCircuitSwitch() : Super() {
	this->mIsSwitchOn = false;
	this->mHasBuildingTag = false;
	this->mBuildingTag = TEXT("");
}
void AFGBuildableCircuitSwitch::BeginPlay(){ }
void AFGBuildableCircuitSwitch::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AFGBuildableCircuitSwitch, mIsSwitchOn);
	DOREPLIFETIME(AFGBuildableCircuitSwitch, mHasBuildingTag);
	DOREPLIFETIME(AFGBuildableCircuitSwitch, mBuildingTag);
}
void AFGBuildableCircuitSwitch::SetHasBuildingTag_Implementation(bool hasBuildingTag){ }
void AFGBuildableCircuitSwitch::SetBuildingTag_Implementation(const FString& buildingTag){ }
void AFGBuildableCircuitSwitch::SetSwitchOn(bool isSwitchOn){ }
void AFGBuildableCircuitSwitch::OnRep_IsSwitchOn(){ }
void AFGBuildableCircuitSwitch::OnRep_HasBuildingTag(){ }
void AFGBuildableCircuitSwitch::OnRep_BuildingTag(){ }
void AFGBuildableCircuitSwitch::OnRep_IsBridgeConnected(){ }
void AFGBuildableCircuitSwitch::BroadcastProductionStatus(){ }
