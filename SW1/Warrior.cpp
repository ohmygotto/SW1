<<<<<<< HEAD
#include "Warrior.h"
#include <iostream>

Warrior::Warrior(std::string nickname) : Player(nickname)
{
    job_name = "Warrior";

    std::cout << "You have become a Warrior." << std::endl;

    HP = 100;
    power = 17;
}

void Warrior::attack()
{
    std::cout << "Swinging a great sword!" << std::endl;
=======
#include "Warrior.h"
#include <iostream>

Warrior::Warrior(std::string nickname) : Player(nickname)
{
    job_name = "Warrior";

    std::cout << "You have become a Warrior." << std::endl;

    HP = 100;
    power = 17;
}

void Warrior::attack()
{
    std::cout << "Swinging a great sword!" << std::endl;
>>>>>>> 15d058be05c3c4cbca5d58a21172052a5169165c
}