#ifndef _THISINH_H_
#define _THISINH_H_

#include <iostream>
#include <string>

using namespace std;

enum khoiThi
{
    khoiA = 1,
    khoiB,
    khoiC,
};

class ThiSinh
{
    private:
        string m_soBaoDanh;
        string m_hoTen;
        string m_diaChi;
        int m_mucUuTien;
    public:
        ThiSinh();
        ThiSinh(string soBaoDanh, string hoTen, string diaChi, int mucUuTien);
        ~ThiSinh();
        void setSoBaoDanh(string soBaoDanh);
        string getSoBaoDanh();
        void setHoTen(string hoTen);
        string getHoTen();
        void setDiaChi(string diaChi);
        string getDiaChi();
        void setMucUuTien(int mucUuTien);
        int getMucUuTien();
        virtual int getType() = 0;
        virtual void nhapThongTin();
        virtual void xuatThongTin();
};

#endif