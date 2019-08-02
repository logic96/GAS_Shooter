// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseAssetManager.h"
#include "Item/BaseItem.h"
#include "AbilitySystemGlobals.h"

const FPrimaryAssetType	UBaseAssetManager::PotionItemType = TEXT("Potion");
const FPrimaryAssetType	UBaseAssetManager::SkillItemType = TEXT("Skill");
const FPrimaryAssetType	UBaseAssetManager::TokenItemType = TEXT("Token");
const FPrimaryAssetType	UBaseAssetManager::WeaponItemType = TEXT("Weapon");
const FPrimaryAssetType	UBaseAssetManager::AmmoItemType = TEXT("Ammo");

UBaseAssetManager& UBaseAssetManager::Get()
{
	UBaseAssetManager* This = Cast<UBaseAssetManager>(GEngine->AssetManager);

	if (This)
	{
		return *This;
	}
	else
	{
		//UE_LOG(LogActionRPG, Fatal, TEXT("Invalid AssetManager in DefaultEngine.ini, must be RPGAssetManager!"));
		return *NewObject<UBaseAssetManager>(); // never calls this
	}
}

void UBaseAssetManager::StartInitialLoading() {
	Super::StartInitialLoading();

	UAbilitySystemGlobals::Get().InitGlobalData();
}

UBaseItem* UBaseAssetManager::ForceLoadItem(const FPrimaryAssetId& PrimaryAssetId, bool bLogWarning)
{
	FSoftObjectPath ItemPath = GetPrimaryAssetPath(PrimaryAssetId);

	// This does a synchronous load and may hitch
	UBaseItem* LoadedItem = Cast<UBaseItem>(ItemPath.TryLoad());

	if (bLogWarning && LoadedItem == nullptr)
	{
		//UE_LOG(LogActionRPG, Warning, TEXT("Failed to load item for identifier %s!"), *PrimaryAssetId.ToString());
	}

	return LoadedItem;
}
