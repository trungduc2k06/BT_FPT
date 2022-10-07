#ifndef _SACH_H_
#define _SACH_H_

#include "TaiLieu.h"

class Sach : public TaiLieu
{
private:
    string m_tenTacGia;
    int m_soTrang;
public:
    Sach();
    Sach(string tenTacGia, int soTrang);
    ~Sach();
    void setTenTacGia(string tenTacGia);
    string getTenTacGia();
    void setSoTrang(int soTrang);
    int getSoTrang();
    int getType();
    void nhapThongTin();
    void xuatThongTin();
};

#endif