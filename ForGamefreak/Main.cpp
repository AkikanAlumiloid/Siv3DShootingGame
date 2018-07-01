#include <Siv3D.hpp>
#include <HamFramework.hpp>
#include"GameDefs.h"
#include"EndGame.h"
#include"TitleScene.h"
#include"GameScene.h"
#include"SelectScene.h"

void Main()
{
    Window::Resize(WINDOW_SIZE_X, WINDOW_SIZE_Y);

    //シーン登録処理
    MyApp manager;

    manager.add<TitleScene>(SceneName::Title);
    manager.add<SelectScene>(SceneName::Select);
    manager.add<GameScene>(SceneName::Game);

    //終了時確認処理
    EndGame endGame;
    endGame.Init();

    while(System::Update())
    {
        endGame.TouchEndButton();
        manager.updateAndDraw();
    }
}