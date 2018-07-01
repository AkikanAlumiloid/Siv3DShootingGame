#include "Player.h"



Player::Player()
{
    Init();
    setSpeed(10);
}

Player::Player(int speed)
{
    Init();
    setSpeed(speed);
}


Player::~Player()
{
}

//public
void Player::Update()
{
    Move();
    Triangle pplayerGraph(posx, posy, 40.0);
    PlayerGraph = pplayerGraph;
}

void Player::setSpeed(int speed)
{
    this->speed = speed;
}

void Player::Draw()
{
    PlayerGraph.draw();
}

//priavte
void Player::Init()
{
    posx = (int)WINDOW_SIZE_X / 3;
    posy = (int)WINDOW_SIZE_Y / 2;
    Triangle pplayerGraph(posx, posy, 40.0);
    PlayerGraph = pplayerGraph;
}

/// <summary>
/// ÉvÉåÉCÉÑÅ[à⁄ìÆèàóù
/// </summary>
void Player::Move()
{
    //ìØéûÇ®ÇµÇÕîΩâûÇ≥ÇπÇ»Ç¢
    if((Input::KeyRight.pressed && Input::KeyLeft.pressed) || (Input::KeyUp.pressed && Input::KeyDown.pressed))
    {
        return;
    }

    if(Input::KeyRight.pressed)
    {
        
        posx += speed;
        if(posx > WINDOW_SIZE_X)
        {
            posx = WINDOW_SIZE_X;
        }
    }
    if(Input::KeyLeft.pressed)
    {
        posx -= speed;
        if(posx < 0)
        {
            posx = 0;
        }
    }
    if(Input::KeyDown.pressed)
    {
        posy += speed;
        if(posy > WINDOW_SIZE_Y)
        {
            posy = WINDOW_SIZE_Y;
        }
    }
    if(Input::KeyUp.pressed)
    {
        posy -= speed;
        if(posy < 0)
        {
            posy = 0;
        }
    }

}

double Player::getSpeed()
{
    return this->speed;
}
