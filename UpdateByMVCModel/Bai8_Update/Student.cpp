#include "Student.h"

Student::Student()
{
    m_name = " ";
    m_age = 0;
    m_classroom = " ";
}
Student::Student(string name, int age, string classroom)
{
    m_name = name;
    m_age = age;
    m_classroom = classroom;
}
Student::Student(Student& student)
{
    m_name = student.m_name;
    m_age = student.m_age;
    m_classroom = student.m_classroom;
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
void Student::setClassroom(string classroom)
{
    m_classroom = classroom;
}
string Student::getClassroom()
{
    return m_classroom;
}