#ifndef _HOCSINH_H_
#define _HOCSINH_H_

#include <iostream>
#include <stdio.h>

using namespace std;

class HocSinh
{
private:
    string m_hoTen;
    int m_tuoi;
    string m_queQuan;
public:
    HocSinh();
    HocSinh(string hoTen, int tuoi, string queQuan);
    ~HocSinh();
    void setHoTen(string hoTen);
    string getHoTen();
    void setTuoi(int tuoi);
    int getTuoi();
    void setQueQuan(string queQuan);
    string getQueQuan();
    void nhapThongTinHocSinh();
    void xuatThongTinHocSinh();
};

#endif