#ifndef _VANBANCONTROLLER_H_
#define _VANBANCONTROLLER_H_

#include "VanBanIO.h"
#include "VanBan.h"
#include <vector>

class VanBanController
{
private:
    VanBanIO m_vanBanIO;
public:
    VanBanController();
    ~VanBanController();
    int demSoTu();
    int demSoKyTu();
    string chuanHoaVanBan();
};

#endif