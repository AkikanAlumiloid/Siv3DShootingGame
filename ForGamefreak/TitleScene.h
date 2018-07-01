#pragma once
#include<Siv3D.hpp>
#include<HamFramework.hpp>
#include"GameDefs.h"
///<summary>
///タイトル
///</summary>
class TitleScene : public MyApp::Scene
{
public:
    TitleScene();
    ~TitleScene();
    void init() override;
    void update() override;
    void draw() const override;
};

