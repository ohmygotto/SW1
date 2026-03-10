#include "Archer.h"
#include <iostream>

Archer::Archer(std::string nickname) : Player(nickname)
{
    job_name = "Archer";

    std::cout << "You have become an Archer." << std::endl;

    accuracy = 20;
}

void Archer::attack()
{
    std::cout << "Firing an arrow!" << std::endl;
}