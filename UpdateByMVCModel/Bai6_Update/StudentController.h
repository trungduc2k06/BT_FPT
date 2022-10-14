#ifndef _STUDENTCONTROLLER_H_
#define _STUDENTCONTROLLER_H_

#include "StudentView.h"
#include <vector>

class StudentController
{
private:
    vector<Student*> pStudent;
    StudentView m_studentview;
public:
    StudentController();
    ~StudentController();
    void addStudent();
    void showStudent();
    void getStudent20YearOld();
    void getStudent23YearOldAndDN();
};

#endif