// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "BaseAttributeSet.generated.h"

/**
 * 
 */
UCLASS()
class GAS_SHOOTER_API UBaseAttributeSet : public UAttributeSet
{
	GENERATED_BODY()
public:
	//创建一个构造函数
	UBaseAttributeSet();
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AttributeSet)
		FGameplayAttributeData Health;
	//FGameplayAttributeData拥有BaseValue和AttributeValue两个值
	virtual void PostGameplayEffectExecute(const struct FGameplayEffectModCallbackData& Data)override;
};
