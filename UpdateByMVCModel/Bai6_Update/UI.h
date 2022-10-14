#ifndef _UI_H_
#define _UI_H_

#include "StudentController.h"

enum typeChoice
{
    choice_1 = 1,
    choice_2, 
    choice_3,
    choice_4,
};

class UI
{
private:
    StudentController stucon;
    bool flag;
public:
    UI();
    ~UI();
};


#endif