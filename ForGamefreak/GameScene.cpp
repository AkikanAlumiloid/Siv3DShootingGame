#include "GameScene.h"

GameScene::GameScene()
{
    player = new Player();
}


GameScene::~GameScene()
{
    delete player;
}

void GameScene::init()
{
    
}

void GameScene::update()
{
    player->Update();
    //debug
    if(Input::MouseL.clicked)
    {
        ++m_data->score;
        changeScene(SceneName::Title);
    }
}

void GameScene::draw() const
{
    Window::ClientRect().draw(Palette::Blue);
    m_data->font(L"GAME:", m_data->score).drawCenter(Window::Center());
    player->Draw();
    
}
