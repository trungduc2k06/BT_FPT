#ifndef _THISINHKHOIB_H_
#define _THISINHKHOIB_H_

#include "ThiSinh.h"

class ThiSinhKhoiB : public ThiSinh
{
private:
    float m_diemToan;
    float m_diemHoa;
    float m_diemSinh;
public:
    ThiSinhKhoiB();
    ThiSinhKhoiB(float diemToan, float diemHoa, float diemSinh);
    ~ThiSinhKhoiB();
    void setDiemToan(float diemToan);
    float getDiemToan();
    void setDiemHoa(float diemHoa);
    float getDiemHoa();
    void setDiemSinh(float diemSinh);
    float getDiemSinh();
    int getType();
    void nhapThongTin();
    void xuatThongTin();
};

#endif