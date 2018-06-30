#include "TitleScene.h"

TitleScene::TitleScene()
{
}


TitleScene::~TitleScene()
{
}

void TitleScene::init()
{
}

void TitleScene::update()
{
    if(Input::MouseL.clicked)
    {
        ++m_data->score;
        changeScene(SceneName::Select);
    }
}

void TitleScene::draw() const
{

    Window::ClientRect().draw(Palette::Blue);
    m_data->font(L"TITLE:", m_data->score).drawCenter(Window::Center());

}