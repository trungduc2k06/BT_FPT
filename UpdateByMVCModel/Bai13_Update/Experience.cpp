#include "Experience.h"

Experience::Experience()
{
    m_expInYear = 0;
    m_proSkill = " ";
}
Experience::Experience(int expInYear, string proSkill)
{
    m_expInYear = expInYear;
    m_proSkill = proSkill;
}
Experience::Experience(Experience& experience)
{
    m_expInYear = experience.m_expInYear;
    m_proSkill = experience.m_proSkill;
}
Experience::~Experience()
{

}
void Experience::setEmployee(Employee employ)
{
    m_employ = employ;
}
Employee Experience::getEmployee()
{
    return m_employ;
}
void Experience::setExpInYear(int expInYear)
{
    m_expInYear = expInYear;
}
int Experience::getExpInYear()
{
    return m_expInYear;
}
void Experience::setProSkill(string proSkill)
{
    m_proSkill = proSkill;
}
string Experience::getProSkill()
{
    return m_proSkill;
}
int	 Experience::getEmployeeType()
{
    return t_experience;
}