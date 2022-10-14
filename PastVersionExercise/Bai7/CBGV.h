#ifndef _CBGV_H_
#define _CBGV_H_

#include "Nguoi.h"

class CBGV : public Nguoi
{
private:
    int m_luongCung;
    int m_luongThuong;
    int m_tienPhat;
    int m_tongLuong;
public:
    CBGV();
    CBGV(int luongCung, int luongThuong, int tienPhat, int tongLuong);
    ~CBGV();
    void setLuongCung(int luongCung);
    int getLuongCung();
    void setLuongThuong(int luongThuong);
    int getLuongThuong();
    void setTienPhat(int tienPhat);
    int getTienPhat();
    int getTongLuong();
    void nhapThongTinCaNhan();
    void xuatThongTinCaNhan();
};


#endif