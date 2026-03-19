#include "Player.h"

Player::Player(std::string nickname)
{
    this->nickname = nickname;

    level = 1;
    HP = 40;
    MP = 30;
    power = 10;
    defence = 5;
    accuracy = 5;
    speed = 5;
}

Player::~Player()
{
}

void Player::printPlayerStatus()
{
    std::cout << "------------------------------------" << std::endl;
    std::cout << "Current Status" << std::endl;
    std::cout << "Nickname: " << nickname << std::endl;
    std::cout << "Job: " << job_name << std::endl;
    std::cout << "Lv. " << level << std::endl;
    std::cout << "HP: " << HP << std::endl;
    std::cout << "MP: " << MP << std::endl;
    std::cout << "Power: " << power << std::endl;
    std::cout << "Defence: " << defence << std::endl;
    std::cout << "Accuracy: " << accuracy << std::endl;
    std::cout << "Speed: " << speed << std::endl;
    std::cout << "------------------------------------" << std::endl;
}