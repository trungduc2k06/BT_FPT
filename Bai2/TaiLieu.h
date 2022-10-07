#ifndef _TAILIEU_H_
#define _TAILIEU_H_

#include <iostream>
#include <string>

using namespace std;

enum typeTaiLieu
{
    sach = 1,
    tapChi,
    bao,
};

class TaiLieu
{
private:
    int m_maTaiLieu;
    string m_nhaXuatBan;
    int m_soBanPhatHanh;
public:
    TaiLieu();
    TaiLieu(int maTaiLieu, string nhaXuatBan, int soBanPhatHanh);
    ~TaiLieu();
    void setMaTaiLieu(int maTaiLieu);
    int getMaTaiLieu();
    void setNhaXuatBan(string nhaXuatBan);
    string getNhaXuatBan();
    void setSoBanPhatHanh(int soBanPhatHanh);
    int getSoBanPhatHanh();
    virtual int getType() = 0;
    virtual void nhapThongTin();
    virtual void xuatThongTin();
};

#endif 