// PUBG2017PS Server Source code
// Made with much much love by H4TIUX, BigBoiTaj2005(TajyPoo) and Fischsalat :)
// WV is a cuck

// Credits:
// Fischsalat is a really chill and pacient guy, he literally developed a whole ass SDK dumper which we're using here aswell. Props to him <3
// Taj is our beloved <333 Thanks to him we were able to get in game. Thank you Taj, we love you
// Froi is a weird but funny guy (horse) 
// TwiceHit is the funniest and chillest Romanian guy you'll ever meet
// WackyHacky is a monkey (But we love him, respect) 
// Jerry saved our asses many times (Unfuckery dev)

#include <Windows.h>

#include <chrono>

#include <ctime>

#include <fstream>

#include <iostream>

#include <random>

#include <vector>

#include "MinHook.h"

#include "SDK.hpp"

#include "SDK/Engine_parameters.hpp"

#include "SDK/TslGame_parameters.hpp"

#pragma warning(disable: 4996)

#if _WIN64
#pragma comment(lib, "libMinHook.x64.lib")
#else
#pragma comment(lib, "libMinHook.x86.lib")
#endif

using namespace SDK;

// Basic.cpp was added to the VS project
// Engine_functions.cpp was added to the VS project

#define ACTOR_SPAWN_FILE_NAME "ActorsToSpawn.txt"

class SDK::ATransportAircraftVehicle* GLOB_AircraftVehicle = nullptr;
class UMatchPreparer* GLOB_OLD_MatchPreparer = nullptr;
class ATslCharacter* CurrentPawn = static_cast <ATslCharacter*> (CurrentPawn);

bool LogFileCreated = false;
std::string CurrentNetworkStatus = "UNDEFINED NETWORK STATUS";
std::string LOGFILENAME;

//Logs system
void CUSTOMLOG(std::string LOG) {
    std::string _FINLOG;

    if (!LogFileCreated) {
        std::string RandomID = std::to_string(std::rand());
        LOGFILENAME =
            "PUBG_INGAME_DLL_" + CurrentNetworkStatus + "_LOG_" + RandomID + ".txt";
        std::cout << "!LogFileCreated :: MADE LOG FILE WITH NAME: " << LOGFILENAME <<
            std::endl;
    }

    std::ofstream MyFile;
    MyFile.open(LOGFILENAME, std::ios_base::app);
    if (!LogFileCreated) {
        // Create and open a text file
        if (MyFile.is_open()) {
            LogFileCreated = true;
        }
    }
    _FINLOG = LOG;

    if (MyFile.is_open()) {
        MyFile << _FINLOG << std::endl;
    }

    std::cout << _FINLOG << std::endl;
}

