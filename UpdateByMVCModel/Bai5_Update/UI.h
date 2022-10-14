#ifndef _UI_H_
#define _UI_H_

#include "HotelController.h"

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
    HotelController hotelcon;
    bool flag = 1;
public:
    UI();
    ~UI();
};


#endif