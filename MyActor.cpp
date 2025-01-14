// Fill out your copyright notice in the Description page of Project Settings.


// MyActor.cpp
#include "MyActor.h"
#include "Math/UnrealMathUtility.h" // 랜덤 값 생성에 필요

// 생성자
AMyActor::AMyActor()
{
    PrimaryActorTick.bCanEverTick = false; // 틱 비활성화
    CurrentPosition = FVector2D(0.0f, 0.0f); // 시작 좌표 (0, 0)
}

// BeginPlay 함수
void AMyActor::BeginPlay()
{
    Super::BeginPlay();

    UE_LOG(LogTemp, Warning, TEXT("AMyMovingActor 스폰 완료. 이동 시작."));

    // 이동 로직 실행
    Move();
}

// 랜덤 스텝 값 생성 함수
int AMyActor::Step() const
{
    return FMath::RandRange(0, 1); // 0 또는 1 반환
}

// 이동 함수
void AMyActor::Move()
{
    UE_LOG(LogTemp, Warning, TEXT("시작 위치: (%f, %f)"), CurrentPosition.X, CurrentPosition.Y);

    // 10회 이동
    for (int i = 0; i < 10; ++i)
    {
        // 랜덤 스텝 계산
        int StepX = Step();
        int StepY = Step();

        // 새로운 좌표 계산
        CurrentPosition.X += StepX;
        CurrentPosition.Y += StepY;

        // 현재 위치 출력
        UE_LOG(LogTemp, Warning, TEXT("스텝 %d: 이동 후 위치: (%f, %f)"), i + 1, CurrentPosition.X, CurrentPosition.Y);
    }

    UE_LOG(LogTemp, Warning, TEXT("모든 이동이 완료되었습니다."));
}
