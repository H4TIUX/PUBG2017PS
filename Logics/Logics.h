#pragma once

#include "../Common.h"
#include "../Config/IniSettings.h"


// Airplane
void StartAirplane();

void SpawnPlayerOnIsland(void* Func_Params);

// Random
void StartRandomMatch();

void RandomizePlayerPosition(void* Func_Params);

void RandomizePlayerPositionAfterMatchStart(void* Func_Params);

void FixQuitPlayers(void* Func_Params);