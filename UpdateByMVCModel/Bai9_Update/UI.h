#ifndef _UI_H_
#define _UI_H_

#include "ReceiptController.h"

enum choiceType
{
    cmd_add = 1,
    cmd_show,
    cmd_delete,
    cmd_exit,
};

class UI
{
private:
    ReceiptController recCon;
    bool flag = 1;
public:
    UI();
    ~UI();
};

#endif