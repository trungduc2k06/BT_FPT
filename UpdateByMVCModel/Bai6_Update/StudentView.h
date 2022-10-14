#ifndef _STUDENTVIEW_H_
#define _STUDENTVIEW_H_

#include "Student.h"

class StudentView
{
    public:
        string inputStudentName();
        int inputStudentAge();
        string inputStudentHomeTown();
        Student inputStudent();
        int intputNumStudentAdd();
        void printStudentInfo(string, int , string);
};


#endif