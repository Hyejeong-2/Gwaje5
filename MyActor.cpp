// Fill out your copyright notice in the Description page of Project Settings.


// MyActor.cpp
#include "MyActor.h"
#include "Math/UnrealMathUtility.h" // ���� �� ������ �ʿ�

// ������
AMyActor::AMyActor()
{
    PrimaryActorTick.bCanEverTick = false; // ƽ ��Ȱ��ȭ
    CurrentPosition = FVector2D(0.0f, 0.0f); // ���� ��ǥ (0, 0)
}

// BeginPlay �Լ�
void AMyActor::BeginPlay()
{
    Super::BeginPlay();

    UE_LOG(LogTemp, Warning, TEXT("AMyMovingActor ���� �Ϸ�. �̵� ����."));

    // �̵� ���� ����
    Move();
}

// ���� ���� �� ���� �Լ�
int AMyActor::Step() const
{
    return FMath::RandRange(0, 1); // 0 �Ǵ� 1 ��ȯ
}

// �̵� �Լ�
void AMyActor::Move()
{
    UE_LOG(LogTemp, Warning, TEXT("���� ��ġ: (%f, %f)"), CurrentPosition.X, CurrentPosition.Y);

    // 10ȸ �̵�
    for (int i = 0; i < 10; ++i)
    {
        // ���� ���� ���
        int StepX = Step();
        int StepY = Step();

        // ���ο� ��ǥ ���
        CurrentPosition.X += StepX;
        CurrentPosition.Y += StepY;

        // ���� ��ġ ���
        UE_LOG(LogTemp, Warning, TEXT("���� %d: �̵� �� ��ġ: (%f, %f)"), i + 1, CurrentPosition.X, CurrentPosition.Y);
    }

    UE_LOG(LogTemp, Warning, TEXT("��� �̵��� �Ϸ�Ǿ����ϴ�."));
}
