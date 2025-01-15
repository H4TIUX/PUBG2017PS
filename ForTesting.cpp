#include "Common.h"
#include "Spawners/AllSpawners.h"

#pragma warning(disable: 4996)

#if _WIN64
#pragma comment(lib, "libMinHook.x64.lib")
#else
#pragma comment(lib, "libMinHook.x86.lib")
#endif

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

#define ACTOR_SPAWN_FILE_NAME "ActorsToSpawn.txt"

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