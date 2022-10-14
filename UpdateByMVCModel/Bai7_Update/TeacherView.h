#ifndef _TEACHERVIEW_H_
#define _TEACHERVIEW_H_

#include "Teacher.h"

class TeacherView
{
public:
    string inputTeacherName();
    int inputTeacherAge();
    string inputTeacherHomeTown();
    int inputTeacherIdNum();
    int inputTeacherSalary();
    int inputTeacherBonus();
    int inputTeacherPenaty();
    Teacher inputTeacher();
    int inputNumTeacherAdd();
    int inputIdNumTeacherDelete();
    void printIdNumTeacherFind(bool);
    void printTeacherInfo(string, int, string, int, int, int, int, int);

};

#endif