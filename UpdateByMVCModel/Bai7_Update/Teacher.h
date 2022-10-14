#ifndef _TEACHER_H_
#define _TEACHER_H_
#include "Person.h"

class Teacher : public Person
{
private:
    Person m_person;
    int m_salary;
    int m_bonus;
    int m_penaty;
    int m_realSalary;
public:
    Teacher();
    Teacher(Person person, int salary, int bonus, int penaty, int realSalary);
    Teacher(Teacher& teacher);
    ~Teacher();
    void setPerson(Person person);
    Person getPerson();
    void setSalary(int salary);
    int getSalary();
    void setBonus(int bonus);
    int getBonus();
    void setPenaty(int penaty);
    int getPenaty();
    int getRealSalary();
};

#endif