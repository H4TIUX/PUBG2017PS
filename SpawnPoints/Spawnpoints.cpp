#include "Spawnpoints.h"
int min_max_point = 30000;

// Credits to Detanup01 for the spawn positions

std::vector<FVector> ExistingSpawnpoints =
{
    FVector(123000, 143400, 10000), // Zharki near field
    FVector(419600, 122900, 10000), // next to Severny
    FVector(573400, 30800, 10000), // Névtelen, hegy mögötti
    FVector(650000, 102400, 10000), // Kameshki mellett
    FVector(667100, 166900, 10000), // Névtelen, hegy melletti
    FVector(672200, 328900, 10000), // Limovkai hegytetõ
    FVector(686100, 471200, 10000), // Mylta power
    FVector(563000, 481300, 10000), // Mylta várois és farm között
    FVector(450000, 450000, 10000), // Farm és poschinki között
    FVector(270000, 490000, 10000), // Farmlands és környéke
    FVector(150000, 550000, 10000), // Primorsk felett
    FVector(170000, 390000, 10000), // Gatka , hay farm és Gatka radio között
    FVector(200000, 267000, 10000), // Hospital és hgeorgopol között.

    FVector(420000, 300000, 10000), // School, Rozhok, és környéke
    FVector(590000, 250000, 10000), // Yasnaya Poliana és Mansion közötti rész
    FVector(650000, 320000, 10000), // Mansion és lipovka köze
    FVector(600000, 370000, 10000), // Prison és Shelter között
    FVector(580000, 420000, 10000), // Farm mylta prison shelter közötti rész 4 szög vonal közepe
    FVector(480000, 440000, 10000), // Farm melletti környék sok faluval
    FVector(420000, 390000, 10000), // Pochinki hills hegytetõ sok a város körülötte
    FVector(226000, 380000, 10000), // Gatka és környéke
    FVector(318000, 318000, 10000), // Ruins
    FVector(430000, 185000, 10000), // East bunkes és Yasnaya közötti rész
    FVector(318000, 185000, 10000), // Gun range Plane crach köze, hegytetõ
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
    vector.X = random(vector.X - min_max_point, vector.X + min_max_point);
    vector.Y = random(vector.Y - min_max_point, vector.Y + min_max_point);
    return vector;
}

FVector GetRandomPoint()
{
    FVector return_vector = RandomVector_FromExisting();
    return_vector = RandomizingVector(return_vector);
    return return_vector;
}