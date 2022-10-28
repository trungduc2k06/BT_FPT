#ifndef _UI_H_
#define _UI_H_

#include "VanBanController.h"

enum choiceType
{
    cmd_1 = 1,
    cmd_2,
    cmd_3,
    cmd_exit,
};

class UI
{
private:
    VanBanController m_vbCon;
    VanBanIO m_vbIO;
    bool flag = 1;
public:
    UI();
    ~UI();
};

#endif