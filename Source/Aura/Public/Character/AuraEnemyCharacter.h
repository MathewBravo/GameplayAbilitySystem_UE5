// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Character/AuraCharacterBase.h"
#include "Interaction/EnemyInterface.h"
#include "AuraEnemyCharacter.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API AAuraEnemyCharacter : public AAuraCharacterBase, public IEnemyInterface
{
	GENERATED_BODY()
public:
	AAuraEnemyCharacter();
	virtual void HighlightActor() override;
	virtual void UnHighlightActor() override;

	UPROPERTY(BlueprintReadOnly)
	bool bHighlighted = true;
};
