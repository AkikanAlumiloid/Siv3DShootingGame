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

//--------------------------------------------------
//public
void Player::Update()
{
    Move();
    Shot();
}

void Player::setSpeed(int speed)
{
    this->speed = speed;
}

double Player::getSpeed()
{
    return this->speed;
}

///<summary>
///描画処理
///</summary>
void Player::Draw()
{
    Triangle(posx - 10, posy - 10, posx + 10, posy, posx - 10, posy + 10).draw();
    
    for(int i = 0; i < vectorShot.size(); i++)
    {
        vectorShot[i].Draw();
    }
}

//--------------------------------------------------
//priavte
///<summary>
///初期化設定
///</summary>
void Player::Init()
{
    posx = WINDOW_SIZE_X / 3;
    posy = WINDOW_SIZE_Y / 2;
    shotCount = 30;
    shotInterval = 30;// ショット間隔
    shotMaxExists = 5;//画面上に存在できるプレイヤーショット数
    shotSpeed = 20;
    shotPower = 1;
}

/// <summary>
/// プレイヤー移動処理
/// </summary>
void Player::Move()
{
#pragma region 移動処理
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
#pragma endregion
}

///<summary>
///発射処理
///</summary>
void Player::Shot()
{
    //発射
    if(Input::KeyZ.pressed)
    {
        //インターバルに沿ったタイミングかつ存在可能数以下ならば発射
        if(shotCount % shotInterval == 0 && vectorShot.size() <= shotMaxExists)
        {
            //弾生成
            vectorShot.push_back(::Shot(this->posx, this->posy, this->shotSpeed, this->shotPower));
            shotCount = 1;
        }
        shotCount++;
    }
    
    //発射した弾の更新
    for(int i = 0; i < vectorShot.size(); i++)
    {
        vectorShot[i].Update();

        //削除確定時間になったら該当する弾を削除する
        if(vectorShot[i].getDestroyTime() <= 0)
        {
            vectorShot.erase(vectorShot.begin() + i);
        }
    }
}
