#ifndef _INTER_H_
#define _INTER_H_

#include "Employee.h"

class Intern : public Employee
{
    private:
        Employee m_employ;
        string m_major;
        int m_semester;
        string m_universityName;
    public:
        Intern();
        Intern(string, int, string);
        Intern(Intern&);
        ~Intern();
        void setEmployee(Employee);
        Employee getEmployee();
        void setMajor(string);
        string getMajor();
        void setSemester(int);
        int getSemester();
        void setUniversity(string);
        string getUniversity();
        int	 getEmployeeType();
};

#endif