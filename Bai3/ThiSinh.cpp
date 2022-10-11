#include "ThiSinh.h"

ThiSinh::ThiSinh()
{
    m_soBaoDanh = " ";
    m_hoTen = " ";
    m_diaChi = " ";
    m_mucUuTien = 0;
}
ThiSinh::ThiSinh(string soBaoDanh, string hoTen, string diaChi, int mucUuTien)
{
    m_soBaoDanh = soBaoDanh;
    m_hoTen = hoTen;
    m_diaChi = diaChi;
    m_mucUuTien = mucUuTien;
}
ThiSinh::~ThiSinh()
{

}
void ThiSinh::setSoBaoDanh(string soBaoDanh)
{
    m_soBaoDanh = soBaoDanh;
}
string ThiSinh::getSoBaoDanh()
{
    return m_soBaoDanh;
}
void ThiSinh::setHoTen(string hoTen)
{
    m_hoTen = hoTen;
}
string ThiSinh::getHoTen()
{
    return m_hoTen;
}
void ThiSinh::setDiaChi(string diaChi)
{
    m_diaChi = diaChi;
}
string ThiSinh::getDiaChi()
{
    return m_diaChi;
}
void ThiSinh::setMucUuTien(int mucUuTien)
{
    m_mucUuTien = mucUuTien;
}
int ThiSinh::getMucUuTien()
{
    return m_mucUuTien;
}
int ThiSinh::getType()
{
    return 0;
}
void ThiSinh::nhapThongTin()
{
    cout << "________________INFORMATION__________________"   << endl;
    cout << "___________ Nhap thong tin thi sinh:___________" << endl;
    cout << "Nhap so bao danh: ";   
    getline(cin, m_soBaoDanh);
    cin.ignore(32767, '\n');
    cout << "Nhap ho va ten: ";     
    getline(cin, m_hoTen);
    cout << "Nhap dia chi: ";       
    getline(cin, m_diaChi);
    cout << "Nhap muc uu tien: ";   
    cin >> m_mucUuTien;
}
void ThiSinh::xuatThongTin()
{
    cout << "________________INFORMATION__________________"   << endl;
    cout << "___________ Xuat thong tin thi sinh:___________" << endl;
    cout << "So bao danh: " << m_soBaoDanh  << endl;
    cout << "Ho va ten: "   << m_hoTen      << endl;
    cout << "Dia chi: "     << m_diaChi     << endl;
    cout << "Muc uu tien: " << m_mucUuTien  << endl;
}