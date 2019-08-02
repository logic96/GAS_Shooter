// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Item/BaseItem.h"
#include "BaseTokenItem.generated.h"

/**
 * 
 */
UCLASS()
class GAS_SHOOTER_API UBaseTokenItem : public UBaseItem
{
	GENERATED_BODY()
public:
	/** Constructor */
	UBaseTokenItem()
{
	ItemType = UBaseAssetManager::TokenItemType;
	MaxCount = 0; // Infinite
}
};
