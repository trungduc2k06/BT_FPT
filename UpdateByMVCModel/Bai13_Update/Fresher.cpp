#include "Fresher.h"

Fresher::Fresher()
{
    m_graduationDate.day = 0;
    m_graduationDate.month = 0;
    m_graduationDate.year = 0;
    m_graduationRank = 0;
    m_education = " ";
}
Fresher::Fresher(Date graduationDate, int graduationRank, string education)
{
    m_graduationDate = graduationDate;
    m_graduationRank = graduationRank;
    m_education = education;
}
Fresher::Fresher(Fresher& fresher)
{
    m_graduationDate = fresher.m_graduationDate;
    m_graduationRank = fresher.m_graduationRank;
    m_education = fresher.m_education;
}
Fresher::~Fresher()
{

}
void Fresher::setEmployee(Employee employ)
{
    m_employ = employ;
}
Employee Fresher::getEmployee()
{
    return m_employ;
}
void Fresher::setGraduationDate(Date graduationDate)
{
    m_graduationDate = graduationDate;
}
Date Fresher::getGraduationDate()
{
    return m_graduationDate;
}
void Fresher::setGraduationRank(int graduationRank)
{
    m_graduationRank = graduationRank;
}
int Fresher::getGraduationRank()
{
    return m_graduationRank;
}
void Fresher::setEducation(string education)
{
    m_education = education;
}
string Fresher::getEducation()
{
    return m_education;
}
int	Fresher::getEmployeeType()
{
    return t_fresher;
}