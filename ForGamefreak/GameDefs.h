#pragma once
#include <Siv3D.hpp>
#include <HamFramework.hpp>

enum SceneName
{
    Title,
    Select,
    Game,
    Credit,
    End,
};
extern struct CommonData
{
    int score = 0;
    Font font{50};
};
using MyApp = SceneManager<SceneName, CommonData>;

const int WINDOW_SIZE_X = 1280;
const int WINDOW_SIZE_Y = 720;