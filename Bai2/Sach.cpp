#include "Sach.h"

Sach::Sach()
{
    m_tenTacGia = " ";
    m_soTrang = 0;
}
Sach::Sach(string tenTacGia, int soTrang)
{
    m_tenTacGia = tenTacGia;
    m_soTrang = soTrang;
}
Sach::~Sach()
{

}
void Sach::setTenTacGia(string tenTacGia)
{
    m_tenTacGia = tenTacGia;
}
string Sach::getTenTacGia()
{
    return m_tenTacGia;
}
void Sach::setSoTrang(int soTrang)
{
    m_soTrang = soTrang;
}
int Sach::getSoTrang()
{
    return m_soTrang;
}
int Sach::getType()
{
    return sach;
}
void Sach::nhapThongTin()
{
    TaiLieu::nhapThongTin();
    cin.ignore(32767, '\n');
    cout << "Nhap ten tac gia: ";       
    getline(cin, m_tenTacGia);
    cout << "Nhap so trang: ";          
    cin >> m_soTrang;
}
void Sach::xuatThongTin()
{
    TaiLieu::xuatThongTin();
    cout << "Ten tac gia: " << m_tenTacGia << endl;
    cout << "So trang: "    << m_soTrang   << endl;
}