<<<<<<< HEAD
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
=======
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
>>>>>>> 15d058be05c3c4cbca5d58a21172052a5169165c
}