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
// Tym helped us deploy the servers and develop the lobby, thank you sm <3
// Detanup01 by cleaning the big AF file to multiple smallers

#include "Common.h"
#include "Config/IniSettings.h"
#include "Logics/Logics.h"
#include "SpawnPoints/Spawnpoints.h"

#pragma warning(disable: 4996)

#if _WIN64
#pragma comment(lib, "libMinHook.x64.lib")
#else
#pragma comment(lib, "libMinHook.x86.lib")
#endif

using namespace SDK;

// Basic.cpp was added to the VS project
// Engine_functions.cpp was added to the VS project


void DisableCullingForAllActors(UWorld* World) // Function half made by ChatGPT half made by me that saved my ass completely
{
    if (!World)
    {
        CUSTOMLOG("DisableCullingForAllActors: World is null.");
        return;
    }

    CUSTOMLOG("DisableCullingForAllActors: World is valid, proceeding.");

    SDK::ULevel* Level = World->PersistentLevel;
    SDK::TArray < SDK::AActor* >& AllActors = Level->Actors;

    // Ignore persistent level, focus on streaming levels
    for (ULevelStreaming* StreamingLevel : World->StreamingLevels)
    {
        if (StreamingLevel)
        {
            std::string LevelName = StreamingLevel->GetName();

            CUSTOMLOG("We are iterating the level: " + LevelName);

            // Skip persistent level and ignored levels
            if (LevelName.find("327") != std::string::npos)
            {
                CUSTOMLOG("Skipping level: " + LevelName);
                continue;
            }

            if (LevelName.find("328") != std::string::npos)
            {
                CUSTOMLOG("Skipping level: " + LevelName);
                continue;
            }

            if (LevelName.find("329") != std::string::npos)
            {
                CUSTOMLOG("Skipping level: " + LevelName);
                continue;
            }

            if (LevelName.find("32") != std::string::npos)
            {
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

std::vector<std::string> DontPrintFunctions =
{ 
    "ReceiveTick",
    "BlueprintUpdateCamera",
    "ReceiveBeginPlay",
    "ReadyToEndMatch",
    "UpdateWorldTimeSecondsDelta",
    "OnRep_ReplicatedWorldTimeSeconds"
};
std::vector<std::string> DontPrintFunctionContains =
{
    "ReceiveHit",
    "ReceiveDrawHUD",
    "ConstructionScript",
    "ServerUpdateCamera",
    "OnParameterUpdated"
};

void* (*ProcessEventO)(UObject* Obj, UFunction* Func, void* Func_Params);
void* ProcessEventHook(UObject* Obj, UFunction* Func, void* Func_Params)
{
    if (Obj && Func)
    {
        std::string FuncName;
        std::string ObjName;

        FuncName = Func->GetName();
        ObjName = Obj->GetName();

        bool isPresent = (std::find(DontPrintFunctions.begin(), DontPrintFunctions.end(), FuncName) != DontPrintFunctions.end());
        if (!isPresent)
        {
            for (size_t i = 0; i < DontPrintFunctionContains.size(); i++)
            {
                isPresent = FuncName.find(DontPrintFunctionContains[i]) != std::string::npos;
                if (isPresent)
                    break;
            }
        }
        if (!isPresent && Obj->IsA(AInfo::StaticClass()) && !(FuncName.find("BndEvt") != std::string::npos))
        {
            CUSTOMLOG(ObjName + " CALLED " + FuncName);
        }

        if (FuncName == "K2_OnSetMatchState")
        {
            Params::GameMode_K2_OnSetMatchState* Parms = static_cast <Params::GameMode_K2_OnSetMatchState*> (Func_Params);
            CUSTOMLOG("K2_OnSetMatchState CALLED WITH NewState: " + Parms->NewState.ToString());

            // Fix if not inPorgress it still doing random shit.
            if (isMatchStarting() == true && Parms->NewState.ToString().find("InProgress") != std::string::npos)
            {
                // We calling all StartMatch logic here. We check inside the .cpp file respectivly what we using
                StartRandomMatch();
                StartAirplane();
            }
        }

        if (FuncName == "K2_OnRestartPlayer")
        {
            if (isMatchStarting())
                RandomizePlayerPositionAfterMatchStart(Func_Params);
            else
            {
                // this will only spawn if airplane
                SpawnPlayerOnIsland(Func_Params);
                // this will do when random
                RandomizePlayerPosition(Func_Params);
            }
                
        }
        if (FuncName == "K2_OnLogout" && isMatchStarting())
        {
            FixQuitPlayers(Func_Params);
        }

        ProcessEventO(Obj, Func, Func_Params);
        return 0;
    }
}

DWORD MainThread(HMODULE Module)
{
    /* Code to open a console window */
    AllocConsole();
    LoadIni(Module);
    InitSpawnpoints();
    FILE* Dummy;
    freopen_s(&Dummy, "CONOUT$", "w", stdout);
    freopen_s(&Dummy, "CONIN$", "r", stdin);
    auto conin = freopen("conin$", "r", stdin);
    auto conout = freopen("conout$", "w", stdout);
    auto conout_err = freopen("conout$", "w", stderr);
    printf("Debugging Window:\n");

    /* Functions returning "static" instances */
    SDK::UEngine* Engine = SDK::UEngine::GetEngine();
    SDK::UWorld* World = SDK::UWorld::GetWorld();

    auto MyGamemode = UGameplayStatics::GetGameMode(World);
    bool IsTsLGamemode = MyGamemode->IsA(ATslGameMode::StaticClass());

    /* Getting the PlayerController, World, OwningGameInstance, ... should all be
     * checked not to be nullptr! */
    SDK::APlayerController* MyController =UGameplayStatics::GetPlayerController(World, 0);

    if (IsTsLGamemode)
    {
        SetCurrentNetworkStatus("SERVER");
    }
    else
    {
        SetCurrentNetworkStatus("CLIENT");
    }

    auto InitStatus = MH_Initialize();
    std::string StatusString = MH_StatusToString(InitStatus);

    CUSTOMLOG("MINHOOK STATUS INIT: " + StatusString);

    if (InitStatus != MH_OK)
    {
        CUSTOMLOG("MINHOOK STATUS INIT NOT OK!!!! ABORTING");
        return FALSE;
    }

    uintptr_t ProcessEventAddr = (uintptr_t(GetModuleHandle(0)) + Offsets::ProcessEvent);
    // auto ProcessEventAddr = UObject::GObjects->GetByIndex(1)->Vft[0x40];
    ProcessEventO = decltype(ProcessEventO)(ProcessEventAddr);

    auto HookResult = MH_CreateHook((PVOID&)ProcessEventAddr, ProcessEventHook, reinterpret_cast <LPVOID*> (&ProcessEventO));
    std::string HookResultString = MH_StatusToString(HookResult);

    if (HookResult != MH_STATUS::MH_OK)
    {
        CUSTOMLOG("Process Event Hook CREATED FAILED WITH REASON : " + HookResultString + " !");
        return FALSE;
    }

    CUSTOMLOG("Process Event Hook CREATED GOOD!");

    if (MH_EnableHook((PVOID&)ProcessEventAddr) != MH_STATUS::MH_OK)
    {
        CUSTOMLOG("Process Event Hook ENABLE FAILED!");
        return FALSE;
    }
    else
    {
        CUSTOMLOG("Process Event Hook Enabled!");
    }

    CUSTOMLOG("Hooks Enabled!");

    InitUEConsole();
    DisableCullingForAllActors(UWorld::GetWorld());

    // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

    if (MyController->HasAuthority())
    {
        CUSTOMLOG("INJECTED, WE HAVE AUTHORITY, EITHER SERVER OR STANDALONE");

        auto MyGamemode = UGameplayStatics::GetGameMode(World);
        bool IsTsLGamemode = MyGamemode->IsA(ATslGameMode::StaticClass());

        if (IsTsLGamemode)
        {
            CUSTOMLOG("SERVER DLL INJECTED TO DO STUFF, WE ARE TSLGAMEMODE");
            UKismetSystemLibrary::SetWindowTitle(MakeText(L"PUBG_SERVER_LISTEN"));

            ATslGameState* GameState = static_cast<ATslGameState*>(UGameplayStatics::GetGameState(UWorld::GetWorld()));
            if (GameState)
            {
                GameState->RemainingTime = GetWaitTime();
            }
        }

    }
    else
    {
        UKismetSystemLibrary::SetWindowTitle(MakeText(L"PUBG_CLIENT_NOAUTHORITY"));
        CUSTOMLOG("DLL INJECTED, WE ARE NOT AUTHORITY, MOST LIKELY CLIENT");
    }

    return 0;
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD reason, LPVOID lpReserved)
{
    switch (reason)
    {
        case DLL_PROCESS_ATTACH:
            CreateThread(0, 0, (LPTHREAD_START_ROUTINE)MainThread, hModule, 0, 0);
            break;
    }
    return TRUE;
}

// Your boy H4TIUX did all the comments. Thank me later for making your life easier :))))
//  Thanks for reading uwu