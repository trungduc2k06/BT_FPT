#ifndef _PERSON_H_
#define _PERSON_H_

#include <iostream>
#include <string>

using namespace std;

class Person
{
    private:
        string m_name;
        int m_age;
        string m_passport;
    public:
        Person();
        Person(string name, int age, string passport);
        Person(Person& person);
        ~Person();
        void setName(string name);
        string getName();
        void setAge(int age);
        int getAge();
        void setPassport(string passport);
        string getPassport();
};

#endif