#include "ThiSinhKhoiB.h"

ThiSinhKhoiB::ThiSinhKhoiB()
{
    m_diemToan = 0;
    m_diemHoa = 0;
    m_diemSinh = 0;
}
ThiSinhKhoiB::ThiSinhKhoiB(float diemToan, float diemHoa, float diemSinh)
{
    m_diemToan = diemToan;
    m_diemHoa = diemHoa;
    m_diemSinh = diemSinh;
}
ThiSinhKhoiB::~ThiSinhKhoiB()
{

}
void ThiSinhKhoiB::setDiemToan(float diemToan)
{
    m_diemToan = diemToan;
}
float ThiSinhKhoiB::getDiemToan()
{
    return m_diemToan;
}
void ThiSinhKhoiB::setDiemHoa(float diemHoa)
{
    m_diemHoa = diemHoa;
}
float ThiSinhKhoiB::getDiemHoa()
{
    return m_diemHoa;
}
void ThiSinhKhoiB::setDiemSinh(float diemSinh)
{
    m_diemSinh = diemSinh;
}
float ThiSinhKhoiB::getDiemSinh()
{
    return m_diemSinh;
}
int ThiSinhKhoiB::getType()
{
    return khoiB;
}
void ThiSinhKhoiB::nhapThongTin()
{
    ThiSinh::nhapThongTin();
    cout << "Nhap diem Toan: "; 
    cin >> m_diemToan;
    cout << "Nhap diem Hoa: ";  
    cin >> m_diemHoa;
    cout << "Nhap diem Sinh: ";   
    cin >> m_diemSinh;
}
void ThiSinhKhoiB::xuatThongTin()
{
    ThiSinh::xuatThongTin();
    cout << "Diem toan: " << m_diemToan << endl;
    cout << "Diem hoa: " << m_diemHoa << endl;
    cout << "Diem sinh: " << m_diemSinh << endl;
}