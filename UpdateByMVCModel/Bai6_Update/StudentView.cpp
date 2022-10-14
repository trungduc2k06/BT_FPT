#include "StudentView.h"

string StudentView::inputStudentName()
{
    string name;
    cout << "Nhap ten: ";
    cin.ignore();
    getline(cin, name);
    return name;
}
int StudentView::inputStudentAge()
{
    int age;
    cout << "Nhap tuoi: ";
    cin >> age;
    return age;
}
string StudentView::inputStudentHomeTown()
{
    string homeTown;
    cout << "Nhap que quan: ";
    cin.ignore();
    getline(cin, homeTown);
    return homeTown;
}
Student StudentView::inputStudent()
{
    Student person;
    cout << "___________Nhap thong tin hoc sinh:___________" << endl;
    person.setName(inputStudentName());
    person.setAge(inputStudentAge());
    person.setHomeTown(inputStudentHomeTown());
    return person;
}
int StudentView::intputNumStudentAdd()
{
    int num;
    cout << "Nhap so luong hoc sinh can them: ";
    cin >> num;
    return num;
}
void StudentView::printStudentInfo(string name, int age, string homeTown)
{
    cout << "___________Thong tin hoc sinh:___________" << endl;
    cout << "Ten: " << name << endl;
    cout << "Tuoi: " << age << endl;
    cout << "Que quan: " << homeTown << endl;
}