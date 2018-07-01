#include "EndGame.h"



EndGame::EndGame()
{
}


EndGame::~EndGame()
{
}

void EndGame::Init()
{
    //一度処理を挟まないと登録できない
    GUI temp(GUIStyle::Default);
    gui = temp;

    gui.setTitle(L"シューティングゲーム");
    gui.addln(GUIText::Create(L"終了しますか？"));
    gui.add(L"yes", GUIButton::Create(L"はい"));
    gui.add(L"no", GUIButton::Create(L"いいえ"));
    gui.setCenter(Window::Center());
    gui.hide();
    System::SetExitEvent(WindowEvent::Manual);
}

void EndGame::TouchEndButton()
{
    if((System::GetPreviousEvent() & WindowEvent::CloseButton) || (System::GetPreviousEvent() & WindowEvent::EscapeKey))
    {
        gui.show();
    }

    if(gui.button(L"yes").pushed)
    {
        System::Exit();
    }
    else if(gui.button(L"no").pushed)
    {
        gui.hide();
    }
}
