// This file has been automatically generated by the Unreal Header Implementation tool

#include "Creature/Enemy/FGGameplayTask_Attack.h"

void UFGGameplayTask_Attack::GetLifetimeReplicatedProps(TArray<  FLifetimeProperty > & OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(UFGGameplayTask_Attack, mAttackClass);
}
void UFGGameplayTask_Attack::InitSimulatedTask(UGameplayTasksComponent& InGameplayTasksComponent){ }
UFGGameplayTask_Attack::UFGGameplayTask_Attack(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
	this->mAttackClass = nullptr;
}
void UFGGameplayTask_Attack::Activate(){ }
void UFGGameplayTask_Attack::OnDestroy(bool bInOwnerFinished){ }
