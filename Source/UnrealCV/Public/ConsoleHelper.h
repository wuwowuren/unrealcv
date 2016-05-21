// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CommandDispatcher.h"
/**
 * 
 */
class FConsoleHelper
{
public:
	FConsoleHelper(FCommandDispatcher* CommandDispatcher, FConsoleOutputDevice* ConsoleOutputDevice);
	~FConsoleHelper();

private:
	FConsoleOutputDevice* ConsoleOutputDevice;
	FCommandDispatcher* CommandDispatcher;
	void VGet(const TArray<FString>& Args);
	void VSet(const TArray<FString>& Args);
	void VRun(const TArray<FString>& Args);
};
