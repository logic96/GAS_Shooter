// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Item/BaseItem.h"
#include "BaseSkillItem.generated.h"

/** Native base class for skills, should be blueprinted */
UCLASS()
class GAS_SHOOTER_API UBaseSkillItem : public UBaseItem
{
	GENERATED_BODY()
public:
	/** Constructor */
	UBaseSkillItem()
	{
		ItemType = UBaseAssetManager::SkillItemType;
	}
};
