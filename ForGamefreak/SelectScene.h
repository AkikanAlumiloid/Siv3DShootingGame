#pragma once
#include<Siv3D.hpp>
#include<HamFramework.hpp>
#include"GameDefs.h"
class SelectScene : public MyApp::Scene
{
public:
    SelectScene();
    ~SelectScene();
    void init() override;
    void update() override;
    void draw() const override;
};

