#ifndef _TEACHERCONTROLLER_H_
#define _TEACHERCONTROLLER_H_

#include "TeacherView.h"
#include <vector>

class TeacherController
{
private:
    vector<Teacher*> pTeacher;
    TeacherView m_teacherView;
public:
    TeacherController();
    ~TeacherController();
    void addTeacher();
    void showTeacher();
    void deleteTeacher();
};

#endif