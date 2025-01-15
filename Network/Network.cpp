#include "Network.h"

std::string CurrentNetworkStatus = "UNDEFINED NETWORK STATUS";

std::string GetCurrentNeworkStatus()
{
	return CurrentNetworkStatus;
}

void SetCurrentNetworkStatus(std::string status)
{
	CurrentNetworkStatus = status;
}