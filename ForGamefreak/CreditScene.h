#pragma once
#include<Siv3D.hpp>
#include<HamFramework.hpp>
#include"GameDefs.h"
///<summary>
///�N���W�b�g�\�L
///</summary>
class CreditScene : public MyApp::Scene
{
public:
    CreditScene();
    ~CreditScene();
    void init() override;
    void update() override;
    void draw() const override;
};

