#include "CanBo.h"

CanBo::CanBo()
{
    m_name = " ";
    m_age = 0;
    m_gender = " ";
    m_address = " ";
}
CanBo::CanBo(string name, int age, string gender, string address)
{
    m_name = name;
    m_age = age;
    m_gender = gender;
    m_address = address;
}
CanBo::~CanBo()
{

}
void CanBo::setName(string name)
{
    m_name = name;
}
string CanBo::getName()
{
    return m_name;
}
void CanBo::setAge(int age)
{
    m_age = age;
}
int CanBo::getAge()
{
    return m_age;
}
void CanBo::setGender(string gender)
{
    m_gender = gender;
}
string CanBo::getGender()
{
    return m_gender;
}
void CanBo::setAddress(string address)
{
    m_address = address;
}
string CanBo::getAddress()
{
    return m_address;
}
int CanBo::getType()
{
    return 0;
}
void CanBo::nhapThongTin()
{
    cout << "------------INFORMATION-------------" << endl;
    cout << "-----------Nhap thong tin:----------" << endl;
    cout << "Ho va Ten: ";
    getline(cin, m_name);
    cin.ignore(32767, '\n');
    cout << "Tuoi: ";
    cin >> m_age;
    cin.ignore(32767, '\n');
    cout << "Gioi tinh: ";
    getline(cin, m_gender);
    cin.ignore(32767, '\n');
    cout << "Dia chi: ";
    getline(cin, m_address);
}
void CanBo::xuatThongTin()
{
    cout << "------------INFORMATION-------------" << endl;
    cout << "-----------Xuat thong tin:----------" << endl;
    cout << "Ho va Ten: " << m_name << endl;
    cout << "Tuoi: " << m_age << endl;
    cout << "Gioi tinh: " << m_gender << endl;
    cout << "Dia chi: " << m_address << endl; 
}