#ifndef _NGUOI_H_
#define _NGUOI_H_

#include <iostream>
#include <stdio.h>

using namespace std;
enum loaiPhong
{
    loaiA = 1,
    loaiB,
    loaiC
};
class Nguoi
{
private:
    string m_hoTen;
    int m_tuoi;
    string m_soCMND;
public:
    Nguoi();
    Nguoi(string hoTen, int tuoi, string soCMND);
    ~Nguoi();
    void setHoTen(string hoTen);
    string getHoTen();
    void setTuoi(int tuoi);
    int getTuoi();
    void setSoCMND(string soCMND);
    string getSoCMND();
    virtual void nhapThongTinCaNhan();
    virtual void xuatThongTinCaNhan();
};

#endif
