#include "Employee.h"

Employee::Employee()
{
    m_id = " ";
    m_fullname = " ";
    m_birthday.day = 0;
    m_birthday.month = 0;
    m_birthday.year = 0;
    m_phone = " ";
    m_email = " ";
    m_employeeType = 0;
    //m_employeeCount = 0;
}
Employee::Employee(string id, string fullname, Date birth, string phone, string email, int type)
{
    m_id = id;
    m_fullname = fullname;
    m_birthday = birth;
    m_phone = phone;
    m_email = email;
    m_employeeType = type;
}
Employee::Employee(Employee& employee)
{
    m_id = employee.m_id;
    m_fullname = employee.m_fullname;
    m_birthday = employee.m_birthday;
    m_phone = employee.m_phone;
    m_email = employee.m_email;
    m_employeeType = employee.m_employeeType; 
}
Employee::~Employee()
{

}
void Employee::setID(string id)
{
    m_id = id;
}
string Employee::getID()
{
    return m_id;
}
void Employee::setFullName(string fullname)
{
    m_fullname = fullname;
}
string Employee::getFullName()
{
    return m_fullname;
}
void Employee::setBirthday(Date birth)
{
    m_birthday = birth;
}
Date Employee::getBirthday()
{
    return m_birthday;
}
void Employee::setPhone(string phone)
{
    m_phone = phone;
}
string Employee::getPhone()
{
    return m_phone;
}
void Employee::setEmail(string email)
{
    m_email = email;
}
string Employee::getEmail()
{
    return m_email;
}
void Employee::setEmployeeType(int employType)
{
    m_employeeType = employType;
}
int Employee::getEmployeeType()
{
    return m_employeeType;
}
void Employee::setCertifi(vector<Certificate*> cer)
{
    m_certificate = cer;
}
vector<Certificate*> Employee::getCertifi()
{
    return m_certificate;
}
void Employee::pushCertifi(Certificate* cer)
{
    m_certificate.push_back(cer);
}
void Employee::eraseCertifi(int index)
{
    m_certificate.erase(m_certificate.begin() + index);
}