#ifndef _STUDENT_H_
#define _STUDENT_H_

#include <iostream>
#include <string>

using namespace std;

class Student
{
private:
    string m_name;
    int m_age;
    string m_homeTown;
public:
    Student();
    Student(string name, int age, string homeTown);
    Student(Student& student);
    ~Student();
    void setName(string name);
    string getName();
    void setAge(int age);
    int getAge();
    void setHomeTown(string homeTown);
    string getHomeTown();
};

#endif