// Fill out your copyright notice in the Description page of Project Settings.
#include "BullCowCartridge.h"

void UBullCowCartridge::BeginPlay() // When the game starts
{
    Super::BeginPlay();
    PrintLine(TEXT("My text 2"));
}

void UBullCowCartridge::OnInput(const FString& Input) // When the player hits enter
{

}