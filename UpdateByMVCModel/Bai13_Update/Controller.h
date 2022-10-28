#ifndef _CONTROLLER_H_
#define _CONTROLLER_H_

#include "Certificate.h"
#include "Employee.h"
#include "Experience.h"
#include "Fresher.h"
#include "Intern.h"
#include "CheckValidation.h"
#include "InOut.h"
#include "Library.h"

class Controller
{
    private:
        vector<Employee*> employee;
        InOut m_inOut;
        CheckValidation m_checkVali;
    public:
        Controller();
        ~Controller();
        void addEmployee();
        void modifyEmployeeInfoByID(string id);
        void removeEmployeeByID(string id);
        void showEmployee();
        vector<Employee*> GroupbyType(int typeEm);
};

#endif