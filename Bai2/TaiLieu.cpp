#include "TaiLieu.h"

TaiLieu::TaiLieu()
{
    m_maTaiLieu = 0;
    m_nhaXuatBan = " ";
    m_soBanPhatHanh = 0;
}
TaiLieu::TaiLieu(int maTaiLieu, string nhaXuatBan, int soBanPhatHanh)
{
    m_maTaiLieu = maTaiLieu;
    m_nhaXuatBan = nhaXuatBan;
    m_soBanPhatHanh = soBanPhatHanh;
}
TaiLieu::~TaiLieu()
{

}
void TaiLieu::setMaTaiLieu(int maTaiLieu)
{
    m_maTaiLieu = maTaiLieu;
}
int TaiLieu::getMaTaiLieu()
{
    return m_maTaiLieu;
}
void TaiLieu::setNhaXuatBan(string nhaXuatBan)
{
    m_nhaXuatBan = nhaXuatBan;
}
string TaiLieu::getNhaXuatBan()
{
    return m_nhaXuatBan;
}
void TaiLieu::setSoBanPhatHanh(int soBanPhatHanh)
{
    m_soBanPhatHanh = soBanPhatHanh;
}
int TaiLieu::getSoBanPhatHanh()
{
    return m_soBanPhatHanh;
}
int TaiLieu::getType()
{
    return 0;
}
void TaiLieu::nhapThongTin()
{
    cout << "------------INFORMATION-------------" << endl;
    cout << "-----------Nhap thong tin:----------" << endl;
    cout << "Nhap ma tai lieu: ";           
    cin >> m_maTaiLieu;
    cin.ignore(32767, '\n');
    cout << "Nhap ten nha xuat ban: ";      
    getline(cin, m_nhaXuatBan);
    cout << "Nhap so ban phat hanh: ";     
    cin >> m_soBanPhatHanh;   
}
void TaiLieu::xuatThongTin()
{
    cout << "------------INFORMATION-------------" << endl;
    cout << "-----------Xuat thong tin:----------" << endl;
    cout << "Ma tai lieu: "      << m_maTaiLieu     << endl;
    cout << "Ten nha xuat ban:"  << m_nhaXuatBan << endl;
    cout << "So ban phat hanh: " << m_soBanPhatHanh << endl;
}
