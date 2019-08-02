// Fill out your copyright notice in the Description page of Project Settings.


#include "Item/BaseItem.h"


bool UBaseItem::IsConsumable() const
{
	if (MaxCount <= 0)
	{
		return true;
	}
	return false;
}

FString UBaseItem::GetIdentifierString() const
{
	return GetPrimaryAssetId().ToString();
}

FPrimaryAssetId UBaseItem::GetPrimaryAssetId() const
{
// This is a DataAsset and not a blueprint so we can just use the raw FName
// For blueprints you need to handle stripping the _C suffix
	return FPrimaryAssetId(ItemType, GetFName());
}
