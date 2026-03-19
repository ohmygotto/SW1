// Main.cpp

#include <iostream>
#include "Player.h"
#include "Warrior.h"
#include "Magician.h"
#include "Thief.h"
#include "Archer.h"

int main()
{
    std::string jobs[] = { "Warrior", "Magician", "Thief", "Archer" };
    int job_choice = 0;
    std::string nickname;

    Player* player = nullptr;

    std::cout << "Enter your nickname: ";
    std::cin >> nickname;

    std::cout << "Job Change System" << std::endl;
    std::cout << "Welcome " << nickname << std::endl;
    std::cout << "Choose your job" << std::endl;

    for (int i = 0; i < 4; i++)
    {
        std::cout << i + 1 << ". " << jobs[i] << std::endl;
    }

    std::cout << "Select: ";
    std::cin >> job_choice;

    switch (job_choice)
    {
    case 1:
        player = new Warrior(nickname);
        break;

    case 2:
        player = new Magician(nickname);
        break;

    case 3:
        player = new Thief(nickname);
        break;

    case 4:
        player = new Archer(nickname);
        break;

    default:
        std::cout << "Invalid input." << std::endl;
        return 1;
    }

    player->attack();
    player->printPlayerStatus();

    if (player != nullptr)
        delete player;

    return 0;  
}