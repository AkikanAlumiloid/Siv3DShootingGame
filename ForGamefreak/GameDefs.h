#pragma once
#include <Siv3D.hpp>
#include <HamFramework.hpp>

enum SceneName
{
    Title,
    Select,
    Game,
    Credit,
};
extern struct CommonData
{
    int score = 0;
    Font font{50};
};
using MyApp = SceneManager<SceneName, CommonData>;