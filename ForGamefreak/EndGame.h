#pragma once
#include<Siv3D.hpp>
#include<HamFramework.hpp>
#include"GameDefs.h"
///<summary>
///�Q�[���I���m�F
///</summary>
class EndGame
{
public:
    EndGame();
    ~EndGame();
    void Init();
    void TouchEndButton();

private:
    GUI gui;
};

