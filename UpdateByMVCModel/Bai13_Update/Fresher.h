#ifndef _FRESHER_H_
#define _FRESHER_H_

#include "Employee.h"

class Fresher : public Employee
{
    private:
        Employee m_employ;
        Date m_graduationDate;
        int m_graduationRank;
        string m_education;
    public:
        Fresher();
        Fresher(Date, int, string);
        Fresher(Fresher&);
        ~Fresher();
        void setEmployee(Employee);
        Employee getEmployee();
        void setGraduationDate(Date);
        Date getGraduationDate();
        void setGraduationRank(int);
        int getGraduationRank();
        void setEducation(string);
        string getEducation();
        int	getEmployeeType();
};

#endif