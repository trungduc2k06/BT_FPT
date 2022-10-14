#include "ThiSinhKhoiC.h"

ThiSinhKhoiC::ThiSinhKhoiC()
{
    m_diemVan = 0;
    m_diemSu = 0;
    m_diemDia = 0;
}
ThiSinhKhoiC::ThiSinhKhoiC(float diemVan, float diemSu, float diemDia)
{
    m_diemVan = diemVan;
    m_diemSu = diemSu;
    m_diemDia = diemDia;
}
ThiSinhKhoiC::~ThiSinhKhoiC()
{

}
void ThiSinhKhoiC::setDiemVan(float diemVan)
{
    m_diemVan = diemVan;
}
float ThiSinhKhoiC::getDiemVan()
{
    return m_diemVan;
}
void ThiSinhKhoiC::setDiemSu(float diemSu)
{
    m_diemSu = diemSu;
}
float ThiSinhKhoiC::getDiemSu()
{
    return m_diemSu;
}
void ThiSinhKhoiC::setDiemDia(float diemDia)
{
    m_diemDia = diemDia;
}
float ThiSinhKhoiC::getDiemDia()
{
    return m_diemDia;
}
int ThiSinhKhoiC::getType()
{
    return khoiC;
}
void ThiSinhKhoiC::nhapThongTin()
{
    ThiSinh::nhapThongTin();
    cout << "Nhap diem Van: "; 
    cin >> m_diemVan;
    cout << "Nhap diem Su: ";  
    cin >> m_diemSu;
    cout << "Nhap diem Dia: ";   
    cin >> m_diemDia;
}
void ThiSinhKhoiC::xuatThongTin()
{
    ThiSinh::xuatThongTin();
    cout << "Diem van: " << m_diemVan << endl;
    cout << "Diem su: " << m_diemSu << endl;
    cout << "Diem dia: " << m_diemDia << endl;
}