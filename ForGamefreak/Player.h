#pragma once
#include<Siv3D.hpp>
#include"GameDefs.h"
#include "Shot.h"
#include <vector>
class Player
{
public:
    Player();
    Player(int speed);
    ~Player();
    void Draw();
    void Update();
    double getSpeed();
    void setSpeed(int speed);
private:
    void Init();
    void Move();
    void Shot();
    int posx, posy;
    int speed;
    int shotCount;
    int shotInterval;
    int shotMaxExists;
    int shotSpeed;
    int shotPower;
    std::vector<::Shot> vectorShot;
};
