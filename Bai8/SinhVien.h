#ifndef _SINHVIEN_H_
#define _SINHVIEN_H_

#include <iostream>
#include <stdio.h>

using namespace std;

class SinhVien
{
    private:
        string m_hoTen;
        int m_tuoi;
        string m_lop;
    public:
        SinhVien();
        SinhVien(string hoTen, int tuoi, string lop);
        ~SinhVien();
        void setHoTen(string hoTen);
        string getHoTen();
        void setTuoi(int tuoi);
        int getTuoi();
        void setLop(string lop);
        string getLop();
        virtual void nhapThongTinSinhVien();
        virtual void xuatThongTinSinhVien();
};

#endif