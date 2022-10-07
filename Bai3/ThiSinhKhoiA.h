#ifndef _THISINHKHOIA_H_
#define _THISINHKHOIA_H_

#include "ThiSinh.h"

class ThiSinhKhoiA : public ThiSinh
{
private:
    float m_diemToan;
    float m_diemLy;
    float m_diemHoa;
public:
    ThiSinhKhoiA();
    ThiSinhKhoiA(float diemToan, float diemLy, float diemHoa);
    ~ThiSinhKhoiA();
    void setDiemToan(float diemToan);
    float getDiemToan();
    void setDiemLy(float diemLy);
    float getDiemLy();
    void setDiemHoa(float diemHoa);
    float getDiemHoa();
    int getType();
    void nhapThongTin();
    void xuatThongTin();
};

#endif