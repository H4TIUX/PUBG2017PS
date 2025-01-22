#include "Logics.h"


void Thread_FixQuitPlayer(ATslPlayerController* controller)
{
    // 1 min
    // 60 is 1 minute to a sec
    // 1000 is 1 sec to ms
    Sleep(1 * 60 * 1000);
    if (controller)
        controller->ServerSuicide();
}

void FixQuitPlayers(void* Func_Params)
{
    Params::GameModeBase_K2_OnRestartPlayer* Parms = static_cast<Params::GameModeBase_K2_OnRestartPlayer*> (Func_Params);
    AController* player = Parms->NewPlayer;
    ATslPlayerController* gameChar = static_cast<ATslPlayerController*>(player);
	CreateThread(0, 0, (LPTHREAD_START_ROUTINE)Thread_FixQuitPlayer, gameChar, 0, 0);
}