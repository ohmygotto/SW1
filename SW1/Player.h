#pragma once
#include <string>
#include <iostream>

class Player {
public:
    Player(std::string nickname);
    virtual ~Player();

    virtual void attack() = 0;

    void printPlayerStatus();

protected:
    std::string job_name;
    std::string nickname;

    int level;
    int HP;
    int MP;
    int power;
    int defence;
    int accuracy;
    int speed;
};