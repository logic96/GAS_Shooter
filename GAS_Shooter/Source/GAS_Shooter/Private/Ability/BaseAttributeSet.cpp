// Fill out your copyright notice in the Description page of Project Settings.


#include "Ability/BaseAttributeSet.h"
UBaseAttributeSet::UBaseAttributeSet() :
Health(200.f)
{
	//���캯�����ڳ�ʼ��Health
}

void UBaseAttributeSet::PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data)
{
}
