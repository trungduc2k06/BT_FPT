#include "Person.h"

Person::Person()
{
    m_name = " ";
    m_age = 0;
    m_homeTown = " ";
    m_idNum = 0;
}
Person::Person(string name, int age, string homeTown, int idNum)
{
    m_name = name;
    m_age = age;
    m_homeTown = homeTown;
    m_idNum = idNum;
}
Person::~Person()
{

}
void Person::setName(string name)
{
    m_name = name;
}
string Person::getName()
{
    return m_name;
}
void Person::setAge(int age)
{
    m_age = age;
}
int Person::getAge()
{
    return m_age;
}
void Person::setHomeTown(string homeTown)
{
    m_homeTown = homeTown;
}
string Person::getHomeTown()
{
    return m_homeTown;
}
void Person::setIdNum(int idNum)
{
    m_idNum = idNum;
}
int Person::getIdNum()
{
    return m_idNum;
}