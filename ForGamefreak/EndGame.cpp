#include "EndGame.h"



EndGame::EndGame()
{
}


EndGame::~EndGame()
{
}

void EndGame::Init()
{
    //��x���������܂Ȃ��Ɠo�^�ł��Ȃ�
    GUI temp(GUIStyle::Default);
    gui = temp;

    gui.setTitle(L"�V���[�e�B���O�Q�[��");
    gui.addln(GUIText::Create(L"�I�����܂����H"));
    gui.add(L"yes", GUIButton::Create(L"�͂�"));
    gui.add(L"no", GUIButton::Create(L"������"));
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
