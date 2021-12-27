// This file has been automatically generated by the Unreal Header Implementation tool

#include "Hologram/FGFloodlightHologram.h"

AFGFloodlightHologram::AFGFloodlightHologram() : Super() {
	this->mMountingType = EFloodlightHologramMountingType::FHMT_Ground;
	this->mFixtureAngle = 0;
	this->mLightFixtureComponent = nullptr;
	this->mUseGradualFoundationRotations = true;
}
void AFGFloodlightHologram::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AFGFloodlightHologram, mFixtureAngle);
}
void AFGFloodlightHologram::BeginPlay(){ }
bool AFGFloodlightHologram::TrySnapToActor(const FHitResult& hitResult){ return bool(); }
void AFGFloodlightHologram::SetHologramLocationAndRotation(const FHitResult& hitResult){ }
void AFGFloodlightHologram::ScrollRotate(int32 delta, int32 step){ }
bool AFGFloodlightHologram::IsValidHitResult(const FHitResult& hitResult) const{ return bool(); }
bool AFGFloodlightHologram::DoMultiStepPlacement(bool isInputFromARelease){ return bool(); }
void AFGFloodlightHologram::SerializeConstructMessage(FArchive& ar, FNetConstructionID id){ }
int32 AFGFloodlightHologram::GetRotationStep() const{ return int32(); }
void AFGFloodlightHologram::ConfigureActor( AFGBuildable* inBuildable) const{ }
void AFGFloodlightHologram::OnRep_FixtureAngle(){ }
