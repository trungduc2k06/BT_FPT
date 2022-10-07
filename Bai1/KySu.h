#ifndef _KYSU_H_
#define _KYSU_H_

#include "CanBo.h"

class KySu : public CanBo
{
private:
    string m_major;
public:
    KySu();
    KySu(string major);
    ~KySu();
    void setMajor(string major);
    string getMajor();
    int getType();
    void nhapThongTin();
    void xuatThongTin();
};

#endif 