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
        string m_homeTown;
        int m_idNum;
    public:
        Person();
        Person(string name, int age, string homeTown, int idNum);
        ~Person();
        void setName(string name);
        string getName();
        void setAge(int age);
        int getAge();
        void setHomeTown(string homeTown);
        string getHomeTown();
        void setIdNum(int idNum);
        int getIdNum();
};

#endif