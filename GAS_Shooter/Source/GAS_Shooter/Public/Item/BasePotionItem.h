// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Item/BaseItem.h"
#include "BasePotionItem.generated.h"

/**
 * 
 */
UCLASS()
class GAS_SHOOTER_API UBasePotionItem : public UBaseItem
{
	GENERATED_BODY()
public:
	/** Constructor */
	UBasePotionItem()
	{
		ItemType = UBaseAssetManager::PotionItemType;
	}
};
