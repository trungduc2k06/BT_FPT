#include "NhanVien.h"

NhanVien::NhanVien()
{
    m_task = " ";
}
NhanVien::NhanVien(string task)
{
    m_task = task;
}
NhanVien::~NhanVien()
{

}
void NhanVien::setTask(string task)
{
    m_task = task;
}
string NhanVien::getTask()
{
    return m_task;
}
int NhanVien::getType()
{
    return nhanVien;
}
void NhanVien::nhapThongTin()
{
    CanBo::nhapThongTin();
    cout << "Cong viec: " ;
    getline(cin, m_task);
}
void NhanVien::xuatThongTin()
{
    CanBo::xuatThongTin();
    cout << "Cong viec: " << m_task << endl;
}