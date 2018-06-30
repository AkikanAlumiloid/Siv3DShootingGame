#include "SelectScene.h"



SelectScene::SelectScene()
{
}


SelectScene::~SelectScene()
{
}

void SelectScene::init()
{
}

void SelectScene::update()
{
    if(Input::MouseL.clicked)
    {
        ++m_data->score;
        changeScene(SceneName::Game);
    }
}

void SelectScene::draw() const
{
    Window::ClientRect().draw(Palette::Blue);
    m_data->font(L"SELECT:", m_data->score).drawCenter(Window::Center());

}
