// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGRecipeShortcut.h"

void UFGRecipeShortcut::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(UFGRecipeShortcut, mRecipeToActivate);
}
void UFGRecipeShortcut::SetRecipe(TSubclassOf<  UFGRecipe > recipe){ }
void UFGRecipeShortcut::Execute_Implementation( AFGPlayerController* owner){ }
bool UFGRecipeShortcut::IsValidShortcut_Implementation( AFGPlayerController* owner) const{ return bool(); }
UTexture2D* UFGRecipeShortcut::GetDisplayImage_Implementation() const{ return nullptr; }
bool UFGRecipeShortcut::IsActive_Implementation( AFGPlayerController* owner) const{ return bool(); }
void UFGRecipeShortcut::OnRep_Recipe(){ }
