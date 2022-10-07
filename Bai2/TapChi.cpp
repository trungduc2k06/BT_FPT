#include "TapChi.h"

TapChi::TapChi()
{
    m_soPhatHanh = 0;
    m_thangPhatHanh = 0;
}
TapChi::TapChi(int soPhatHanh, int thangPhatHanh)
{
    m_soPhatHanh = soPhatHanh;
    m_thangPhatHanh = thangPhatHanh;
}
TapChi::~TapChi()
{

}
void TapChi::setSoPhatHanh(int soPhatHanh)
{
    m_soPhatHanh = soPhatHanh;
}
int TapChi::getSoPhatHanh()
{
    return m_soPhatHanh;
}
void TapChi::setThangPhatHanh(int thangPhatHanh)
{
    m_thangPhatHanh = thangPhatHanh;
}
int TapChi::getThangPhatHanh()
{
    return m_thangPhatHanh;
}
int TapChi::getType()
{
    return tapChi;
}
void TapChi::nhapThongTin()
{
    TaiLieu::nhapThongTin();
    cout << "Nhap so phat hanh: ";      
    cin >> m_soPhatHanh;
    cout << "Nhap thang phat hanh: ";   
    cin >> m_thangPhatHanh;
}
void TapChi::xuatThongTin()
{
    TaiLieu::xuatThongTin();
    cout << "So phat hanh: "    << m_soPhatHanh << endl;
    cout << "Thang phat hanh: " << m_thangPhatHanh << endl;
}