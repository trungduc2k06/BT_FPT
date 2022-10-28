#include "InOut.h"

/* INPUT */
string InOut::inputStudentName()
{
    string fullname;
    cout << "Enter fullname: ";
    cin.ignore();
    getline(cin, fullname);
    while (!m_checkVali.checkName(fullname))
    {
        cout << "Enter fullname: ";
        cin.ignore();
        getline(cin, fullname);
    }    
    return fullname;
}
Date InOut::inputStudentBirth()
{
    Date date;
    cout << "Enter Birthday: " << endl;
    cout << "Enter day: ";	
    cin >> date.day;
    cout << "Enter month: ";
    cin >> date.month;
    cout << "Enter year: ";	
    cin >> date.year;
    while (!m_checkVali.checkDate(date.day, date.month, date.year))
    {
        cout << "Enter Birthday: " << endl;
        cout << "Enter day: ";	
        cin >> date.day;
        cout << "Enter month: ";
        cin >> date.month;
        cout << "Enter year: ";	
        cin >> date.year;
    }
    return date;
}
string InOut::inputStudentSex()
{
    string gender;
    cout << "Enter gender: ";
    cin.ignore();
    getline(cin, gender);
    while (!m_checkVali.checkGender(gender))
    {
        cout << "Enter gender: ";
        cin.ignore();
        getline(cin, gender);
    }    
    return gender;
}
string InOut::inputStudentPhone()
{
    string phone;
    cout << "Enter phone: ";
    cin.ignore();
    getline(cin, phone);
    // while (!m_checkVali.checkPhone(phone))
    // {
    //     cout << "Enter phone: ";
    //     cin.ignore();
    //     getline(cin, phone);
    // }    
    return phone;
}

//Good student
float InOut::inputGoodStudentGPA()
{
    float gpa;
    cout << "Enter GPA: ";
    cin >> gpa;
    while (!m_checkVali.checkGPA(gpa))
    {
        cout << "Enter GPA: ";
        cin >> gpa;
    }
    return gpa;
}
string InOut::inputGoodStudentBestRWName()
{
    string bestRewardName;
    cout << "Enter the best reward name: ";
    cin.ignore();
    getline(cin, bestRewardName);
    return bestRewardName;
}
GoodStudent InOut::inputGoodStudent()
{
    GoodStudent goodStu;
    cout << "___________ENTER GOOD STUDENT IMFORMATION:___________" << endl;
    goodStu.setFullName(inputStudentName());
    goodStu.setBirthday(inputStudentBirth());
    goodStu.setSex(inputStudentSex());
    goodStu.setPhone(inputStudentPhone());
    goodStu.setGPA(inputGoodStudentGPA());
    goodStu.setBestReward(inputGoodStudentBestRWName());
    return goodStu;
}
//Normal student
int InOut::inputNorStudentEngScore()
{
    int englishScore;
    cout << "Enter English Score: "; 
    cin >> englishScore;
    while (!m_checkVali.checkToeic(englishScore))
    {
        cout << "Enter English Score: "; 
        cin >> englishScore;
    }
    return englishScore;
}
int InOut::inputNorStudentEntryTestScore()
{
    int entryTestScore;
    cout << "Enter Entry test score: ";
    cin>> entryTestScore;
    return entryTestScore;
}
NormalStudent InOut::inputNormalStudent()
{
    NormalStudent normalStu;
    cout << "___________ENTER NORMAL STUDENT IMFORMATION:___________" << endl;
    normalStu.setFullName(inputStudentName());
    normalStu.setBirthday(inputStudentBirth());
    normalStu.setSex(inputStudentSex());
    normalStu.setPhone(inputStudentPhone());
    normalStu.setEnglishScore(inputNorStudentEngScore());
    normalStu.setEntryTestScore(inputNorStudentEntryTestScore());
    return normalStu;
}
//
int InOut::inputNumApplicant()
{
    int numApplicant;
    cout << "Enter number applicant add: ";
	cin >> numApplicant;
    while (!m_checkVali.checkNumApplicant(numApplicant))
    {
        cin >> numApplicant;
    }
    return numApplicant;
}
int InOut::inputNumRecruit()
{
    int numRecruit;
    cout << "Enter number recruit add: ";
    cin >> numRecruit;
    return numRecruit;
}
/* OUTPUT */
void InOut::printInfoStudent(string fullName, Date doB, string sex , string phoneNumber, int gradeLevel)
{
    cout << "Fullname: " << fullName << endl;
	cout << "Birthday: " << doB.day << "/" << doB.month << "/" << doB.year << endl;
	cout << "Gender: " << sex << endl;
	cout << "Phone: " << phoneNumber << endl;
	cout << "Student type: ";
	if (gradeLevel == t_good)
	{
		cout << " Good " << endl;
	}
	if (gradeLevel == t_normal)
	{
		cout << " Normal " << endl;
	}
}
void InOut::printInfoGoodStudent(Student* st, float GPA, string bestRewardName) 
{
    cout << "___________ SHOW STUDENT IMFORMATION:___________" << endl;
    printInfoStudent(st->getFullName(), st->getBirthday(), st->getSex(), st->getPhone(), st->getGradeType());
    cout << "GPA: " << GPA << endl;
    cout << "Best reward name: " << bestRewardName << endl;
}
void InOut::printInfoNormalStudent(Student* st, int englishScore, int entryTestScore)
{
    cout << "___________ SHOW STUDENT IMFORMATION:___________" << endl;
    printInfoStudent(st->getFullName(), st->getBirthday(), st->getSex(), st->getPhone(), st->getGradeType());
    cout << "English Score: " << englishScore << endl;
    cout << "Entry test score: " << entryTestScore << endl;
}