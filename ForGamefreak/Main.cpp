#include <Siv3D.hpp>
#include <HamFramework.hpp>
#include"GameDefs.h"
#include"TitleScene.h"
#include"GameScene.h"
#include"SelectScene.h"


using MyApp = SceneManager<SceneName, CommonData>;



void Main()
{
    MyApp manager;

    manager.add<TitleScene>(SceneName::Title);
    manager.add<SelectScene>(SceneName::Select);
    manager.add<GameScene>(SceneName::Game);

    while(System::Update())
    {
        manager.updateAndDraw();
    }
}