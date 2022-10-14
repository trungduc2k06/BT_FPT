#include "StudentController.h"

StudentController::StudentController()
{

}
StudentController::~StudentController()
{

}
void StudentController::addStudent()
{
    int num = m_studentview.intputNumStudentAdd();
    for (int i = 0; i < num; i++)
    {
        Student* student = new Student(m_studentview.inputStudent());
        pStudent.push_back(student);
    }
}
void StudentController::showStudent()
{
    for(int i = 0; i < pStudent.size(); i++)
    {
        m_studentview.printStudentInfo(pStudent[i]->getName(), pStudent[i]->getAge(), pStudent[i]->getHomeTown());
    }
}
void StudentController::getStudent20YearOld()
{
    for(int i = 0; i < pStudent.size(); i++)
    {
        if(pStudent[i]->getAge() == 20)
        {
            m_studentview.printStudentInfo(pStudent[i]->getName(), pStudent[i]->getAge(), pStudent[i]->getHomeTown());
        }
    }
}
void StudentController::getStudent23YearOldAndDN()
{
    for(int i = 0; i < pStudent.size(); i++)
    {
        if(pStudent[i]->getAge() == 23 && pStudent[i]->getHomeTown() == "DN")
        {
            m_studentview.printStudentInfo(pStudent[i]->getName(), pStudent[i]->getAge(), pStudent[i]->getHomeTown());
        }
    }
}