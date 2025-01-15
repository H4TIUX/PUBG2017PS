#include "Log.h"
#include <chrono>
#include <fstream>
#include <iostream>

bool LogFileCreated = false;
std::string LOGFILENAME;

void CUSTOMLOG(std::string LOG) {
    std::string _FINLOG;

    if (!LogFileCreated) {
        std::string RandomID = std::to_string(std::rand());
        LOGFILENAME =
            "PUBG_INGAME_DLL_" + GetCurrentNeworkStatus() + "_LOG_" + RandomID + ".txt";
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
