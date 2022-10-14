#include "TeacherController.h"

TeacherController::TeacherController()
{

}
TeacherController::~TeacherController()
{

}
void TeacherController::addTeacher()
{
    int num = m_teacherView.inputNumTeacherAdd();
    for (int i = 0; i < num; i++)
    {
        Teacher* teacher = new Teacher(m_teacherView.inputTeacher());
        pTeacher.push_back(teacher);
    }
}
void TeacherController::showTeacher()
{
    for(int i = 0; i < pTeacher.size(); i++)
    {
        m_teacherView.printTeacherInfo(pTeacher[i]->getName(), pTeacher[i]->getAge(), pTeacher[i]->getHomeTown(), pTeacher[i]->getIdNum(), pTeacher[i]->getSalary(), pTeacher[i]->getBonus(), pTeacher[i]->getPenaty(), pTeacher[i]->getRealSalary());
    }
}
void TeacherController::deleteTeacher()
{
    bool check = 0;
    int idNumDelete = m_teacherView.inputIdNumTeacherDelete();
    for (int i = 0; i < pTeacher.size(); i++)
    {
        if(pTeacher[i]->getIdNum() == idNumDelete)
        {
            pTeacher.erase(pTeacher.begin() + i);
            check = 1;
        }
    }
    m_teacherView.printIdNumTeacherFind(check);
}