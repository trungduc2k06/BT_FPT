#ifndef _INOUT_H_
#define _INOUT_H_

#include "Student.h"
#include "GoodStudent.h"
#include "NormalStudent.h"
#include "CheckValidation.h"
#include "Library.h"
#include "Exception.h"

class InOut
{
    private:
        CheckValidation m_checkVali;
    public:
        /* INPUT */
        string inputStudentName();
        Date inputStudentBirth();
        string inputStudentSex();
        string inputStudentPhone();
        //int inputStudentGradeLevel();
        //Good student
        float inputGoodStudentGPA();
        string inputGoodStudentBestRWName();
        GoodStudent inputGoodStudent();
        //Normal student
        int inputNorStudentEngScore();
        int inputNorStudentEntryTestScore();
        NormalStudent inputNormalStudent();
        //
        int inputNumApplicant();
        int inputNumRecruit();
        /* OUTPUT */
        void printInfoStudent(string, Date, string, string, int);
        void printInfoGoodStudent(Student*, float, string);
        void printInfoNormalStudent(Student*, int, int);
};

#endif