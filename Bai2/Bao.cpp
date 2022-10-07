#include "Bao.h"

Bao::Bao()
{
    m_ngayPhatHanh.day = 0;
    m_ngayPhatHanh.month = 0;
    m_ngayPhatHanh.year = 0;
}
Bao::Bao(Date ngayPhatHanh)
{
    m_ngayPhatHanh = ngayPhatHanh;
}
Bao::~Bao()
{

}
void Bao::setNgayPhatHanh(Date ngayPhatHanh)
{
    m_ngayPhatHanh = ngayPhatHanh;
}
Date Bao::getNgayPhatHanh()
{
    return m_ngayPhatHanh;
}
int Bao::getType()
{
    return bao;
}
void Bao::nhapThongTin()
{
    TaiLieu::nhapThongTin();
    cout << "Nhap ngay phat hanh: ";        
    cin >> m_ngayPhatHanh.day;
    cout << "Nhap thang phat hanh: ";
    cin >> m_ngayPhatHanh.month;
    cout << "Nhap nam phat hanh: ";
    cin >> m_ngayPhatHanh.year;
}
void Bao::xuatThongTin()
{
    TaiLieu::xuatThongTin();
    cout << m_ngayPhatHanh.day << "/" << m_ngayPhatHanh.month << "/" << m_ngayPhatHanh.year << endl;
}