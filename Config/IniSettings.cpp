#include "IniSettings.h"

bool Loaded = false;
CSimpleIniA ini;

void LoadIni(HMODULE hModule)
{
    if (Loaded)
        return;
    std::string PathAndName;
    const int BUFSIZE = 4096;
    char buffer[BUFSIZE];
    if (GetModuleFileNameA(hModule, buffer, BUFSIZE - 1) <= 0)
        return;
    PathAndName = buffer;
    size_t found = PathAndName.find_last_of("/\\");
    PathAndName = PathAndName.substr(0, found);
    std::string str{ PathAndName.c_str() };
    str.append("\\settings.ini");
    ini.SetUnicode();

    SI_Error rc = ini.LoadFile(str.c_str());
    if (rc < 0)
        return;
    Loaded = true;
}

int GetWaitTime()
{
    if (!Loaded)
        return 60;
    std::string waitTime = std::string(ini.GetValue("Lobby", "WaitTime", "60"));
    return std::stoi(waitTime);
}

bool IsAirplaneGame()
{
    if (!Loaded)
        return false;
    bool IsAirplane = ini.GetBoolValue("GameMode", "IsAirPlane", false);
    bool IsRandomSpawn = ini.GetBoolValue("GameMode", "IsRandomSpawn", false);
    if (IsAirplane && IsRandomSpawn)
        return false;
    return IsAirplane;
}

bool IsRandomSpawn()
{
    if (!Loaded)
        return false;
    bool IsAirplane = ini.GetBoolValue("GameMode", "IsAirPlane", false);
    bool IsRandomSpawn = ini.GetBoolValue("GameMode", "IsRandomSpawn", false);
    if (IsAirplane && IsRandomSpawn)
        return true;
    return IsRandomSpawn;
}

std::vector<std::string> split(std::string s, std::string delimiter) {
    size_t pos_start = 0, pos_end, delim_len = delimiter.length();
    std::string token;
    std::vector<std::string> res;

    while ((pos_end = s.find(delimiter, pos_start)) != std::string::npos) {
        token = s.substr(pos_start, pos_end - pos_start);
        pos_start = pos_end + delim_len;
        res.push_back(token);
    }

    res.push_back(s.substr(pos_start));
    return res;
}

FVector GetVectorFromConfig(std::string section, std::string key)
{
    if (!Loaded)
        return FVector();

    std::string vectorValue(ini.GetValue(section.c_str(), key.c_str()));
    // check if contains
    auto first = vectorValue.find(", ");
    if (first != std::string::npos)
        return FVector();
    // check if has 2
    auto last = vectorValue.find_last_of(", ");
    if (last != std::string::npos)
        return FVector();
    if (first == last)
        return FVector();

    auto vectorsplitted = split(vectorValue, ", ");

    int vectorX = stoi(vectorsplitted[0]);
    int vectorY = stoi(vectorsplitted[1]);
    int vectorZ = stoi(vectorsplitted[2]);

    return FVector((float)vectorX, (float)vectorY, (float)vectorZ);
}

FVector GetAirplaneStartPos()
{
    return GetVectorFromConfig("Airplane", "StartPos");
}

FVector GetAirplaneEndPos()
{
    return GetVectorFromConfig("Airplane", "EndPos");
}

std::vector<FVector> GetSpawnpoints()
{
    std::vector<FVector> vector{};
    if (!Loaded)
        return vector;
    std::list<CSimpleIniA::Entry> keys{};
    ini.GetAllKeys("AdditionSpawnPoints", keys);
    for (auto& entry : keys)
    {
        vector.push_back(GetVectorFromConfig("AdditionSpawnPoints", entry.pItem));
    }
    return vector;
}

bool CanLatePlay()
{
    if (!Loaded)
        return false;
    return  ini.GetBoolValue("Experimental", "EnableLatePlayerJoin", false);
}