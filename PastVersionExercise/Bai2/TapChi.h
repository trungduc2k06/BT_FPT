#ifndef _TAPCHI_H_
#define _TAPCHI_H_

#include "TaiLieu.h"

class TapChi : public TaiLieu
{
private:
    int m_soPhatHanh;
    int m_thangPhatHanh;
public:
    TapChi();
    TapChi(int soPhatHanh, int thangPhatHanh);
    ~TapChi();
    void setSoPhatHanh(int soPhatHanh);
    int getSoPhatHanh();
    void setThangPhatHanh(int thangPhatHanh);
    int getThangPhatHanh();
    int getType();
    void nhapThongTin();
    void xuatThongTin();
};

#endif