// This file has been automatically generated by the Unreal Header Implementation tool

#include "Buildables/FGBuildablePipelinePump.h"

void FQuantizedPumpIndicatorData::SetFlowPct(float pct){ }
float FQuantizedPumpIndicatorData::GetFlowPct() const{ return float(); }
void FQuantizedPumpIndicatorData::SetPressurePct(float pct){ }
float FQuantizedPumpIndicatorData::GetPressurePct() const{ return float(); }
AFGBuildablePipelinePump::AFGBuildablePipelinePump() : Super() {
	this->mMaxPressure = 22.0;
	this->mDesignPressure = 20.0;
	this->mDefaultFlowLimit = 10.0;
	this->mUserFlowLimit = -1.0;
	this->mMinimumFlowPercentForStandby = 0.05;
	this->mFactoryTickFunction.TickGroup = ETickingGroup::TG_PrePhysics;
	this->mFactoryTickFunction.EndTickGroup = ETickingGroup::TG_PrePhysics;
	this->mFactoryTickFunction.bTickEvenWhenPaused = false;
	this->mFactoryTickFunction.bCanEverTick = true;
	this->mFactoryTickFunction.bStartWithTickEnabled = true;
	this->mFactoryTickFunction.bAllowTickOnDedicatedServer = true;
	this->mFactoryTickFunction.TickInterval = 0.0;
}
void AFGBuildablePipelinePump::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AFGBuildablePipelinePump, mDefaultFlowLimit);
	DOREPLIFETIME(AFGBuildablePipelinePump, mUserFlowLimit);
	DOREPLIFETIME(AFGBuildablePipelinePump, mIndicatorData);
}
void AFGBuildablePipelinePump::BeginPlay(){ }
void AFGBuildablePipelinePump::Tick(float dt){ }
void AFGBuildablePipelinePump::Factory_Tick(float dt){ }
bool AFGBuildablePipelinePump::CanProduce_Implementation() const{ return bool(); }
void AFGBuildablePipelinePump::OnBuildEffectFinished(){ }
EProductionStatus AFGBuildablePipelinePump::GetProductionIndicatorStatus() const{ return EProductionStatus(); }
void AFGBuildablePipelinePump::OnFluidDescriptorSet(){ }
void AFGBuildablePipelinePump::StopIsLookedAtForDismantle_Implementation( AFGCharacterPlayer* byCharacter){ }
void AFGBuildablePipelinePump::SetMaxHeadLift(float design, float max){ }
float AFGBuildablePipelinePump::GetMaxHeadLift() const{ return float(); }
float AFGBuildablePipelinePump::GetDesignHeadLift() const{ return float(); }
void AFGBuildablePipelinePump::SetUserFlowLimit(float rate){ }
float AFGBuildablePipelinePump::GetFlowLimit() const{ return float(); }
float AFGBuildablePipelinePump::GetFlowLimitPct() const{ return float(); }
float AFGBuildablePipelinePump::GetIndicatorFlowPct() const{ return float(); }
float AFGBuildablePipelinePump::GetIndicatorFlow() const{ return float(); }
float AFGBuildablePipelinePump::GetIndicatorHeadLiftPct() const{ return float(); }
float AFGBuildablePipelinePump::GetIndicatorHeadLift() const{ return float(); }
void AFGBuildablePipelinePump::UpdateDefaultFlowLimit(){ }
void AFGBuildablePipelinePump::UpdateFlowLimitOnFluidBox(){ }