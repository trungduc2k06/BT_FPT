#ifndef _KHUPHO_H_
#define _KHUPHO_H_

#include "HoGiaDinh.h"

class KhuPho : public HoGiaDinh
{
private:
    vector<HoGiaDinh*> pHoGiaDinh;
public:
    KhuPho();
    KhuPho(vector<HoGiaDinh*> hoGD);
    ~KhuPho();
    void setHoGD(vector<HoGiaDinh*> hoGD);
    vector<HoGiaDinh*> getHoGD();
    void nhapThongTinKhuPho(int soHoGD);
    void xuatThongTinKhuPho();
};

#endif