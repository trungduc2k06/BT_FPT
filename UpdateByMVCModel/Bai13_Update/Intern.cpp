#include "Intern.h"

Intern::Intern()
{
    m_major = " ";
    m_semester = 0;
    m_universityName = " ";
}
Intern::Intern(string major, int semester, string universityName)
{
    m_major = major;
    m_semester = semester;
    m_universityName = universityName;
}
Intern::Intern(Intern& intern) 
{
    m_major = intern.m_major;
    m_semester = intern.m_semester;
    m_universityName = intern.m_universityName;
}
Intern::~Intern()
{

}
void Intern::setEmployee(Employee employ)
{
    m_employ = employ;
}
Employee Intern::getEmployee()
{
    return m_employ;
}
void Intern::setMajor(string major)
{
    m_major = major;
}
string Intern::getMajor()
{
    return m_major;
}
void Intern::setSemester(int semester)
{
    m_semester = semester;
}
int Intern::getSemester()
{
    return m_semester;
}
void Intern::setUniversity(string universityName)
{
    m_universityName = universityName;
}
string Intern::getUniversity()
{
    return m_universityName;
}
int	 Intern::getEmployeeType()
{
    return t_intern;
}