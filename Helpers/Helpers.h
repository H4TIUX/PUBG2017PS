#pragma once

#include <fstream>
#include <Windows.h>
#include <chrono>
#include <ctime>
#include <iostream>
#include <random>
#include <vector>
#include "MinHook.h"
#include "../SDK.hpp"
#include "../SDK/Engine_parameters.hpp"
#include "../SDK/TslGame_parameters.hpp"
#include "../Network/Network.h"
#include "../Logs/Log.h"

using namespace SDK;

FText MakeText(std::wstring InString);

bool LineTraceFromCurrentCamera(struct FHitResult* OutHit,
    const TArray<class AActor*>& ActorsToIgnore,
    float Distance, bool bTraceComplex);

class AActor* SpawnActorFromClass(
    class UObject* WorldContextObject, TSubclassOf < class AActor > ActorClass,
    const struct FTransform& SpawnTransform,
    ESpawnActorCollisionHandlingMethod CollisionHandlingOverride,
    class AActor* Owner);

class UClass* Get_PlayerPawn_Class();

class APawn* FindPossesablePawn();

AStaticMeshActor* SpawnStaticMesh(UStaticMesh* Mesh, FTransform Location);

void InitUEConsole();

bool isMatchStarting();