#ifndef _INOUT_H_
#define _INOUT_H_

#include "Employee.h"
#include "Experience.h"
#include "Fresher.h"
#include "Intern.h"
#include "Certificate.h"
#include "CheckValidation.h"
#include "Library.h"
#include "Exception.h"

class InOut
{
    private:
        CheckValidation m_checkVali;
        
    public:
        /* Input */
        //Employee
        string inputEmployeeID();
        string inputEmployeeFullName();
        Date inputEmployeeBirth();
        string inputEmployeePhone();
        string inputEmployeeEmail();
        //Experience
        int inputExperienceExpInYear();
        string inputExperienceProSkill();
        Experience inputExperience();
        //Fresher
        Date inputFresherGraduationDate();
        int inputFresherGraduationRank();
        string inputFresherGraduationEducation();
        Fresher inputFresher();
        //Intern
        string inputInternMajor();
        int inputInternSemester();
        string inputInternUniName();
        Intern inputIntern();
        //Certificate
        vector<Certificate*> inputCertificate();
        void showCertifi(Certificate*);
        void showListCertifi(vector<Certificate*>);
        //
        int inputNumEmployeeAdd();
        /* Output */
        void printInfoEmployee(string, string, Date, string, string, int, vector<Certificate*>);
        void printInfoExperience(Employee*, int, string);
        void printInfoFresher(Employee*, Date, int, string);
        void printInfoIntern(Employee*, string, int, string);   
};

#endif
