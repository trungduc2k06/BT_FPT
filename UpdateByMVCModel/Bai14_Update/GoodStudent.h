#ifndef _GOODSTUDENT_H_
#define _GOODSTUDENT_H_

#include "Library.h"
#include "CheckValidation.h"
#include "Student.h"

using namespace std;

class GoodStudent: public Student
{
    private:
        float m_GPA;
        string m_bestRewardName;

    public:
        GoodStudent();
        GoodStudent(float gpa, string bestRW);
        GoodStudent(GoodStudent& st);
        ~GoodStudent();
        void setGPA(float gpa);
        float getGPA();
        void setBestReward(string RWname);
        string getBestReward();
        int	getGradeType();
};
#endif