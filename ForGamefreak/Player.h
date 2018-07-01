#pragma once
#include<Siv3D.hpp>
#include"GameDefs.h"
class Player
{
public:
    Player();
    Player(int speed);
    ~Player();
    void Draw();
    void Update();
    void setSpeed(int speed);
private:
    Triangle PlayerGraph;
    void Init();
    void Move();
    double posx, posy;
    double getSpeed();
    double speed;
};