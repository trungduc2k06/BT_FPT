#include "CongNhan.h"

CongNhan::CongNhan()
{
    m_level = " ";
}
CongNhan::CongNhan(string level)
{
    m_level = level;
}
CongNhan::~CongNhan()
{

}
void CongNhan::setLevel(string level)
{
    m_level = level;
}
string CongNhan::getLevel()
{
    return m_level;
}
int CongNhan::getType()
{
    return congNhan;
}
void CongNhan::nhapThongTin()
{
    CanBo::nhapThongTin();
    cout << "Bac: " ;
    getline(cin, m_level);
}
void CongNhan::xuatThongTin()
{
    CanBo::xuatThongTin();
    cout << "Bac: " << m_level << endl;
}
