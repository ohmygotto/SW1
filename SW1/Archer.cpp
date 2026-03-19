<<<<<<< HEAD
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
=======
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
>>>>>>> 15d058be05c3c4cbca5d58a21172052a5169165c
}