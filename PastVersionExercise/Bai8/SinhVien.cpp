#include "SinhVien.h"

SinhVien::SinhVien()
{
    m_hoTen = " ";
    m_tuoi = 0;
    m_lop = " ";
}
SinhVien::SinhVien(string hoTen, int tuoi, string lop)
{
    m_hoTen = hoTen;
    m_tuoi = tuoi;
    m_lop = lop;
}
SinhVien::~SinhVien()
{

}
void SinhVien::setHoTen(string hoTen)
{
    m_hoTen = hoTen;
}
string SinhVien::getHoTen()
{
    return m_hoTen;
}
void SinhVien::setTuoi(int tuoi)
{
    m_tuoi = tuoi;
}
int SinhVien::getTuoi()
{
    return m_tuoi;
}
void SinhVien::setLop(string lop)
{
    m_lop = lop;
}
string SinhVien::getLop()
{
    return m_lop;
}
