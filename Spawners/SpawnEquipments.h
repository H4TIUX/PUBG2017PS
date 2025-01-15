#pragma once

#include "../Common.h"

ADroppedItem* AttemptSpawnEquipableAtPlayer(UItem* _cur,
    int CurrentIterationCoeff);

void SpawnEquipmentsAtPlayer(std::vector < UItem* > Items);