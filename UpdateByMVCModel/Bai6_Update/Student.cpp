#include "Student.h"

Student::Student()
{
    m_name = " ";
    m_age = 0;
    m_homeTown = " ";
}
Student::Student(string name, int age, string homeTown)
{
    m_name = name;
    m_age = age;
    m_homeTown = homeTown;
}
Student::Student(Student& student)
{
    m_name = student.m_name;
    m_age = student.m_age;
    m_homeTown = student.m_homeTown;
}
Student::~Student()
{

}
void Student::setName(string name)
{
    m_name = name;
}
string Student::getName()
{
    return m_name;
}
void Student::setAge(int age)
{
    m_age = age;
}
int Student::getAge()
{
    return m_age;
}
void Student::setHomeTown(string homeTown)
{
    m_homeTown = homeTown;
}
string Student::getHomeTown()
{
    return m_homeTown;
}