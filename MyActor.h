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
    // ������
    AMyActor();

protected:
    // BeginPlay �Լ�
    virtual void BeginPlay() override;

private:
    // ���� ��ġ
    FVector2D CurrentPosition;

    // ���� ��� �Լ�
    int Step() const;

    // �̵� �Լ�
    void Move();
};
