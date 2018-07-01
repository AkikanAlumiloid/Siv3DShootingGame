#pragma once
#include<Siv3D.hpp>
#include<HamFramework.hpp>
#include"GameDefs.h"
#include"Player.h"
///<summary>
///�Q�[���{��
///</summary>
class GameScene : public MyApp::Scene
{
public:
    GameScene();
    ~GameScene();
    void init() override;
    void update() override;
    void draw() const override;
private:
    Player *player;
};

