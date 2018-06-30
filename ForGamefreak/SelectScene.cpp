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
        ++m_data->counter;
        changeScene(SceneName::Game);
    }
}

void SelectScene::draw() const
{
    Window::ClientRect().draw(Palette::Blue);
    m_data->font(L"SELECT:", m_data->counter).drawCenter(Window::Center());

}
