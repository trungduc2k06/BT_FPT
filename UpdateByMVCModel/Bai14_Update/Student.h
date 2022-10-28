#ifndef _STUDENT_H_
#define _STUDENT_H_

#include "Library.h"

using namespace std;

class Student
{
private:
	string m_fullName;
	Date m_doB;
	string m_sex;
	string m_phoneNumber;
	int m_gradeLevel;

public:
	Student();
	Student(string fName, Date birthday, string sex, string phone, int gLevel);
	Student(Student& st);
	virtual ~Student();
	void setFullName(string fullName);
	string getFullName();
	void setBirthday(Date birthday);
	Date getBirthday();
	void setSex(string sex);
	string getSex();
	void setPhone(string phone);
	string getPhone();
    void setGradeLevel(int gLevel);
	virtual int	getGradeType() = 0;
};
#endif