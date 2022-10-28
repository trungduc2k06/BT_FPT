#ifndef _SOPHUCCONTROLLER_H_
#define _SOPHUCCONTROLLER_H_

#include "SoPhucIO.h"

class SoPhucController
{
private:
    SoPhucIO m_sophucIO;
    //SoPhuc m_SP1, m_SP2;
public:
    SoPhucController();
    ~SoPhucController();
    void tong2SoPhuc();
    void hieu2SoPhuc();
    void nhan2SoPhuc();
};

#endif