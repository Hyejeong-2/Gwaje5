// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor.generated.h"

UCLASS()
class Gwaje5_API AMyActor : public AActor
{
    GENERATED_BODY()

public:
    // 생성자
    AMyActor();

protected:
    // BeginPlay 함수
    virtual void BeginPlay() override;

private:
    // 현재 위치
    FVector2D CurrentPosition;

    // 스텝 계산 함수
    int Step() const;

    // 이동 함수
    void Move();
};
