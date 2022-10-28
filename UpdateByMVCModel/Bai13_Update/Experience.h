#ifndef _EXPERIENCE_H_
#define _EXPERIENCE_H_

#include "Employee.h"

class Experience : public Employee
{
    private:
        Employee m_employ;
        int m_expInYear;
        string m_proSkill;
    public:
        Experience();
        Experience(int, string);
        Experience(Experience&);
        ~Experience();
        void setEmployee(Employee);
        Employee getEmployee();
        void setExpInYear(int);
        int getExpInYear();
        void setProSkill(string);
        string getProSkill();
        int	 getEmployeeType();
};

#endif