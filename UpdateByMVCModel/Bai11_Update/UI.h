#ifndef _UI_H_
#define _UI_H_

#include "SoPhucController.h"

enum choiceType
{
    cmd_add = 1,
    cmd_sub,
    cmd_mul,
    cmd_exit
};

class UI
{
private:
    SoPhucController m_spCon;
    bool flag = 1;
public:
    UI();
    ~UI();
};

#endif 