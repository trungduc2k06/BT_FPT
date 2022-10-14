#ifndef _NGUOI_H_
#define _NGUOI_H_

#include <iostream>
#include <stdio.h>

using namespace std;

class Nguoi
{
private:
    string m_hoTen;
    int m_tuoi;
    string m_ngheNghiep;
    string m_soCMND;
public:
    Nguoi();
    Nguoi(string hoTen, int tuoi, string ngheNghiep, string soCMND);
    ~Nguoi();
    void setHoTen(string hoTen);
    string getHoTen();
    void setTuoi(int tuoi);
    int getTuoi();
    void setNgheNghiep(string ngheNghiep);
    string getNgheNghiep();
    void setSoCMND(string soCMND);
    string getSoCMND();
    void nhapThongTinCaNhan();
    void xuatThongTinCaNhan();
};



#endif