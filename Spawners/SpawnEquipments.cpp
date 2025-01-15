#include "SpawnEquipments.h"

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
        form.Translation + (ForwadVector * 50.0f * (float)CurrentIterationCoeff);

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

void SpawnEquipmentsAtPlayer(std::vector < UItem* > Items) {
    int CurrentIterationCoeff = 1;
    for (auto _Ccur : Items) {
        CurrentIterationCoeff++;
        AttemptSpawnEquipableAtPlayer(_Ccur, CurrentIterationCoeff);
    }
}