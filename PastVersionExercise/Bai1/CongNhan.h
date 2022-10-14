#ifndef _CONGNHAN_H_
#define _CONGNHAN_H_

#include "CanBo.h"

class CongNhan : public CanBo
{
    private:
        string m_level;
    public:
        CongNhan();
        CongNhan(string level);
        ~CongNhan();
        void setLevel(string level);
        string getLevel();
        int getType();
        void nhapThongTin();
        void xuatThongTin();
};


#endif 