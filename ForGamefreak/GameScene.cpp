#include "GameScene.h"

GameScene::GameScene()
{
}


GameScene::~GameScene()
{
}

void GameScene::init()
{
}

void GameScene::update()
{
    if(Input::MouseL.clicked)
    {
        ++m_data->counter;
        changeScene(SceneName::Title);
    }
}

void GameScene::draw() const
{
    Window::ClientRect().draw(Palette::Blue);
    m_data->font(L"GAME:", m_data->counter).drawCenter(Window::Center());

}
