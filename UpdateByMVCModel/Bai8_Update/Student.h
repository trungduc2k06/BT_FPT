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
    string m_classroom;
public:
    Student();
    Student(string name, int age, string classroom);
    Student(Student& student);
    ~Student();
    void setName(string name);
    string getName();
    void setAge(int age);
    int getAge();
    void setClassroom(string classroom);
    string getClassroom();
};

#endif