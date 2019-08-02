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
	//����һ�����캯��
	UBaseAttributeSet();
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AttributeSet)
		FGameplayAttributeData Health;
	//FGameplayAttributeDataӵ��BaseValue��AttributeValue����ֵ
	virtual void PostGameplayEffectExecute(const struct FGameplayEffectModCallbackData& Data)override;
};
