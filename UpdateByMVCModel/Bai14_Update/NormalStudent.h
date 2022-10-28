#ifndef _NORMALSTUDENT_H_
#define _NORMALSTUDENT_H_

#include "Library.h"
#include "Student.h"

using namespace std;

class NormalStudent : public Student
{
private:
	int	m_englishScore;
	int	m_entryTestScore;

public:
	NormalStudent();
	NormalStudent(int engScore, int eTestScore);
	NormalStudent(NormalStudent& st);
	~NormalStudent();
	void setEnglishScore(int engScore);
	int	getEnglishScore();
	void setEntryTestScore(int eTestScore);
	int	getEntryTestScore();
	int	 getGradeType();
};
#endif