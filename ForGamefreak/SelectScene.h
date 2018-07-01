#pragma once
#include<Siv3D.hpp>
#include<HamFramework.hpp>
#include"GameDefs.h"
///<summary>
///キャラ及びステージ選択
///</summary>
class SelectScene : public MyApp::Scene
{
public:
    SelectScene();
    ~SelectScene();
    void init() override;
    void update() override;
    void draw() const override;
};

