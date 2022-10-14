#include "Nguoi.h"

Nguoi::Nguoi()
{
    m_hoTen = " ";
    m_tuoi = 0;
    m_queQuan = " ";
    m_maGV = 0;
}
Nguoi::Nguoi(string hoTen, int tuoi, string queQuan, int maGV)
{
    m_hoTen = hoTen;
    m_tuoi = tuoi;
    m_queQuan = queQuan;
    m_maGV = maGV;
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
void Nguoi::setQueQuan(string queQuan)
{
    m_queQuan = queQuan;
}
string Nguoi::getQueQuan()
{
    return m_queQuan;
}
void Nguoi::setMaGV(int maGV)
{
    m_maGV = maGV;
}
int Nguoi::getmaGV()
{
    return m_maGV;
}
