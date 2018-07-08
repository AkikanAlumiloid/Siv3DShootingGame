#include "Shot.h"



Shot::Shot()
{
}

Shot::Shot(int x, int y, int speed, int power)
{
    this->posx = x;
    this->posy = y;
    this->speed = speed;
    this->power = power;
    setDestroyTime(SHOT_DESTROY_TIME);
}


Shot::~Shot()
{
}

void Shot::Draw()
{
    Triangle(posx - 5, posy - 5, posx + 5, posy, posx - 5, posy + 5).draw();
}

void Shot::Update()
{
    this->posx += this->speed;

    DecrementDestroyTime();

    //��ʊO�ɏo���炱�̒e�����������𑵂���
    if((posx - 10 > WINDOW_SIZE_X || posx + 10 < 0) || (posy - 10 > WINDOW_SIZE_Y || posy + 10 < 0))
    {
        setDestroyTime(0);
    }
}

int Shot::getDestroyTime()
{
    return destroyTime;
}

void Shot::setDestroyTime(int destroy)
{
    this->destroyTime = destroy;
}

void Shot::DecrementDestroyTime()
{
    this->destroyTime--;
}

