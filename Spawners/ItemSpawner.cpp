#include "ItemSpawner.h"

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
