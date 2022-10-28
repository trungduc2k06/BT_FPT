#ifndef _CONTROLLER_H_
#define _CONTROLLER_H_

#include "Library.h"
#include "CheckValidation.h"
#include "InOut.h"
#include "Student.h"
#include "GoodStudent.h"
#include "NormalStudent.h"
#include <memory>

class Controller
{
private:
    vector<Student*> pStudent;
    InOut m_inOut;
    int m_countGood = 0, m_countNormal = 0;
public:
    Controller();
    ~Controller();
    void enterApplicantInfor();
	void showApplicantInfor();
	void applicantSelect();
	void arrangeGoodStudent(int& count,vector<int>& index );
	void arrangeNormalStudent();
};

#endif