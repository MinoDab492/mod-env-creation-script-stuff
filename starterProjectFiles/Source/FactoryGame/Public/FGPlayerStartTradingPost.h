// Copyright Coffee Stain Studios. All Rights Reserved.

#pragma once

#include "FactoryGame.h"
#include "GameFramework/PlayerStart.h"
#include "FGPlayerStartTradingPost.generated.h"

/**
 * These player starts is prioritized over normal player starts when spawning on a map, as they are generated by the tradingpost
 */
UCLASS()
class FACTORYGAME_API AFGPlayerStartTradingPost : public APlayerStart
{
	GENERATED_BODY()
public:
	AFGPlayerStartTradingPost( const FObjectInitializer& ObjectInitializer );
public:
	static const FName STATIC_PLAYER_START_TAG;
};