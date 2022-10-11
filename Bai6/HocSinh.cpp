#include "HocSinh.h"

HocSinh::HocSinh()
{
    m_hoTen = " ";
    m_tuoi = 0;
    m_queQuan = " ";
}
HocSinh::HocSinh(string hoTen, int tuoi, string queQuan)
{
    m_hoTen = hoTen;
    m_tuoi = tuoi;
    m_queQuan = queQuan;
}
HocSinh::~HocSinh()
{

}
void HocSinh::setHoTen(string hoTen)
{
    m_hoTen = hoTen;
}
string HocSinh::getHoTen()
{
    return m_hoTen;
}
void HocSinh::setTuoi(int tuoi)
{
    m_tuoi = tuoi;
}
int HocSinh::getTuoi()
{
    return m_tuoi;
}
void HocSinh::setQueQuan(string queQuan)
{
    m_queQuan = queQuan;
}
string HocSinh::getQueQuan()
{
    return m_queQuan;
}
