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
    string m_queQuan;
    int m_maGV;
public:
    Nguoi();
    Nguoi(string hoTen, int tuoi, string queQuan, int maGV);
    ~Nguoi();
    void setHoTen(string hoTen);
    string getHoTen();
    void setTuoi(int tuoi);
    int getTuoi();
    void setQueQuan(string queQuan);
    string getQueQuan();
    void setMaGV(int maGV);
    int getmaGV();
    virtual void nhapThongTinCaNhan();
    virtual void xuatThongTinCaNhan();
};



#endif