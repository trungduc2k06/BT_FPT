#include "ThiSinhKhoiA.h"

ThiSinhKhoiA::ThiSinhKhoiA()
{
    m_diemToan = 0;
    m_diemLy = 0;
    m_diemHoa = 0;
}
ThiSinhKhoiA::ThiSinhKhoiA(float diemToan, float diemLy, float diemHoa)
{
    m_diemToan = diemToan;
    m_diemLy = diemLy;
    m_diemHoa = m_diemHoa;
}
ThiSinhKhoiA::~ThiSinhKhoiA()
{

}
void ThiSinhKhoiA::setDiemToan(float diemToan)
{
    m_diemToan = diemToan;
}
float ThiSinhKhoiA::getDiemToan()
{
    return m_diemToan;
}
void ThiSinhKhoiA::setDiemLy(float diemLy)
{
    m_diemLy = diemLy;
}
float ThiSinhKhoiA::getDiemLy()
{
    return m_diemLy;
}
void ThiSinhKhoiA::setDiemHoa(float diemHoa)
{
    m_diemHoa = diemHoa;
}
float ThiSinhKhoiA::getDiemHoa()
{
    return m_diemHoa;
}
int ThiSinhKhoiA::getType()
{
    return khoiA;
}
void ThiSinhKhoiA::nhapThongTin()
{
    ThiSinh::nhapThongTin();
    cout << "Nhap diem Toan: "; 
    cin >> m_diemToan;
    cout << "Nhap diem Ly: ";   
    cin >> m_diemLy;
    cout << "Nhap diem Hoa: ";  
    cin >> m_diemHoa;
}
void ThiSinhKhoiA::xuatThongTin()
{
    ThiSinh::xuatThongTin();
    cout << "Diem toan: " << m_diemToan << endl;
    cout << "Diem ly: " << m_diemLy << endl;
    cout << "Diem hoa: " << m_diemHoa << endl;
}