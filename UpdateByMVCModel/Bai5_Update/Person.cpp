#include "Person.h"

Person::Person()
{
    m_name = " ";
    m_age = 0;
    m_passport = " ";
}
Person::Person(string name, int age, string passport)
{
    m_name = name;
    m_age = age;
    m_passport = passport;
}
Person::Person(Person& person)
{
    m_name = person.m_name;
    m_age = person.m_age;
    m_passport = person.m_passport;
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
void Person::setPassport(string passport)
{
    m_passport = passport;
}
string Person::getPassport()
{
    return m_passport;
}