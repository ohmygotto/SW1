#include "Magician.h"
#include <iostream>

Magician::Magician(std::string nickname) : Player(nickname)
{
    job_name = "Magician";

    std::cout << "You have become a Magician." << std::endl;

    MP = 100;
    power = 18;
}

void Magician::attack()
{
    std::cout << "Casting a magic!" << std::endl;
}