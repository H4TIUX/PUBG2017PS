#include "Spawnpoints.h"
int min_max_point = 30000;

std::vector<FVector> ExistingSpawnpoints =
{
    FVector(123000, 143400, 10000), // Zharki near field
    FVector(419600, 122900, 10000), // next to Severny
    FVector(573400, 30800, 10000), // N�vtelen, hegy m�g�tti
    FVector(650000, 102400, 10000), // Kameshki mellett
    FVector(667100, 166900, 10000), // N�vtelen, hegy melletti
    FVector(672200, 328900, 10000), // Limovkai hegytet�
    FVector(686100, 471200, 10000), // Mylta power
    FVector(563000, 481300, 10000), // Mylta v�rois �s farm k�z�tt
    FVector(450000, 450000, 10000), // Farm �s poschinki k�z�tt
    FVector(270000, 490000, 10000), // Farmlands �s k�rny�ke
    FVector(150000, 550000, 10000), // Primorsk felett
    FVector(170000, 390000, 10000), // Gatka , hay farm �s Gatka radio k�z�tt
    FVector(200000, 267000, 10000), // Hospital �s hgeorgopol k�z�tt.

    FVector(420000, 300000, 10000), // School, Rozhok, �s k�rny�ke
    FVector(590000, 250000, 10000), // Yasnaya Poliana �s Mansion k�z�tti r�sz
    FVector(650000, 320000, 10000), // Mansion �s lipovka k�ze
    FVector(600000, 370000, 10000), // Prison �s Shelter k�z�tt
    FVector(580000, 420000, 10000), // Farm mylta prison shelter k�z�tti r�sz 4 sz�g vonal k�zepe
    FVector(480000, 440000, 10000), // Farm melletti k�rny�k sok faluval
    FVector(420000, 390000, 10000), // Pochinki hills hegytet� sok a v�ros k�r�l�tte
    FVector(226000, 380000, 10000), // Gatka �s k�rny�ke
    FVector(318000, 318000, 10000), // Ruins
    FVector(430000, 185000, 10000), // East bunkes �s Yasnaya k�z�tti r�sz
    FVector(318000, 185000, 10000), // Gun range Plane crach k�ze, hegytet�

    //FVector(0,0,0), // test
};

int random(int min, int max)
{
    std::random_device rd; // obtain a random number from hardware
    std::mt19937 gen(rd()); // seed the generator
    std::uniform_int_distribution<> distr(min, max);
    return distr(gen);
}

FVector RandomVector_FromExisting()
{
    std::random_device rd; // obtain a random number from hardware
    std::mt19937 gen(rd()); // seed the generator
    std::uniform_int_distribution<> distr(0, (int)ExistingSpawnpoints.size());
    auto random = distr(gen);
    return ExistingSpawnpoints[random];
}

FVector RandomizingVector(FVector vector)
{
    vector.X = (float)random((int)vector.X - min_max_point, (int)vector.X + min_max_point);
    vector.Y = (float)random((int)vector.Y - min_max_point, (int)vector.Y + min_max_point);
    return vector;
}

void InitSpawnpoints()
{
    auto points = GetSpawnpoints();
    for (auto point : points)
    {
        ExistingSpawnpoints.push_back(point);
    }
}

FVector GetRandomPoint()
{
    FVector return_vector = RandomVector_FromExisting();
    return_vector = RandomizingVector(return_vector);
    return return_vector;
}