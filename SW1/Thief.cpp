#include "Thief.h"
#include <iostream>

Thief::Thief(std::string nickname) : Player(nickname)
{
    job_name = "Thief";

    std::cout << "You have become a Thief." << std::endl;

    speed = 25;
}

void Thief::attack()
{
    std::cout << "Stabbing quickly with a dagger!" << std::endl;
}