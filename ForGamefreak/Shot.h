#pragma once
#include"GameDefs.h"
#include<Siv3D.hpp>
///<summary>
///プレイヤーキャラの発射する弾クラス
///</summary>
class Shot
{
public:
    Shot();
    Shot(int x, int y, int speed, int power);
    ~Shot();
    void Draw();
    void Update();
    int getDestroyTime();
private:
    int posx;
    int posy;
    int speed;
    int power;
    int destroyTime;
    void setDestroyTime(int destroy);
    void DecrementDestroyTime();
};

