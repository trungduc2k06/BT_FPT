#include "KySu.h"

KySu::KySu()
{
    m_major = " ";
}
KySu::KySu(string major)
{
    m_major = major;
}
KySu::~KySu()
{

}
void KySu::setMajor(string major)
{
    m_major = major;
}
string KySu::getMajor()
{
    return m_major;
}
int KySu::getType()
{
    return kySu;
}
void KySu::nhapThongTin()
{
    CanBo::nhapThongTin();
    cout << "Nganh dao tao: ";
    getline(cin, m_major);
}
void KySu::xuatThongTin()
{
    CanBo::xuatThongTin();
    cout << "Nganh dao tao: " << m_major << endl;
}
