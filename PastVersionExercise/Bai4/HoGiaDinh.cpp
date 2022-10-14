#include "HoGiaDinh.h"

HoGiaDinh::HoGiaDinh()
{
    m_soNha = 0;
}
HoGiaDinh::HoGiaDinh(vector<Nguoi*> thanhVien, int soNha)
{
    pThanhVien = thanhVien;
    m_soNha = soNha;
}
HoGiaDinh::~HoGiaDinh()
{
    for (int i = 0; i < pThanhVien.size(); i++)
    {
        delete pThanhVien[i];
    }
}
void HoGiaDinh::setThanhVien(vector<Nguoi*> thanhVien)
{
    pThanhVien = thanhVien;
}
vector<Nguoi*> HoGiaDinh::getThanhVien()
{
    return pThanhVien;
}
void HoGiaDinh::setSoNha(int soNha)
{
    m_soNha = soNha;
}
int HoGiaDinh::getSoNha()
{
    return m_soNha;
}