#ifndef _THISINHKHOIC_H_
#define _THISINHKHOIC_H_

#include "ThiSinh.h"

class ThiSinhKhoiC : public ThiSinh
{
private:
    float m_diemVan;
    float m_diemSu;
    float m_diemDia;
public:
    ThiSinhKhoiC();
    ThiSinhKhoiC(float diemVan, float diemSu, float diemDia);
    ~ThiSinhKhoiC();
    void setDiemVan(float diemVan);
    float getDiemVan();
    void setDiemSu(float diemSu);
    float getDiemSu();
    void setDiemDia(float diemDia);
    float getDiemDia();
    int getType();
    void nhapThongTin();
    void xuatThongTin();
};

#endif