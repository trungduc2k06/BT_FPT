#include "Student.h"

Student::Student()
{
    m_fullName = " ";
    m_doB.day = 0;
    m_doB.month = 0;
    m_doB.year = 0;
    m_sex = " ";
    m_phoneNumber = " ";
    m_gradeLevel = 0;
}
Student::Student(string fName, Date birthday, string sex, string phone, int gLevel)
{
    m_fullName = fName;
    m_doB = birthday;
    m_sex = sex;
    m_phoneNumber = phone;
    m_gradeLevel = gLevel;
}
Student::Student(Student& st)
{
    m_fullName = st.m_fullName;
    m_doB = st.m_doB;
    m_sex = st.m_sex;
    m_phoneNumber = st.m_phoneNumber;
    m_gradeLevel = st.m_gradeLevel;
}
Student::~Student()
{

}
void Student::setFullName(string fullName)
{
    m_fullName = fullName;
}
string Student::getFullName()
{
    return m_fullName;
}
void Student::setBirthday(Date birthday)
{
    m_doB = birthday;
}
Date Student::getBirthday()
{
    return m_doB;
}
void Student::setSex(string sex)
{
    m_sex = sex;
}
string Student::getSex()
{
    return m_sex;
}
void Student::setPhone(string phone)
{
    m_phoneNumber = phone;
}
string Student::getPhone()
{
    return m_phoneNumber;
}
void Student::setGradeLevel(int gLevel)
{
    m_gradeLevel = gLevel;
}