#include "Nguoi.h"

Nguoi::Nguoi()
{
    m_hoTen = " ";
    m_tuoi = 0;
    m_ngheNghiep = " ";
    m_soCMND = " ";
}
Nguoi::Nguoi(string hoTen, int tuoi, string ngheNghiep, string soCMND)
{
    m_hoTen = hoTen;
    m_tuoi = tuoi;
    m_ngheNghiep = ngheNghiep;
    m_soCMND = soCMND;
}
Nguoi::~Nguoi()
{

}
void Nguoi::setHoTen(string hoTen)
{
    m_hoTen = hoTen;
}
string Nguoi::getHoTen()
{
    return m_hoTen;
}
void Nguoi::setTuoi(int tuoi)
{
    m_tuoi = tuoi;
}
int Nguoi::getTuoi()
{
    return m_tuoi;
}
void Nguoi::setNgheNghiep(string ngheNghiep)
{
    m_ngheNghiep = ngheNghiep;
}
string Nguoi::getNgheNghiep()
{
    return m_ngheNghiep;
}
void Nguoi::setSoCMND(string soCMND)
{
    m_soCMND = soCMND;
}
string Nguoi::getSoCMND()
{
    return m_soCMND;
}
