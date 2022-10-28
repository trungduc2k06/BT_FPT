#ifndef _EMPLOYEE_H_
#define _EMPLOYEE_H_

#include "Library.h"
#include "Certificate.h"
#include "CheckValidation.h"

using namespace std;

class Employee
{
private:
    string m_id;
    string m_fullname;
    Date m_birthday;
    string m_phone;
    string m_email;
    int m_employeeType;
    vector<Certificate*> m_certificate;
public:
    static int m_employeeCount;
    Employee();
    Employee(string, string, Date, string, string, int);
    Employee(Employee&);
    ~Employee();
    void setID(string id);
	string getID();
	void setFullName(string);
	string getFullName();
	void setBirthday(Date);
	Date getBirthday();
	void setPhone(string);
	string getPhone();
	void setEmail(string);
	string getEmail();
    void setEmployeeType(int);
    int getEmployeeType();
    // void setEmployeeCount(int);
    // int getEmployeeCount();
    void setCertifi(vector<Certificate*>);
    vector<Certificate*> getCertifi();
    void pushCertifi(Certificate*);
    void eraseCertifi(int);
};


#endif