bool LineTraceFromCurrentCamera(struct FHitResult* OutHit,
    const TArray < class AActor* >& ActorsToIgnore,
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

class UClass* GetActorToSpawnFromReadFile() {
    class UClass* ReturnValue;

    CUSTOMLOG("GetActorToSpawnFromReadFile()");

    // Read from the text file
    std::ifstream MyReadFile(ACTOR_SPAWN_FILE_NAME);

    if (!MyReadFile) {
        CUSTOMLOG("MyReadFile IS NOT VALID");
        // Close the file
        MyReadFile.close();

        return nullptr;
    }

    std::string ActorPath;

    if (MyReadFile.is_open()) {
        char mychar;

        while (MyReadFile) {
            mychar = MyReadFile.get();
            ActorPath += mychar;
        }
    }

    CUSTOMLOG("GOT ACTOR PATH: " + ActorPath);

    ReturnValue = static_cast <UClass*> (UObject::FindObject(ActorPath));

    if (!ReturnValue) {
        CUSTOMLOG(
            "FAILED ReturnValue = (class UClass*)UObject::FindClass(ActorPath);; "
            "RETURNED FALSE");
        return nullptr;
    }

    MyReadFile.close();
    return ReturnValue;
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

// Debug function. Used to spawn actors from a TXT file. Can be used to have a little fun ;)
class AActor* SpawnActorFromTxTToLookAt() {
    SDK::UWorld* World = SDK::UWorld::GetWorld();
    SDK::APlayerController* MyController =
        UGameplayStatics::GetPlayerController(World, 0);

    if (!MyController->HasAuthority()) {
        CUSTOMLOG("SpawnACtorFromTxtToLookAt:: NO AUTHORITY!!! CANNOT SPAWN!!!");
        return nullptr;
    }

    /* Functions returning "static" instances */
    SDK::UEngine* Engine = SDK::UEngine::GetEngine();

    UClass* _Class = GetActorToSpawnFromReadFile();

    if (!_Class) {
        CUSTOMLOG(
            "SpawnActorFromTxTToLookAt:: GetActorToSpawnFromReadFile !_Class");
        return nullptr;
    }

    struct FHitResult HitResult;
    TArray < class AActor* > IgnoreList;
    bool _bHit = LineTraceFromCurrentCamera(&HitResult, IgnoreList, 256.0);
    APawn* CurrentPawn = MyController->K2_GetPawn();

    if (!MyController) {
        CUSTOMLOG("SpawnActorFromTxTToLookAt:: !MyController");
        return nullptr;
    }

    if (!CurrentPawn) {
        CUSTOMLOG("SpawnActorFromTxTToLookAt:: !CurrentPawn");
        return nullptr;
    }

    FTransform Transform = CurrentPawn->GetTransform();

    Transform.Translation = HitResult.TraceEnd;

    auto _Spawned = SpawnActorFromClass(
        World, _Class, Transform,
        ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn,
        MyController);

    if (!_Spawned) {
        CUSTOMLOG(
            "SpawnActorFromTxTToLookAt:: FAILED _Spawned = "
            "SpawnActorFromClass(World, _Class, Transform, "
            "ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn, "
            "MyController);");
        return nullptr;
    }

    return _Spawned;
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

//Debug function, not actually used on the live server.
void DebugAllDroppedItems() {
    /* Functions returning "static" instances */
    SDK::UEngine* Engine = SDK::UEngine::GetEngine();
    SDK::UWorld* World = SDK::UWorld::GetWorld();

    SDK::ULevel* Level = World->PersistentLevel;
    SDK::TArray < SDK::AActor* >& Actors = Level->Actors;

    std::vector < class ADroppedItem* > DroppedItems;

    for (SDK::AActor* Actor : Actors) {
        if (!Actor) continue;

        /* The 2nd and 3rd checks are equal, prefer using EClassCastFlags if
         * available for your class. */
        if (!Actor->IsA(ADroppedItem::StaticClass())) continue;

        class ADroppedItem* droppeditem = static_cast <ADroppedItem*> (Actor);

        if (!droppeditem) {
            continue;
        }

        if (!droppeditem->Item) {
            continue;
        }

        CUSTOMLOG("DebugAllDroppedItems:: DROPPED ITEM ACTORL: NAME[" +
            droppeditem->GetFullName() + "] " + " ITEM[" +
            droppeditem->Item->GetFullName() + "]");
    }
}

//Debug function, not actually used on the live server.
void OverrideAllDroppedItems(class UItem* ItemOverride) {
    if (!ItemOverride) {
        CUSTOMLOG("OVERRIDEALLDROPPED ITEMS ItemOverride IS NULLPTR");
    }

    /* Functions returning "static" instances */
    SDK::UEngine* Engine = SDK::UEngine::GetEngine();
    SDK::UWorld* World = SDK::UWorld::GetWorld();

    SDK::ULevel* Level = World->PersistentLevel;
    SDK::TArray < SDK::AActor* >& Actors = Level->Actors;

    std::vector < class ADroppedItem* > DroppedItems;

    for (SDK::AActor* Actor : Actors) {
        if (!Actor) continue;

        /* The 2nd and 3rd checks are equal, prefer using EClassCastFlags if
         * available for your class. */
        if (!Actor->IsA(ADroppedItem::StaticClass())) continue;

        class ADroppedItem* droppeditem = static_cast <ADroppedItem*> (Actor);

        if (!droppeditem) {
            continue;
        }

        droppeditem->Item = ItemOverride;
    }

    CUSTOMLOG(
        "OVERRIDEALLDROPPED ITEMS ItemOverride SET ALLL DROPPED ITEMS SUCCESS");
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

FText MakeText(std::wstring InString) {
    FText ret = UKismetTextLibrary::Conv_StringToText(FString(InString.c_str()));

    return ret;
}

// Debug function, not actually used on the live server. It teleports all the active players to a specific location. 
void ServerTeleportAllPlayersToLoc() {
    CUSTOMLOG("ServerTeleportAllPlayersToLoc CALLED");

    SDK::UWorld* World = SDK::UWorld::GetWorld();

    SDK::APlayerController* MyController =
        UGameplayStatics::GetPlayerController(World, 0);

    if (!MyController->HasAuthority()) {
        CUSTOMLOG("ServerTeleportAllPlayersToLoc  WE ARE NOT AUTHORITY, WE CAN'T");
        return;
    }

    CUSTOMLOG("ServerTeleportAllPlayersToLoc WE ARE AUTHORITY, TELEPORTING...");

    /* Functions returning "static" instances */
    SDK::UEngine* Engine = SDK::UEngine::GetEngine();

    auto MyGamemode = UGameplayStatics::GetGameMode(World);
    bool IsTsLGamemode = MyGamemode->IsA(ATslGameMode::StaticClass());

    class ATslGameMode* _MyGamemode = static_cast <ATslGameMode*> (MyGamemode);

    FText TeleportedMessage = UKismetTextLibrary::Conv_StringToText(
        FString(L"YOU, MY FRIEND, HAVE BEEN TELEPORTED HERE!"));

    TArray < class APawn* > AllPawn;

    _MyGamemode->GetAllPawns(&AllPawn);

    for (class APawn* CurrentPawn : AllPawn) {
        ATslCharacter* TsL_CurrentPawn = static_cast <ATslCharacter*> (CurrentPawn);

        FTransform NewTransform;

        NewTransform.Translation = FVector(418062.06, 322761.38, 942.57); // Coordinates to where the players will be teleported.
        FQuat Rotation;

        Rotation.X = 0.0;
        Rotation.Y = 0.0;
        Rotation.Z = 0.0;
        Rotation.W = 1.0;

        NewTransform.Rotation = Rotation;
        NewTransform.Scale3D = FVector(1.0, 1.0, 1.0);

        struct FHitResult HitResultTeleport;

        CurrentPawn->K2_SetActorTransform(NewTransform, false, &HitResultTeleport,
            true);
        TsL_CurrentPawn->SendSystemMessage(ESystemMessageType::Important,
            TeleportedMessage);

        CurrentPawn->FlushNetDormancy();
    }
}

// Debug function. It does exactly what the name says
void TeleportToSpawnIsland() {
    CUSTOMLOG("ServerTeleportToSpawnIsland CALLED");

    SDK::UWorld* World = SDK::UWorld::GetWorld();

    SDK::APlayerController* MyController =
        UGameplayStatics::GetPlayerController(World, 0);

    if (!MyController->HasAuthority()) {
        CUSTOMLOG("ServerTeleportToSpawnIsland  WE ARE NOT AUTHORITY, WE CAN'T");
        return;
    }

    CUSTOMLOG("ServerTeleportToSpawnIsland WE ARE AUTHORITY, TELEPORTING...");

    /* Functions returning "static" instances */
    SDK::UEngine* Engine = SDK::UEngine::GetEngine();

    auto MyGamemode = UGameplayStatics::GetGameMode(World);
    bool IsTsLGamemode = MyGamemode->IsA(ATslGameMode::StaticClass());

    class ATslGameMode* _MyGamemode = static_cast <ATslGameMode*> (MyGamemode);

    FText TeleportedMessage = UKismetTextLibrary::Conv_StringToText(
        FString(L"YOU, MY FRIEND, HAVE BEEN TELEPORTED HERE!"));

    TArray < class APawn* > AllPawn;

    _MyGamemode->GetAllPawns(&AllPawn);

    for (class APawn* CurrentPawn : AllPawn) {
        ATslCharacter* TsL_CurrentPawn = static_cast <ATslCharacter*> (CurrentPawn);

        FTransform NewTransform;

        NewTransform.Translation = FVector(796360.19, 19990.86, 528.53); // Coordinates of the Spawn Island. 
        FQuat Rotation;

        Rotation.X = 0.0;
        Rotation.Y = 0.0;
        Rotation.Z = 0.0;
        Rotation.W = 1.0;

        NewTransform.Rotation = Rotation;
        NewTransform.Scale3D = FVector(1.0, 1.0, 1.0);

        struct FHitResult HitResultTeleport;

        CurrentPawn->K2_SetActorTransform(NewTransform, false, &HitResultTeleport,
            true);
        TsL_CurrentPawn->SendSystemMessage(ESystemMessageType::Important,
            TeleportedMessage);
    }
}

// He who lives as an empty husk is death itself in disguise. 
//                                      -TwiceHit, 12/13/2024

bool bDidServerStuff = false;
void DoServerStuff() { // Testing function, doesn't do anything
    CUSTOMLOG("DoServerStuff CALLED ");

    if (bDidServerStuff) {
        CUSTOMLOG(
            "DoServerStuff ALREADY CALLED, NOT ATTEMPTING, TO NOT CAUSE A "
            "CRASH... ");
        return;
    }

    /* Functions returning "static" instances */
    SDK::UEngine* Engine = SDK::UEngine::GetEngine();
    SDK::UWorld* World = SDK::UWorld::GetWorld();

    SDK::APlayerController* MyController =
        UGameplayStatics::GetPlayerController(World, 0);

    if (MyController->HasAuthority()) {
        bDidServerStuff = true;

        auto MyGamemode = UGameplayStatics::GetGameMode(World);
        bool IsTsLGamemode = MyGamemode->IsA(ATslGameMode::StaticClass());

        ATslGameMode* _MyGamemode = static_cast <ATslGameMode*> (MyGamemode);

        _MyGamemode->MatchStartType = EMatchStartType::Airborne;
        _MyGamemode->PlayerRespawn = true;
        _MyGamemode->bEnablePerfBotLogin = true;
        _MyGamemode->bEnablePerfBotInPIE = true;
        _MyGamemode->bIsPerfBotSpawnToRandomPosition = true;
        _MyGamemode->bCanRestartPerfBot = true;
        _MyGamemode->IsBattleRoyale = true;
        _MyGamemode->bStartPlayerAtMatchStart = true;
        _MyGamemode->bShouldSpawnAtStartSpot = true;

        FText NotifyMessage = UKismetTextLibrary::Conv_StringToText(
            FString(L"HELLO, THIS IS A LISTEN SERVER"));

        _MyGamemode->SendSystemMessageToAll(ESystemMessageType::Important,
            NotifyMessage, 5.0);

        ServerTeleportAllPlayersToLoc();
    }
}

ADroppedItem* AttemptSpawnEquipableAtPlayer(UItem* _cur,
    int CurrentIterationCoeff) {
    class UItem* _FINITEM;
    class UObject* TransientPackage = UObject::FindObjectFast("Transient");

    if (!TransientPackage) {
        CUSTOMLOG(
            "AttemptSpawnEquipableAtPlayer():: TransientPackage COULD NOT BE "
            "FOUND");
        return nullptr;
    }

    if (!_cur) {
        CUSTOMLOG("AttemptSpawnEquipableAtPlayer():: _cur EMPTY");
        return nullptr;
    }

    UClass* _CurClass = nullptr;

    if (!_cur->Class) {
        CUSTOMLOG("AttemptSpawnEquipableAtPlayer():: _cur->Class EMPTY");
        return nullptr;

    }
    else {
        _CurClass = _cur->Class;
        CUSTOMLOG("AttemptSpawnEquipableAtPlayer():: _cur->Class IS " +
            _CurClass->GetFullName());
    }

    SDK::UWorld* World = SDK::UWorld::GetWorld();

    if (!World) {
        CUSTOMLOG("AttemptSpawnEquipableAtPlayer():: INVALID WORLD1?!?!??!?");
        return nullptr;
    }

    CUSTOMLOG(
        "AttemptSpawnEquipableAtPlayer():: AttemptSpawnEquipableAtPlayer CALLED");

    SDK::APlayerController* MyController =
        UGameplayStatics::GetPlayerController(World, 0);

    if (!MyController) {
        CUSTOMLOG("AttemptSpawnEquipableAtPlayer():: INVALID MyController?!?!??!?");
        return nullptr;
    }

    if (!MyController->HasAuthority()) {
        CUSTOMLOG("AttemptSpawnEquipableAtPlayer  WE ARE NOT AUTHORITY, WE CAN'T");
        return nullptr;
    }

    if (!MyController) {
        CUSTOMLOG("AttemptSpawnEquipableAtPlayer():: !MyController");
        return nullptr;
    }

    APawn* CurrentPawn = MyController->K2_GetPawn();

    if (!CurrentPawn) {
        CUSTOMLOG("AttemptSpawnEquipableAtPlayer():: !CurrentPawn");
        return nullptr;
    }

    FTransform form = CurrentPawn->GetTransform();
    FRotator Rot = CurrentPawn->K2_GetActorRotation();

    FVector ForwadVector = UKismetMathLibrary::GetForwardVector(Rot);
    FVector NewLocation =
        form.Translation + (ForwadVector * 50.0 * CurrentIterationCoeff);

    form.Translation = NewLocation;

    if (!ADroppedItem::StaticClass()) {
        CUSTOMLOG(
            "AttemptSpawnEquipableAtPlayer():: DROPPED ITEM STATIC CLASS IS "
            "INVALID!?!??!?!");
        return nullptr;
    }

    _FINITEM = static_cast <UItem*> (
        UGameplayStatics::SpawnObject(_CurClass, TransientPackage));

    if (!_FINITEM) {
        CUSTOMLOG("AttemptSpawnEquipableAtPlayer():: _FINITEM INVALID!?!??!?!");
        return nullptr;
    }

    AActor* SpawnedPickup = SpawnActorFromClass(
        World, ADroppedItem::StaticClass(), form,
        ESpawnActorCollisionHandlingMethod::AlwaysSpawn, CurrentPawn);

    if (!SpawnedPickup) {
        CUSTOMLOG("AttemptSpawnEquipableAtPlayer():: SpawnedPickup NOT VALID");
        return nullptr;
    }

    ADroppedItem* _SpawnedPickup = static_cast <ADroppedItem*> (SpawnedPickup);

    if (!SpawnedPickup->IsA(ADroppedItem::StaticClass())) {
        CUSTOMLOG(
            "AttemptSpawnEquipableAtPlayer():: "
            "!SpawnedPickup->IsA(ADroppedItem::StaticClass())");
        return nullptr;
    }

    if (_FINITEM->IsA(UWeaponItem::StaticClass())) {
        auto WEP_FINITEM = static_cast <UWeaponItem*> (_FINITEM);
        if (!WEP_FINITEM) {
            CUSTOMLOG(
                "AttemptSpawnEquipableAtPlayer()::_FINITEM IS A WEAPON, BUT STATIC "
                "CAST FAILED!????");
        }
        else {
            WEP_FINITEM->AmmoCount = WEP_FINITEM->AmmoPerClip;
        }
    }

    _SpawnedPickup->Item = _FINITEM;
    _SpawnedPickup->Item_RepNotify();
    CUSTOMLOG(
        "AttemptSpawnEquipableAtPlayer():: _SpawnedPickup->Item_RepNotify();");

    return _SpawnedPickup;
}

// A bunch of debug functions, can also be used to have fun with :)
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

ADroppedItem* SpawnItemAtLocation(TSubclassOf < UItem > _cur,
    FTransform Location) {
    class UItem* _FINITEM;
    class UObject* TransientPackage = UObject::FindObjectFast("Transient");

    if (!TransientPackage) {
        CUSTOMLOG(
            "AttemptSpawnEquipableAtLocation():: TransientPackage COULD NOT BE "
            "FOUND");
        return nullptr;
    }

    if (!_cur) {
        CUSTOMLOG("AttemptSpawnEquipableAtLocation():: _cur EMPTY");
        return nullptr;
    }

    UClass* _CurClass = _cur;

    if (!_cur->Class) {
        CUSTOMLOG("AttemptSpawnEquipableAtLocation():: _cur->Class EMPTY");
        return nullptr;

    }
    else

    {
        _CurClass = _cur;
        CUSTOMLOG("AttemptSpawnEquipableAtLocation():: _cur->Class IS " +
            _CurClass->GetFullName());
    }

    SDK::UWorld* World = SDK::UWorld::GetWorld();

    if (!World) {
        CUSTOMLOG("AttemptSpawnEquipableAtLocation():: INVALID WORLD1?!?!??!?");
        return nullptr;
    }

    CUSTOMLOG(
        "AttemptSpawnEquipableAtLocation():: AttemptSpawnEquipableAtPlayer "
        "CALLED");

    SDK::APlayerController* MyController =
        UGameplayStatics::GetPlayerController(World, 0);

    if (!MyController) {
        CUSTOMLOG(
            "AttemptSpawnEquipableAtLocation():: INVALID MyController?!?!??!?");
        return nullptr;
    }

    if (!MyController->HasAuthority()) {
        CUSTOMLOG(
            "AttemptSpawnEquipableAtLocation  WE ARE NOT AUTHORITY, WE CAN'T");
        return nullptr;
    }

    if (!MyController) {
        CUSTOMLOG("AttemptSpawnEquipableAtLocation():: !MyController");
        return nullptr;
    }

    APawn* CurrentPawn = MyController->K2_GetPawn();

    if (!CurrentPawn) {
        CUSTOMLOG("AttemptSpawnEquipableAtLocation():: !CurrentPawn");
        return nullptr;
    }

    if (!ADroppedItem::StaticClass()) {
        CUSTOMLOG(
            "AttemptSpawnEquipableAtLocation():: DROPPED ITEM STATIC CLASS IS "
            "INVALID!?!??!?!");
        return nullptr;
    }

    _FINITEM = static_cast <UItem*> (
        UGameplayStatics::SpawnObject(_CurClass, TransientPackage));

    if (!_FINITEM) {
        CUSTOMLOG("AttemptSpawnEquipableAtLocation():: _FINITEM INVALID!?!??!?!");
        return nullptr;
    }

    AActor* SpawnedPickup = SpawnActorFromClass(
        World, ADroppedItem::StaticClass(), Location,
        ESpawnActorCollisionHandlingMethod::AlwaysSpawn, CurrentPawn);

    if (!SpawnedPickup) {
        CUSTOMLOG("AttemptSpawnEquipableAtLocation():: SpawnedPickup NOT VALID");
        return nullptr;
    }

    ADroppedItem* _SpawnedPickup = static_cast <ADroppedItem*> (SpawnedPickup);

    if (!SpawnedPickup->IsA(ADroppedItem::StaticClass())) {
        CUSTOMLOG(
            "AttemptSpawnEquipableAtLocation():: "
            "!SpawnedPickup->IsA(ADroppedItem::StaticClass())");
        return nullptr;
    }

    if (_FINITEM->IsA(UWeaponItem::StaticClass())) {
        auto WEP_FINITEM = static_cast <UWeaponItem*> (_FINITEM);
        if (!WEP_FINITEM) {
            CUSTOMLOG(
                "AttemptSpawnEquipableAtLocation()::_FINITEM IS A WEAPON, BUT STATIC "
                "CAST FAILED!????");
        }
        else {
            WEP_FINITEM->AmmoCount = WEP_FINITEM->AmmoPerClip;
        }
    }

    _SpawnedPickup->Item = _FINITEM;
    _SpawnedPickup->Item_RepNotify();
    CUSTOMLOG(
        "AttemptSpawnEquipableAtLocation():: _SpawnedPickup->Item_RepNotify();");

    return _SpawnedPickup;
}

void SpawnEquipmentsAtPlayer(std::vector < UItem* > Items) {
    int CurrentIterationCoeff = 1;
    for (auto _Ccur : Items) {
        CurrentIterationCoeff++;
        AttemptSpawnEquipableAtPlayer(_Ccur, CurrentIterationCoeff);
    }
}

AItemPackage* AttemptSpawnCarePackageAtPlayer(TArray < UItem* > InItems) {
    CUSTOMLOG(
        "AttemptSpawnCarePackageAtPlayer():: AttemptSpawnCarePackageAtPlayer "
        "CALLED WITH InItems.Num = " +
        std::to_string(InItems.Num()));

    if (InItems.Num() == 0) {
        CUSTOMLOG(
            "AttemptSpawnCarePackageAtPlayer():: FAILED "
            "AttemptSpawnCarePackageAtPlayer CALLED WITH InItems.Num = 0");
        return nullptr;
    }

    SDK::UWorld* World = SDK::UWorld::GetWorld();
    SDK::APlayerController* MyController =
        UGameplayStatics::GetPlayerController(World, 0);
    APawn* CurrentPawn = MyController->K2_GetPawn();

    if (!CurrentPawn) {
        CUSTOMLOG("AttemptSpawnCarePackageAtPlayer():: !CurrentPawn");
        return nullptr;
    }

    FTransform form = CurrentPawn->GetTransform();
    FRotator Rot = CurrentPawn->K2_GetActorRotation();

    FVector ForwadVector = UKismetMathLibrary::GetForwardVector(Rot);
    FVector NewLocation =
        form.Translation + (ForwadVector * 50.0) + FVector(0.0, 0.0, 100.0);
    form.Translation = NewLocation;

    UClass* CarePackacge_BP = static_cast <UClass*> (UObject::FindObject(
        "BlueprintGeneratedClass Carapackage_RedBox.Carapackage_RedBox_C"));

    if (!CarePackacge_BP) {
        CUSTOMLOG("AttemptSpawnCarePackageAtPlayer():: !CarePackacge_BP");
        return nullptr;
    }

    AActor* SpawnedCarePackacge = SpawnActorFromClass(
        World, CarePackacge_BP, form,
        ESpawnActorCollisionHandlingMethod::AlwaysSpawn, CurrentPawn);

    if (!SpawnedCarePackacge) {
        CUSTOMLOG("AttemptSpawnCarePackageAtPlayer():: !SpawnedCarePackacge");
        return nullptr;
    }

    AItemPackage* _ItemPackage = static_cast <AItemPackage*> (SpawnedCarePackacge);

    _ItemPackage->Items = InItems;
    CUSTOMLOG(
        "AttemptSpawnCarePackageAtPlayer():: _ItemPackage->Items = InItems;;");

    _ItemPackage->Items_RepNotify();
    CUSTOMLOG(
        "AttemptSpawnCarePackageAtPlayer():: _ItemPackage->Items_RepNotify();");

    return _ItemPackage;
}

void AttemptGenerateItems() {
    CUSTOMLOG("AttemptGenerateItems() CALLED");

    SDK::UWorld* World = SDK::UWorld::GetWorld();

    if (!World) {
        CUSTOMLOG(
            "AttemptGenerateItems() CALLED WITHOUT VALID World, NOT CONTINUING");
        return;
    }

    std::vector < UItem* > EquipmentsValid;

    SDK::APlayerController* MyController =
        UGameplayStatics::GetPlayerController(World, 0);

    if (!MyController->HasAuthority()) {
        CUSTOMLOG(
            "AttemptGenerateItems() CALLED WITHOUT AUTHORITY, NOT CONTINUING");
        return;
    }

    int SuccessfulIteration = 0;

    for (int i = 0; i < SDK::UObject::GObjects->Num(); ++i) {
        UObject* Object = SDK::UObject::GObjects->GetByIndex(i);

        if (!Object) {
            continue;
        }

        if (!UEquipableItem::StaticClass()) {
            CUSTOMLOG("AttemptGenerateItems(), !UEquipableItem::StaticClass()");
            continue;
        }

        if (Object->IsA(UEquipableItem::StaticClass())) {
            if (!Object->Class) {
                CUSTOMLOG("AttemptGenerateItems(), FOUND ITEM !Object->Class");
                continue;
            }
            if (!Object->Class->IsA(UBlueprintGeneratedClass::StaticClass())) {
                CUSTOMLOG("AttemptGenerateItems(), FOUND ITEM IS NOT A BLUEPRINT ITEM");
                continue;
            }

            UEquipableItem* _Object = static_cast <UEquipableItem*> (Object);

            if (!_Object) {
                CUSTOMLOG("AttemptGenerateItems(), !_Object NOT VALID  ");
                return;
            }

            SuccessfulIteration++;

            FString ItemName =
                UKismetTextLibrary::Conv_TextToString(_Object->ItemName);
            FString ItemDetName =
                UKismetTextLibrary::Conv_TextToString(_Object->ItemDetailedName);

            std::string _ItemName = ItemName.ToString();
            std::string _ItemDetName = ItemDetName.ToString();

            CUSTOMLOG("UEquipableItem's Name is '" + _ItemName + "'" +
                " Detailed Name is '" + _ItemDetName + "'");

            CUSTOMLOG("AttemptGenerateItems(), _Object is " + _Object->GetFullName());

            EquipmentsValid.push_back(_Object);
        }
    }

    SpawnEquipmentsAtPlayer(EquipmentsValid);
}

void DumpCurrentCharacterInfo() {
    CUSTOMLOG("DumpCurrentCharacterInfo():: CALLED");
    /* Functions returning "static" instances */
    SDK::UEngine* Engine = SDK::UEngine::GetEngine();
    SDK::UWorld* World = SDK::UWorld::GetWorld();

    /* Getting the PlayerController, World, OwningGameInstance, ... should all be
     * checked not to be nullptr! */
    SDK::APlayerController* MyController =
        UGameplayStatics::GetPlayerController(World, 0);

    if (!MyController) {
        CUSTOMLOG("DumpCurrentCharacterInfo():: !MyController");
        return;
    }

    class ATslCharacter* _Player =
        static_cast <ATslCharacter*> (MyController->K2_GetPawn());

    if (!_Player) {
        CUSTOMLOG("DumpCurrentCharacterInfo():: !_Player");
        return;
    }

    CUSTOMLOG(
        "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
        "DumpCurrentCharacterInfo():: "
        "START~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");

    std::string s_PlayerGender = "FEMALE";
    std::string s_CustomizableObjectInstance = "UNKNOWN VALUE";
    std::string s_CustomizableSkeletalComponent = "UNKNOWN VALUE";
    std::string s_BuffComponent = "UNKNOWN VALUE";

    auto _GEN = _Player->Gender;
    auto COI = _Player->CustomizableObjectInstance;
    auto CSK = _Player->CustomizableSkeletalComponent;
    auto BC = _Player->BuffComponent;

    if (_GEN == EGender::Male) {
        s_PlayerGender = "Male";
    }

    if (COI) {
        s_CustomizableObjectInstance = COI->GetFullName();
    }

    if (CSK) {
        s_CustomizableSkeletalComponent = CSK->GetFullName();
    }

    if (BC) {
        s_BuffComponent = BC->GetFullName();
    }

    void* OFFSET_Player = _Player + 0x00000351;

    if (OFFSET_Player) {
        CUSTOMLOG("CHAR OFFSET_Player IS VALID: " +
            std::to_string((int64)OFFSET_Player));
    }

    CUSTOMLOG("CHAR GENDER: " + s_PlayerGender);
    CUSTOMLOG("CHAR CustomizableObjectInstance: " + s_CustomizableObjectInstance);
    CUSTOMLOG("CHAR CustomizableSkeletalComponent: " +
        s_CustomizableSkeletalComponent);
    CUSTOMLOG("CHAR BuffComponent: " + s_BuffComponent);

    CUSTOMLOG(
        "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
        "DumpCurrentCharacterInfo():: "
        "END~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

void DisableCullingForAllActors(UWorld* World) // Function half made by ChatGPT half made by me that saved my ass completely
{
    if (!World) {
        CUSTOMLOG("DisableCullingForAllActors: World is null.");
        return;
    }

    CUSTOMLOG("DisableCullingForAllActors: World is valid, proceeding.");

    SDK::ULevel* Level = World->PersistentLevel;
    SDK::TArray < SDK::AActor* >& AllActors = Level->Actors;

    // Ignore persistent level, focus on streaming levels
    for (ULevelStreaming* StreamingLevel : World->StreamingLevels) {
        if (StreamingLevel) {
            std::string LevelName = StreamingLevel->GetName();

            CUSTOMLOG("We are iterating the level: " + LevelName);

            // Skip persistent level and ignored levels
            if (LevelName.contains("327")) {
                CUSTOMLOG("Skipping level: " + LevelName);
                continue;
            }

            if (LevelName.contains("328")) {
                CUSTOMLOG("Skipping level: " + LevelName);
                continue;
            }

            if (LevelName.contains("329")) {
                CUSTOMLOG("Skipping level: " + LevelName);
                continue;
            }

            if (LevelName.contains("32")) {
                CUSTOMLOG("Skipping level: " + LevelName);
                continue;
            }

            // Force load and visibility for other levels
            StreamingLevel->bShouldBeLoaded = true;
            StreamingLevel->bShouldBeVisible = true;
            StreamingLevel->bDisableDistanceStreaming = true;
            StreamingLevel->bShouldBlockOnLoad = true;

            CUSTOMLOG("Forcing load for level: " + LevelName);
        }
    }
}

// It does exactly what its name states
bool isMatchStarting() {
    ATslGameState* GameState = static_cast <ATslGameState*> (
        UGameplayStatics::GetGameState(UWorld::GetWorld()));
    if (GameState) {
        if (GameState->RemainingTime <= 0) {
            return true; // The match is starting (RemainingTime <= 0) so it returns true.
        }
    }
    return false; // If no match is starting or GameState is null, return false.
}

void* (*ProcessEventO)(UObject* Obj, UFunction* Func, void* Func_Params);
void* ProcessEventHook(UObject* Obj, UFunction* Func, void* Func_Params) {
    if (Obj && Func) {
        std::string FuncName;
        std::string ObjName;

        FuncName = Func->GetName();
        ObjName = Obj->GetName();

        if ((Obj->IsA(AInfo::StaticClass()) and FuncName != "ReceiveTick") and FuncName != "BlueprintUpdateCamera"
            and not(FuncName.contains("BndEvt") or FuncName.contains("ReceiveHit") or FuncName.contains("ReceiveDrawHUD") or FuncName.contains("ConstructionScript") or FuncName.contains("ServerUpdateCamera") or FuncName.contains("OnParameterUpdated") or FuncName == "ReceiveBeginPlay")) {
            CUSTOMLOG(ObjName + " CALLED " + FuncName);
        }

        if (FuncName == "K2_OnSetMatchState") {
            Params::GameMode_K2_OnSetMatchState* Parms =
                static_cast <Params::GameMode_K2_OnSetMatchState*> (Func_Params);
            CUSTOMLOG("K2_OnSetMatchState CALLED WITH NewState: " +
                Parms->NewState.ToString());

            if (isMatchStarting() == true) {
                //DumpCurrentGamemodeData(); // The plane doesn't work, so fuck it
            }

        }

        // Teleports players to random locations right after they join
        if (FuncName == "K2_OnRestartPlayer") {
            auto Params_Input = reinterpret_cast <Params::GameModeBase_K2_PostLogin*> (Func_Params);
            auto NewPawn = Params_Input->NewPlayer->K2_GetPawn();

            FTransform NewTransform;

            NewTransform.Translation = FVector(418062.06, 322761.38, 942.57);
            FQuat Rotation;

            Rotation.X = 0.0;
            Rotation.Y = 0.0;
            Rotation.Z = 0.0;
            Rotation.W = 1.0;

            NewTransform.Rotation = Rotation;
            NewTransform.Scale3D = FVector(1.0, 1.0, 1.0);

            struct FHitResult HitResultTeleport;

            NewPawn->K2_SetActorTransform(NewTransform, false, &HitResultTeleport, true);
        }
        ProcessEventO(Obj, Func, Func_Params);
        return 0;
    }
}

// BEIGN SPAWN LEVEL PVP TEST FUNC
//  Taj did this and idk what it is lmao (I think it's a test level or something)
//      Okay I just remembered lol, it was a custom level he tried to load in 
//          -H4TIUX, 12/13/24
void SPAWN_CLEVEL_RA() {
    class UStaticMesh* Path_StaticMesh_0 = static_cast <class UStaticMesh*> (
        UObject::FindObject("StaticMesh Cube.Cube"));
    FTransform ToBeSpawned_SMA_0_TRANSFORM;
    ToBeSpawned_SMA_0_TRANSFORM.Translation = FVector(0.0, 0.0, 0.0);
    FQuat ToBeSpawned_SMA_0_QuatRotation;
    ToBeSpawned_SMA_0_QuatRotation.X = 0;
    ToBeSpawned_SMA_0_QuatRotation.Y = -0;
    ToBeSpawned_SMA_0_QuatRotation.Z = 0;
    ToBeSpawned_SMA_0_QuatRotation.W = 1;
    ToBeSpawned_SMA_0_TRANSFORM.Rotation = ToBeSpawned_SMA_0_QuatRotation;
    ToBeSpawned_SMA_0_TRANSFORM.Scale3D = FVector(66.5, 64.25, 0.1);
    class AStaticMeshActor* Spawned_StaticMesh_0 =
        SpawnStaticMesh(Path_StaticMesh_0, ToBeSpawned_SMA_0_TRANSFORM);;

    FTransform ToBeSpawned_SMA_1_TRANSFORM;
    ToBeSpawned_SMA_1_TRANSFORM.Translation =
        FVector(1500.0, 2048.282751, 165.810421);
    FQuat ToBeSpawned_SMA_1_QuatRotation;
    ToBeSpawned_SMA_1_QuatRotation.X = 0;
    ToBeSpawned_SMA_1_QuatRotation.Y = -0;
    ToBeSpawned_SMA_1_QuatRotation.Z = 0;
    ToBeSpawned_SMA_1_QuatRotation.W = 1;
    ToBeSpawned_SMA_1_TRANSFORM.Rotation = ToBeSpawned_SMA_1_QuatRotation;
    ToBeSpawned_SMA_1_TRANSFORM.Scale3D = FVector(4.0, 4.0, 4.0);
    class AStaticMeshActor* Spawned_StaticMesh_1 =
        SpawnStaticMesh(Path_StaticMesh_0, ToBeSpawned_SMA_1_TRANSFORM);;

    FTransform ToBeSpawned_SMA_2_TRANSFORM;
    ToBeSpawned_SMA_2_TRANSFORM.Translation =
        FVector(1500.0, 1432.793257, 142.136123);
    FQuat ToBeSpawned_SMA_2_QuatRotation;
    ToBeSpawned_SMA_2_QuatRotation.X = 0;
    ToBeSpawned_SMA_2_QuatRotation.Y = -0;
    ToBeSpawned_SMA_2_QuatRotation.Z = 0;
    ToBeSpawned_SMA_2_QuatRotation.W = 1;
    ToBeSpawned_SMA_2_TRANSFORM.Rotation = ToBeSpawned_SMA_2_QuatRotation;
    ToBeSpawned_SMA_2_TRANSFORM.Scale3D = FVector(3.0, 3.0, 3.0);
    class AStaticMeshActor* Spawned_StaticMesh_2 =
        SpawnStaticMesh(Path_StaticMesh_0, ToBeSpawned_SMA_2_TRANSFORM);;

    FTransform ToBeSpawned_SMA_3_TRANSFORM;
    ToBeSpawned_SMA_3_TRANSFORM.Translation =
        FVector(1329.420253, 1099.642787, 142.136123);
    FQuat ToBeSpawned_SMA_3_QuatRotation;
    ToBeSpawned_SMA_3_QuatRotation.X = 0;
    ToBeSpawned_SMA_3_QuatRotation.Y = -0;
    ToBeSpawned_SMA_3_QuatRotation.Z = 0;
    ToBeSpawned_SMA_3_QuatRotation.W = 1;
    ToBeSpawned_SMA_3_TRANSFORM.Rotation = ToBeSpawned_SMA_3_QuatRotation;
    ToBeSpawned_SMA_3_TRANSFORM.Scale3D = FVector(3.0, 3.0, 3.0);
    class AStaticMeshActor* Spawned_StaticMesh_3 =
        SpawnStaticMesh(Path_StaticMesh_0, ToBeSpawned_SMA_3_TRANSFORM);;

    FTransform ToBeSpawned_SMA_4_TRANSFORM;
    ToBeSpawned_SMA_4_TRANSFORM.Translation =
        FVector(1615.832777, 516.617397, 142.136123);
    FQuat ToBeSpawned_SMA_4_QuatRotation;
    ToBeSpawned_SMA_4_QuatRotation.X = 0;
    ToBeSpawned_SMA_4_QuatRotation.Y = -0;
    ToBeSpawned_SMA_4_QuatRotation.Z = 0;
    ToBeSpawned_SMA_4_QuatRotation.W = 1;
    ToBeSpawned_SMA_4_TRANSFORM.Rotation = ToBeSpawned_SMA_4_QuatRotation;
    ToBeSpawned_SMA_4_TRANSFORM.Scale3D = FVector(4.0, 4.0, 4.0);
    class AStaticMeshActor* Spawned_StaticMesh_4 =
        SpawnStaticMesh(Path_StaticMesh_0, ToBeSpawned_SMA_4_TRANSFORM);;

    FTransform ToBeSpawned_SMA_5_TRANSFORM;
    ToBeSpawned_SMA_5_TRANSFORM.Translation =
        FVector(1692.935606, -551.644607, 142.136123);
    FQuat ToBeSpawned_SMA_5_QuatRotation;
    ToBeSpawned_SMA_5_QuatRotation.X = 0;
    ToBeSpawned_SMA_5_QuatRotation.Y = -0;
    ToBeSpawned_SMA_5_QuatRotation.Z = 0;
    ToBeSpawned_SMA_5_QuatRotation.W = 1;
    ToBeSpawned_SMA_5_TRANSFORM.Rotation = ToBeSpawned_SMA_5_QuatRotation;
    ToBeSpawned_SMA_5_TRANSFORM.Scale3D = FVector(5.0, 5.0, 5.0);
    class AStaticMeshActor* Spawned_StaticMesh_5 =
        SpawnStaticMesh(Path_StaticMesh_0, ToBeSpawned_SMA_5_TRANSFORM);;

    FTransform ToBeSpawned_SMA_6_TRANSFORM;
    ToBeSpawned_SMA_6_TRANSFORM.Translation =
        FVector(1668.339642, -1462.831452, 142.136123);
    FQuat ToBeSpawned_SMA_6_QuatRotation;
    ToBeSpawned_SMA_6_QuatRotation.X = 0;
    ToBeSpawned_SMA_6_QuatRotation.Y = -0;
    ToBeSpawned_SMA_6_QuatRotation.Z = 0;
    ToBeSpawned_SMA_6_QuatRotation.W = 1;
    ToBeSpawned_SMA_6_TRANSFORM.Rotation = ToBeSpawned_SMA_6_QuatRotation;
    ToBeSpawned_SMA_6_TRANSFORM.Scale3D = FVector(4.0, 4.0, 4.0);
    class AStaticMeshActor* Spawned_StaticMesh_6 =
        SpawnStaticMesh(Path_StaticMesh_0, ToBeSpawned_SMA_6_TRANSFORM);;

    FTransform ToBeSpawned_SMA_7_TRANSFORM;
    ToBeSpawned_SMA_7_TRANSFORM.Translation =
        FVector(1631.644298, -2072.988869, 142.136123);
    FQuat ToBeSpawned_SMA_7_QuatRotation;
    ToBeSpawned_SMA_7_QuatRotation.X = 0;
    ToBeSpawned_SMA_7_QuatRotation.Y = -0;
    ToBeSpawned_SMA_7_QuatRotation.Z = 0;
    ToBeSpawned_SMA_7_QuatRotation.W = 1;
    ToBeSpawned_SMA_7_TRANSFORM.Rotation = ToBeSpawned_SMA_7_QuatRotation;
    ToBeSpawned_SMA_7_TRANSFORM.Scale3D = FVector(3.0, 3.0, 3.0);
    class AStaticMeshActor* Spawned_StaticMesh_7 =
        SpawnStaticMesh(Path_StaticMesh_0, ToBeSpawned_SMA_7_TRANSFORM);;

    FTransform ToBeSpawned_SMA_8_TRANSFORM;
    ToBeSpawned_SMA_8_TRANSFORM.Translation =
        FVector(-1507.536621, -2009.903627, 165.810421);
    FQuat ToBeSpawned_SMA_8_QuatRotation;
    ToBeSpawned_SMA_8_QuatRotation.X = 0;
    ToBeSpawned_SMA_8_QuatRotation.Y = -0;
    ToBeSpawned_SMA_8_QuatRotation.Z = 1;
    ToBeSpawned_SMA_8_QuatRotation.W = 0;
    ToBeSpawned_SMA_8_TRANSFORM.Rotation = ToBeSpawned_SMA_8_QuatRotation;
    ToBeSpawned_SMA_8_TRANSFORM.Scale3D = FVector(4.0, 4.0, 4.0);
    class AStaticMeshActor* Spawned_StaticMesh_8 =
        SpawnStaticMesh(Path_StaticMesh_0, ToBeSpawned_SMA_8_TRANSFORM);;

    FTransform ToBeSpawned_SMA_9_TRANSFORM;
    ToBeSpawned_SMA_9_TRANSFORM.Translation =
        FVector(-1507.536591, -1394.414133, 142.136123);
    FQuat ToBeSpawned_SMA_9_QuatRotation;
    ToBeSpawned_SMA_9_QuatRotation.X = 0;
    ToBeSpawned_SMA_9_QuatRotation.Y = -0;
    ToBeSpawned_SMA_9_QuatRotation.Z = 1;
    ToBeSpawned_SMA_9_QuatRotation.W = 0;
    ToBeSpawned_SMA_9_TRANSFORM.Rotation = ToBeSpawned_SMA_9_QuatRotation;
    ToBeSpawned_SMA_9_TRANSFORM.Scale3D = FVector(3.0, 3.0, 3.0);
    class AStaticMeshActor* Spawned_StaticMesh_9 =
        SpawnStaticMesh(Path_StaticMesh_0, ToBeSpawned_SMA_9_TRANSFORM);;

    FTransform ToBeSpawned_SMA_10_TRANSFORM;
    ToBeSpawned_SMA_10_TRANSFORM.Translation =
        FVector(-1336.956828, -1061.263671, 142.136123);
    FQuat ToBeSpawned_SMA_10_QuatRotation;
    ToBeSpawned_SMA_10_QuatRotation.X = 0;
    ToBeSpawned_SMA_10_QuatRotation.Y = -0;
    ToBeSpawned_SMA_10_QuatRotation.Z = 1;
    ToBeSpawned_SMA_10_QuatRotation.W = 0;
    ToBeSpawned_SMA_10_TRANSFORM.Rotation = ToBeSpawned_SMA_10_QuatRotation;
    ToBeSpawned_SMA_10_TRANSFORM.Scale3D = FVector(3.0, 3.0, 3.0);
    class AStaticMeshActor* Spawned_StaticMesh_10 =
        SpawnStaticMesh(Path_StaticMesh_0, ToBeSpawned_SMA_10_TRANSFORM);;

    FTransform ToBeSpawned_SMA_11_TRANSFORM;
    ToBeSpawned_SMA_11_TRANSFORM.Translation =
        FVector(-1623.369323, -478.238267, 142.136123);
    FQuat ToBeSpawned_SMA_11_QuatRotation;
    ToBeSpawned_SMA_11_QuatRotation.X = 0;
    ToBeSpawned_SMA_11_QuatRotation.Y = -0;
    ToBeSpawned_SMA_11_QuatRotation.Z = 1;
    ToBeSpawned_SMA_11_QuatRotation.W = 0;
    ToBeSpawned_SMA_11_TRANSFORM.Rotation = ToBeSpawned_SMA_11_QuatRotation;
    ToBeSpawned_SMA_11_TRANSFORM.Scale3D = FVector(4.0, 4.0, 4.0);
    class AStaticMeshActor* Spawned_StaticMesh_11 =
        SpawnStaticMesh(Path_StaticMesh_0, ToBeSpawned_SMA_11_TRANSFORM);;

    FTransform ToBeSpawned_SMA_12_TRANSFORM;
    ToBeSpawned_SMA_12_TRANSFORM.Translation =
        FVector(-1700.4721, 590.02374, 142.136123);
    FQuat ToBeSpawned_SMA_12_QuatRotation;
    ToBeSpawned_SMA_12_QuatRotation.X = 0;
    ToBeSpawned_SMA_12_QuatRotation.Y = -0;
    ToBeSpawned_SMA_12_QuatRotation.Z = 1;
    ToBeSpawned_SMA_12_QuatRotation.W = 0;
    ToBeSpawned_SMA_12_TRANSFORM.Rotation = ToBeSpawned_SMA_12_QuatRotation;
    ToBeSpawned_SMA_12_TRANSFORM.Scale3D = FVector(5.0, 5.0, 5.0);
    class AStaticMeshActor* Spawned_StaticMesh_12 =
        SpawnStaticMesh(Path_StaticMesh_0, ToBeSpawned_SMA_12_TRANSFORM);;

    FTransform ToBeSpawned_SMA_13_TRANSFORM;
    ToBeSpawned_SMA_13_TRANSFORM.Translation =
        FVector(-1675.876092, 1501.210584, 142.136123);
    FQuat ToBeSpawned_SMA_13_QuatRotation;
    ToBeSpawned_SMA_13_QuatRotation.X = 0;
    ToBeSpawned_SMA_13_QuatRotation.Y = -0;
    ToBeSpawned_SMA_13_QuatRotation.Z = 1;
    ToBeSpawned_SMA_13_QuatRotation.W = 0;
    ToBeSpawned_SMA_13_TRANSFORM.Rotation = ToBeSpawned_SMA_13_QuatRotation;
    ToBeSpawned_SMA_13_TRANSFORM.Scale3D = FVector(4.0, 4.0, 4.0);
    class AStaticMeshActor* Spawned_StaticMesh_13 =
        SpawnStaticMesh(Path_StaticMesh_0, ToBeSpawned_SMA_13_TRANSFORM);;

    FTransform ToBeSpawned_SMA_14_TRANSFORM;
    ToBeSpawned_SMA_14_TRANSFORM.Translation =
        FVector(-1639.180718, 2111.367999, 142.136123);
    FQuat ToBeSpawned_SMA_14_QuatRotation;
    ToBeSpawned_SMA_14_QuatRotation.X = 0;
    ToBeSpawned_SMA_14_QuatRotation.Y = -0;
    ToBeSpawned_SMA_14_QuatRotation.Z = 1;
    ToBeSpawned_SMA_14_QuatRotation.W = 0;
    ToBeSpawned_SMA_14_TRANSFORM.Rotation = ToBeSpawned_SMA_14_QuatRotation;
    ToBeSpawned_SMA_14_TRANSFORM.Scale3D = FVector(3.0, 3.0, 3.0);
    class AStaticMeshActor* Spawned_StaticMesh_14 =
        SpawnStaticMesh(Path_StaticMesh_0, ToBeSpawned_SMA_14_TRANSFORM);;

    class TSubclassOf < UItem > Item_SpawnedItem_0 =
        static_cast <class UClass*> (UObject::FindObjectFast("Item_Weapon_AK47_C"));
    FTransform SpawnedItem_0_TRANSFORM;
    SpawnedItem_0_TRANSFORM.Translation =
        FVector(-2258.057041, -1985.388992, 5.0);
    FQuat SpawnedItem_0_QuatRotation;
    SpawnedItem_0_QuatRotation.X = 0;
    SpawnedItem_0_QuatRotation.Y = -0;
    SpawnedItem_0_QuatRotation.Z = 0;
    SpawnedItem_0_QuatRotation.W = 1;
    SpawnedItem_0_TRANSFORM.Rotation = SpawnedItem_0_QuatRotation;
    SpawnedItem_0_TRANSFORM.Scale3D = FVector(2.0, 2.0, 2.0);
    class ADroppedItem* SpawnedItem_0 =
        SpawnItemAtLocation(Item_SpawnedItem_0, SpawnedItem_0_TRANSFORM);

    FTransform SpawnedItem_1_TRANSFORM;
    SpawnedItem_1_TRANSFORM.Translation =
        FVector(-2277.969171, -1457.197583, 5.0);
    FQuat SpawnedItem_1_QuatRotation;
    SpawnedItem_1_QuatRotation.X = 0;
    SpawnedItem_1_QuatRotation.Y = -0;
    SpawnedItem_1_QuatRotation.Z = 0;
    SpawnedItem_1_QuatRotation.W = 1;
    SpawnedItem_1_TRANSFORM.Rotation = SpawnedItem_1_QuatRotation;
    SpawnedItem_1_TRANSFORM.Scale3D = FVector(2.0, 2.0, 2.0);
    class ADroppedItem* SpawnedItem_1 =
        SpawnItemAtLocation(Item_SpawnedItem_0, SpawnedItem_1_TRANSFORM);

    FTransform SpawnedItem_2_TRANSFORM;
    SpawnedItem_2_TRANSFORM.Translation =
        FVector(-2277.969171, -517.93465, 4.999997);
    FQuat SpawnedItem_2_QuatRotation;
    SpawnedItem_2_QuatRotation.X = 0;
    SpawnedItem_2_QuatRotation.Y = -0;
    SpawnedItem_2_QuatRotation.Z = 0;
    SpawnedItem_2_QuatRotation.W = 1;
    SpawnedItem_2_TRANSFORM.Rotation = SpawnedItem_2_QuatRotation;
    SpawnedItem_2_TRANSFORM.Scale3D = FVector(2.0, 2.0, 2.0);
    class ADroppedItem* SpawnedItem_2 =
        SpawnItemAtLocation(Item_SpawnedItem_0, SpawnedItem_2_TRANSFORM);

    FTransform SpawnedItem_3_TRANSFORM;
    SpawnedItem_3_TRANSFORM.Translation =
        FVector(-2277.969171, 511.29882, 4.999996);
    FQuat SpawnedItem_3_QuatRotation;
    SpawnedItem_3_QuatRotation.X = 0;
    SpawnedItem_3_QuatRotation.Y = -0;
    SpawnedItem_3_QuatRotation.Z = 0;
    SpawnedItem_3_QuatRotation.W = 1;
    SpawnedItem_3_TRANSFORM.Rotation = SpawnedItem_3_QuatRotation;
    SpawnedItem_3_TRANSFORM.Scale3D = FVector(2.0, 2.0, 2.0);
    class ADroppedItem* SpawnedItem_3 =
        SpawnItemAtLocation(Item_SpawnedItem_0, SpawnedItem_3_TRANSFORM);

    FTransform SpawnedItem_4_TRANSFORM;
    SpawnedItem_4_TRANSFORM.Translation = FVector(-2209.562822, 2.737608, 5.0);
    FQuat SpawnedItem_4_QuatRotation;
    SpawnedItem_4_QuatRotation.X = 0;
    SpawnedItem_4_QuatRotation.Y = -0;
    SpawnedItem_4_QuatRotation.Z = 0;
    SpawnedItem_4_QuatRotation.W = 1;
    SpawnedItem_4_TRANSFORM.Rotation = SpawnedItem_4_QuatRotation;
    SpawnedItem_4_TRANSFORM.Scale3D = FVector(2.0, 2.0, 2.0);
    class ADroppedItem* SpawnedItem_4 =
        SpawnItemAtLocation(Item_SpawnedItem_0, SpawnedItem_4_TRANSFORM);

    FTransform SpawnedItem_5_TRANSFORM;
    SpawnedItem_5_TRANSFORM.Translation = FVector(-1726.286223, 32.923544, 5.0);
    FQuat SpawnedItem_5_QuatRotation;
    SpawnedItem_5_QuatRotation.X = 0;
    SpawnedItem_5_QuatRotation.Y = -0;
    SpawnedItem_5_QuatRotation.Z = 0;
    SpawnedItem_5_QuatRotation.W = 1;
    SpawnedItem_5_TRANSFORM.Rotation = SpawnedItem_5_QuatRotation;
    SpawnedItem_5_TRANSFORM.Scale3D = FVector(2.0, 2.0, 2.0);
    class ADroppedItem* SpawnedItem_5 =
        SpawnItemAtLocation(Item_SpawnedItem_0, SpawnedItem_5_TRANSFORM);

    FTransform SpawnedItem_6_TRANSFORM;
    SpawnedItem_6_TRANSFORM.Translation =
        FVector(-2229.474952, 1470.19195, 4.999997);
    FQuat SpawnedItem_6_QuatRotation;
    SpawnedItem_6_QuatRotation.X = 0;
    SpawnedItem_6_QuatRotation.Y = -0;
    SpawnedItem_6_QuatRotation.Z = 0;
    SpawnedItem_6_QuatRotation.W = 1;
    SpawnedItem_6_TRANSFORM.Rotation = SpawnedItem_6_QuatRotation;
    SpawnedItem_6_TRANSFORM.Scale3D = FVector(2.0, 2.0, 2.0);
    class ADroppedItem* SpawnedItem_6 =
        SpawnItemAtLocation(Item_SpawnedItem_0, SpawnedItem_6_TRANSFORM);

    FTransform SpawnedItem_7_TRANSFORM;
    SpawnedItem_7_TRANSFORM.Translation =
        FVector(2117.593922, -1985.388992, 4.99997);
    FQuat SpawnedItem_7_QuatRotation;
    SpawnedItem_7_QuatRotation.X = 0;
    SpawnedItem_7_QuatRotation.Y = -0;
    SpawnedItem_7_QuatRotation.Z = 0;
    SpawnedItem_7_QuatRotation.W = 1;
    SpawnedItem_7_TRANSFORM.Rotation = SpawnedItem_7_QuatRotation;
    SpawnedItem_7_TRANSFORM.Scale3D = FVector(2.0, 2.0, 2.0);
    class ADroppedItem* SpawnedItem_7 =
        SpawnItemAtLocation(Item_SpawnedItem_0, SpawnedItem_7_TRANSFORM);

    FTransform SpawnedItem_8_TRANSFORM;
    SpawnedItem_8_TRANSFORM.Translation =
        FVector(2097.681792, -1457.197583, 4.99997);
    FQuat SpawnedItem_8_QuatRotation;
    SpawnedItem_8_QuatRotation.X = 0;
    SpawnedItem_8_QuatRotation.Y = -0;
    SpawnedItem_8_QuatRotation.Z = 0;
    SpawnedItem_8_QuatRotation.W = 1;
    SpawnedItem_8_TRANSFORM.Rotation = SpawnedItem_8_QuatRotation;
    SpawnedItem_8_TRANSFORM.Scale3D = FVector(2.0, 2.0, 2.0);
    class ADroppedItem* SpawnedItem_8 =
        SpawnItemAtLocation(Item_SpawnedItem_0, SpawnedItem_8_TRANSFORM);

    FTransform SpawnedItem_9_TRANSFORM;
    SpawnedItem_9_TRANSFORM.Translation =
        FVector(2097.681792, -517.93465, 4.999967);
    FQuat SpawnedItem_9_QuatRotation;
    SpawnedItem_9_QuatRotation.X = 0;
    SpawnedItem_9_QuatRotation.Y = -0;
    SpawnedItem_9_QuatRotation.Z = 0;
    SpawnedItem_9_QuatRotation.W = 1;
    SpawnedItem_9_TRANSFORM.Rotation = SpawnedItem_9_QuatRotation;
    SpawnedItem_9_TRANSFORM.Scale3D = FVector(2.0, 2.0, 2.0);
    class ADroppedItem* SpawnedItem_9 =
        SpawnItemAtLocation(Item_SpawnedItem_0, SpawnedItem_9_TRANSFORM);

    FTransform SpawnedItem_10_TRANSFORM;
    SpawnedItem_10_TRANSFORM.Translation =
        FVector(2097.681792, 511.29882, 4.999966);
    FQuat SpawnedItem_10_QuatRotation;
    SpawnedItem_10_QuatRotation.X = 0;
    SpawnedItem_10_QuatRotation.Y = -0;
    SpawnedItem_10_QuatRotation.Z = 0;
    SpawnedItem_10_QuatRotation.W = 1;
    SpawnedItem_10_TRANSFORM.Rotation = SpawnedItem_10_QuatRotation;
    SpawnedItem_10_TRANSFORM.Scale3D = FVector(2.0, 2.0, 2.0);
    class ADroppedItem* SpawnedItem_10 =
        SpawnItemAtLocation(Item_SpawnedItem_0, SpawnedItem_10_TRANSFORM);

    FTransform SpawnedItem_11_TRANSFORM;
    SpawnedItem_11_TRANSFORM.Translation =
        FVector(2166.088141, 2.737608, 4.99997);
    FQuat SpawnedItem_11_QuatRotation;
    SpawnedItem_11_QuatRotation.X = 0;
    SpawnedItem_11_QuatRotation.Y = -0;
    SpawnedItem_11_QuatRotation.Z = 0;
    SpawnedItem_11_QuatRotation.W = 1;
    SpawnedItem_11_TRANSFORM.Rotation = SpawnedItem_11_QuatRotation;
    SpawnedItem_11_TRANSFORM.Scale3D = FVector(2.0, 2.0, 2.0);
    class ADroppedItem* SpawnedItem_11 =
        SpawnItemAtLocation(Item_SpawnedItem_0, SpawnedItem_11_TRANSFORM);

    FTransform SpawnedItem_12_TRANSFORM;
    SpawnedItem_12_TRANSFORM.Translation =
        FVector(1831.997194, 900.842245, 4.99997);
    FQuat SpawnedItem_12_QuatRotation;
    SpawnedItem_12_QuatRotation.X = 0;
    SpawnedItem_12_QuatRotation.Y = -0;
    SpawnedItem_12_QuatRotation.Z = 0;
    SpawnedItem_12_QuatRotation.W = 1;
    SpawnedItem_12_TRANSFORM.Rotation = SpawnedItem_12_QuatRotation;
    SpawnedItem_12_TRANSFORM.Scale3D = FVector(2.0, 2.0, 2.0);
    class ADroppedItem* SpawnedItem_12 =
        SpawnItemAtLocation(Item_SpawnedItem_0, SpawnedItem_12_TRANSFORM);

    FTransform SpawnedItem_13_TRANSFORM;
    SpawnedItem_13_TRANSFORM.Translation =
        FVector(2146.176011, 1470.19195, 4.999967);
    FQuat SpawnedItem_13_QuatRotation;
    SpawnedItem_13_QuatRotation.X = 0;
    SpawnedItem_13_QuatRotation.Y = -0;
    SpawnedItem_13_QuatRotation.Z = 0;
    SpawnedItem_13_QuatRotation.W = 1;
    SpawnedItem_13_TRANSFORM.Rotation = SpawnedItem_13_QuatRotation;
    SpawnedItem_13_TRANSFORM.Scale3D = FVector(2.0, 2.0, 2.0);
    class ADroppedItem* SpawnedItem_13 =
        SpawnItemAtLocation(Item_SpawnedItem_0, SpawnedItem_13_TRANSFORM);
};

//
//
// END

void DumpAllSubClassObjectFullPaths(UClass* Class) {
    for (int i = 0; i < SDK::UObject::GObjects->Num(); ++i) {
        UObject* Object = SDK::UObject::GObjects->GetByIndex(i);

        if (!Object) {
            continue;
        }

        if (!Object->IsA(Class)) {
            continue;
        }

        CUSTOMLOG(Object->GetFullName());
    }
}

DWORD MainThread(HMODULE Module) {
    /* Code to open a console window */
    AllocConsole();
    FILE* Dummy;
    freopen_s(&Dummy, "CONOUT$", "w", stdout);
    freopen_s(&Dummy, "CONIN$", "r", stdin);
    freopen("conin$", "r", stdin);
    freopen("conout$", "w", stdout);
    freopen("conout$", "w", stderr);
    printf("Debugging Window:\n");

    /* Functions returning "static" instances */
    SDK::UEngine* Engine = SDK::UEngine::GetEngine();
    SDK::UWorld* World = SDK::UWorld::GetWorld();

    /* Getting the PlayerController, World, OwningGameInstance, ... should all be
     * checked not to be nullptr! */
    SDK::APlayerController* MyController =
        UGameplayStatics::GetPlayerController(World, 0);

    if (MyController->HasAuthority()) {
        CurrentNetworkStatus = "SERVER_AUTHORITY";
    }
    else {
        CurrentNetworkStatus = "CLIENT";
    }

    auto InitStatus = MH_Initialize();
    std::string StatusString = MH_StatusToString(InitStatus);

    CUSTOMLOG("MINHOOK STATUS INIT: " + StatusString);

    if (InitStatus != MH_OK) {
        CUSTOMLOG("MINHOOK STATUS INIT NOT OK!!!! ABORTING");
        return FALSE;
    }

    uintptr_t ProcessEventAddr =
        (uintptr_t(GetModuleHandle(0)) + Offsets::ProcessEvent);
    // auto ProcessEventAddr = UObject::GObjects->GetByIndex(1)->Vft[0x40];
    ProcessEventO = decltype(ProcessEventO)(ProcessEventAddr);

    auto HookResult = MH_CreateHook((PVOID&)ProcessEventAddr, ProcessEventHook,
        reinterpret_cast <LPVOID*> (&ProcessEventO));
    std::string HookResultString = MH_StatusToString(HookResult);

    if (HookResult != MH_STATUS::MH_OK) {
        CUSTOMLOG("Process Event Hook CREATED FAILED WITH REASON : " +
            HookResultString + " !");
        return FALSE;
    }

    CUSTOMLOG("Process Event Hook CREATED GOOD!");

    if (MH_EnableHook((PVOID&)ProcessEventAddr) != MH_STATUS::MH_OK) {
        CUSTOMLOG("Process Event Hook ENABLE FAILED!");
        return FALSE;

    }
    else {
        CUSTOMLOG("Process Event Hook Enabled!");
    }

    CUSTOMLOG("Hooks Enabled!");

    InitUEConsole();
    DisableCullingForAllActors(UWorld::GetWorld());

    // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

    if (MyController->HasAuthority()) {
        CUSTOMLOG("INJECTED, WE HAVE AUTHORITY, EITHER SERVER OR STANDALONE");

        auto MyGamemode = UGameplayStatics::GetGameMode(World);
        bool IsTsLGamemode = MyGamemode->IsA(ATslGameMode::StaticClass());

        if (IsTsLGamemode) {
            CUSTOMLOG("SERVER DLL INJECTED TO DO STUFF, WE ARE TSLGAMEMODE");
            UKismetSystemLibrary::SetWindowTitle(MakeText(L"PUBG_SERVER_LISTEN"));
        }

    }
    else {
        UKismetSystemLibrary::SetWindowTitle(MakeText(L"PUBG_CLIENT_NOAUTHORITY"));
        CUSTOMLOG("DLL INJECTED, WE ARE NOT AUTHORITY, MOST LIKELY CLIENT");
    }

    // Does shit when you press keys. We used to actually use this before we decided to automate stuff lmao
    while (true) {

        if (GetAsyncKeyState(VK_F5)) {
            DisableCullingForAllActors(UWorld::GetWorld());
        }

        if (GetAsyncKeyState(VK_F4) & 1) {
            AttemptGenerateItems();
        }

        if (GetAsyncKeyState(VK_F5) & 1) {
            DoServerStuff();
        }

        if (GetAsyncKeyState(VK_F6) & 1) {
            CUSTOMLOG("LINE TRACE INIT");
            FHitResult Results;
            TArray < class AActor* > IgnoreList;
            IgnoreList.Add(MyController->K2_GetPawn());
            LineTraceFromCurrentCamera(&Results, IgnoreList);
            AActor* HitActor = Results.Actor.Get();
            UClass* ActorClass = UGameplayStatics::GetObjectClass(HitActor);

            if (HitActor, ActorClass) {
                CUSTOMLOG("LINE TRACE HIT AN ACTOR");
                CUSTOMLOG("HIT ACTOR FULLNAME:" + HitActor->GetFullName());
                CUSTOMLOG("HIT ACTOR CLASS:" + ActorClass->GetFullName());
            }
            else {
                CUSTOMLOG("SOME SHIT IS WRONG WITH THAT ACTOR WTF BRO");
            }
            if (!HitActor) {
                CUSTOMLOG("In fact, you didn't hit anything lmaooo, your aim is shit L BOZO git gud");
            }
            if (!ActorClass) {
                CUSTOMLOG("ACTOR HAS NO CLASS");
            }
        }

        if (GetAsyncKeyState(VK_F8) & 1) {
            ServerTeleportAllPlayersToLoc();
        }

        if (GetAsyncKeyState(VK_F2) & 1) {
            isMatchStarting();
        }

        Sleep(100); // Lack of sleep is really bad and unhealthy. Please make sure to sleep at least 8 hours a day!

    }

    return 0;
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD reason, LPVOID lpReserved) {
    switch (reason) {
    case DLL_PROCESS_ATTACH:
        CreateThread(0, 0, (LPTHREAD_START_ROUTINE)MainThread, hModule, 0, 0);
        break;
    }

    return TRUE;
}

// Your boy H4TIUX did all the comments. Thank me later for making your life easier :))))
//  Thanks for reading uwu