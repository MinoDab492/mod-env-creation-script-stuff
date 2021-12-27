// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGSubsystemClasses.h"
#include "FGAdminInterface.h"
#include "FGFoliageRemovalSubsystem.h"
#include "FGSignSubsystem.h"

UFGSubsystemClasses::UFGSubsystemClasses() : Super() {
	this->mStorySubsystemClass = nullptr;
	this->mTimeSubsystemClass = nullptr;
	this->mRailroadSubsystemClass = nullptr;
	this->mCircuitSubsystemClass = nullptr;
	this->mSchematicManagerClass = nullptr;
	this->mGamePhaseManagerClass = nullptr;
	this->mResearchManagerClass = nullptr;
	this->mTutorialIntroManagerClass = nullptr;
	this->mRadioactivitySubsystemClass = nullptr;
	this->mChatManagerClass = nullptr;
	this->mCentralStorageSubsystemClass = nullptr;
	this->mMapManagerClass = nullptr;
	this->mBuildableSubsystemClass = FSoftClassPath("/Game/FactoryGame/-Shared/Blueprint/BP_BuildableSubsystem.BP_BuildableSubsystem_C").ResolveClass();
	this->mFoliageRemovalSubsystemClass = AFGFoliageRemovalSubsystem::StaticClass();
	this->mProximitySubsystemClass = nullptr;
	this->mUnlockSubsystem = nullptr;
	this->mResourceSinkSubsystemClass = nullptr;
	this->mAdminInterfaceClass = AFGAdminInterface::StaticClass();
	this->mItemRegrowSubsystemClass = nullptr;
	this->mVehicleSubsystemClass = nullptr;
	this->mEventSubsystemClass = nullptr;
	this->mWorldGridSubsystemClass = nullptr;
	this->mDroneSubsystemClass = nullptr;
	this->mConveyorItemSubsystemClass = nullptr;
	this->mStatisticsSubsystemClass = nullptr;
	this->mSignSubsystemClass = AFGSignSubsystem::StaticClass();
	this->mPhotoModeManagerClass = nullptr;
}
UFGSubsystemClasses* UFGSubsystemClasses::Get(){ return nullptr; }
