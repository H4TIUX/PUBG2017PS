#include "Helpers.h"

class ATslCharacter* CurrentPawn = static_cast <ATslCharacter*> (CurrentPawn);

FText MakeText(std::wstring InString) {
    FText ret = UKismetTextLibrary::Conv_StringToText(FString(InString.c_str()));

    return ret;
}

bool LineTraceFromCurrentCamera(struct FHitResult* OutHit,
    const TArray<class AActor*>& ActorsToIgnore,
    float Distance = 512.0, bool bTraceComplex = true) {
    SDK::UWorld* World = SDK::UWorld::GetWorld();
    APlayerCameraManager* CamMang = UGameplayStatics::GetPlayerCameraManager(World, 0);
    if (CamMang) {
        FVector CamLoc = CamMang->GetCameraLocation();
        FRotator CamRot = CamMang->GetCameraRotation();
        FVector ForwadVector = UKismetMathLibrary::GetForwardVector(CamRot);
        FVector EndPos = (ForwadVector * Distance) + CamLoc;

        //  return UKismetSystemLibrary::LineTraceSingle(World, CamLoc, EndPos, ETraceTypeQuery::TraceTypeQuery1, bTraceComplex, ActorsToIgnore, EDrawDebugTrace::None, OutHit, false, FLinearColor(), FLinearColor(), 1.0);
    }

    return false;
}

// Spawn Actors. Used to spawn the plane too.
class AActor* SpawnActorFromClass(
    class UObject* WorldContextObject, TSubclassOf < class AActor > ActorClass,
    const struct FTransform& SpawnTransform,
    ESpawnActorCollisionHandlingMethod CollisionHandlingOverride,
    class AActor* Owner) {
    auto Spawned = UGameplayStatics::BeginDeferredActorSpawnFromClass(
        WorldContextObject, ActorClass, SpawnTransform, CollisionHandlingOverride,
        Owner);

    Spawned = UGameplayStatics::FinishSpawningActor(Spawned, SpawnTransform);

    return Spawned;
}

class UClass* Get_PlayerPawn_Class() {
    return static_cast <UClass*> (UObject::FindObject(
        "BlueprintGeneratedClass PlayerPawn_v2.PlayerPawn_v2_C"));
}

class APawn* FindPossesablePawn() {
    /* Functions returning "static" instances */
    SDK::UEngine* Engine = SDK::UEngine::GetEngine();
    SDK::UWorld* World = SDK::UWorld::GetWorld();

    SDK::ULevel* Level = World->PersistentLevel;
    SDK::TArray < SDK::AActor* >& Actors = Level->Actors;

    for (SDK::AActor* Actor : Actors) {
        /* The 2nd and 3rd checks are equal, prefer using EClassCastFlags if
         * available for your class. */
        if (!Actor || !Actor->IsA(SDK::EClassCastFlags::Pawn) ||
            !Actor->IsA(SDK::AMutableCharacter::StaticClass()))
            continue;

        SDK::APawn* Pawn = static_cast <SDK::AMutableCharacter*> (Actor);
        // Use Pawn here

        if (Pawn) {
            return Pawn;
        }
    }

    return nullptr;
}

AStaticMeshActor* SpawnStaticMesh(UStaticMesh* Mesh, FTransform Location) {
    if (!Mesh) {
        CUSTOMLOG("FAILED TO SPAWN STATIC MESH, MESH IS EMPTY!");
        return nullptr;
    }

    CUSTOMLOG("SPAWN STATIC MESH, MESH IS " + Mesh->GetFullName() + "!");

    SDK::UWorld* World = SDK::UWorld::GetWorld();

    auto _Spawned = static_cast <AStaticMeshActor*> (SpawnActorFromClass(
        World, AStaticMeshActor::StaticClass(), Location,
        ESpawnActorCollisionHandlingMethod::AlwaysSpawn, nullptr));

    _Spawned->StaticMeshComponent->SetIsReplicated(true);
    _Spawned->StaticMeshComponent->bReplicates = true;

    auto _OLDMESH = _Spawned->StaticMeshComponent->StaticMesh;
    _Spawned->StaticMeshComponent->SetStaticMesh(Mesh);
    _Spawned->StaticMeshComponent->OnRep_StaticMesh(_OLDMESH);

    return _Spawned;
}

void InitUEConsole() {
    CUSTOMLOG("InitUEConsole CALLED");

    /* Functions returning "static" instances */
    SDK::UEngine* Engine = SDK::UEngine::GetEngine();
    SDK::UWorld* World = SDK::UWorld::GetWorld();
    /*
     * Changes the keyboard-key that's used to open the UE console
     *
     * This is a rare case of a DefaultObjects' member-variables being changed.
     * By default you do not want to use the DefaultObject, this is a rare
     * exception.
     */
    SDK::UInputSettings::GetDefaultObj()->ConsoleKeys[0].KeyName =
        SDK::UKismetStringLibrary::Conv_StringToName(L"F2");

    /* Creates a new UObject of class-type specified by Engine->ConsoleClass */
    SDK::UObject* NewObject = SDK::UGameplayStatics::SpawnObject(
        Engine->ConsoleClass, Engine->GameViewport);

    /* The Object we created is a subclass of UConsole, so this cast is **safe**.
     */
    Engine->GameViewport->ViewportConsole =
        static_cast <SDK::UConsole*> (NewObject);
}

// It does exactly what its name states
bool isMatchStarting()
{
    ATslGameState* GameState = static_cast<ATslGameState*>(UGameplayStatics::GetGameState(UWorld::GetWorld()));
    if (GameState)
    {
        if (GameState->RemainingTime <= 0)
        {
            return true; // The match is starting (RemainingTime <= 0) so it returns true.
        }
    }
    return false; // If no match is starting or GameState is null, return false.
}