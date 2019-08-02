// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemInterface.h"
#include "AbilitySystemComponent.h"
#include "Ability/BaseAttributeSet.h"
#include "GameFramework/Character.h"
#include "BaseCharacter.generated.h"

UCLASS()
class GAS_SHOOTER_API ABaseCharacter : public ACharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ABaseCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	
	//声明一个UAbilitySystemComponent组件,
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = BaseCharacter)
		UAbilitySystemComponent* AbilitySystemComp;
	virtual UAbilitySystemComponent* GetAbilitySystemComponent()const;
	//该函数用于获取具体的Ability
	UFUNCTION(BlueprintCallable, Category = BaseCharacter)
		void AquireAbility(TSubclassOf<UGameplayAbility>AbilityToAquire);

	//声明一个和UBaseAttributeSet组件，
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = BaseCharacter)
		class UBaseAttributeSet* AttributeSetComp;
};
