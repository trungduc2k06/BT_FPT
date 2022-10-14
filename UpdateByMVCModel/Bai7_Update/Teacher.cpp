#include "Teacher.h"

Teacher::Teacher()
{
    m_salary = 0;
    m_bonus = 0;
    m_penaty = 0;
    m_realSalary = 0;
}
Teacher::Teacher(Person person, int salary, int bonus, int penaty, int realSalary)
{
    m_person = person;
    m_salary = salary;
    m_bonus = bonus;
    m_penaty = penaty;
    m_realSalary = realSalary;
}
Teacher::Teacher(Teacher& teacher)
{
    m_person = teacher.m_person;
    m_salary = teacher.m_salary;
    m_bonus = teacher.m_bonus;
    m_penaty = teacher.m_penaty;
    m_realSalary = teacher.m_realSalary;
}
Teacher::~Teacher()
{

}
void Teacher::setPerson(Person person)
{
    m_person = person;
}
Person Teacher::getPerson()
{
    return m_person;
}
void Teacher::setSalary(int salary)
{
    m_salary = salary;
}
int Teacher::getSalary()
{
    return m_salary;
}
void Teacher::setBonus(int bonus)
{
    m_bonus = bonus;
}
int Teacher::getBonus()
{
    return m_bonus;
}
void Teacher::setPenaty(int penaty)
{
    m_penaty = penaty;
}
int Teacher::getPenaty()
{
    return m_penaty;
}
int Teacher::getRealSalary()
{
    m_realSalary = m_salary + m_bonus - m_penaty;
    return m_realSalary;
}