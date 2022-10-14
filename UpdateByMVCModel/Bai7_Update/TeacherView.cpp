#include "TeacherView.h"

string TeacherView::inputTeacherName()
{
    string name;
    cout << "Nhap ten: ";
    cin.ignore();
    getline(cin, name);
    return name;
}
int TeacherView::inputTeacherAge()
{
    int age;
    cout << "Nhap tuoi: ";
    cin >> age;
    return age;
}
string TeacherView::inputTeacherHomeTown()
{
    string homeTown;
    cout << "Nhap que quan: ";
    cin.ignore();
    getline(cin, homeTown);
    return homeTown;
}
int TeacherView::inputTeacherIdNum()
{
    int idNum;
    cout << "Nhap ma so giao vien: ";
    cin >> idNum;
    return idNum;
}
int TeacherView::inputTeacherSalary()
{
    int salary;
    cout << "Nhap luong cung: ";
    cin >> salary;
    return salary;
}
int TeacherView::inputTeacherBonus()
{
    int bonus;
    cout << "Nhap luong thuong: ";
    cin >> bonus;
    return bonus;
}
int TeacherView::inputTeacherPenaty()
{
    int penaty;
    cout << "Nhap tien phat: ";
    cin >> penaty;
    return penaty;
}
Teacher TeacherView::inputTeacher()
{
    Teacher teacher;
    cout << "___________Nhap thong tin giao vien:___________" << endl;
    teacher.setName(inputTeacherName());
    teacher.setAge(inputTeacherAge());
    teacher.setHomeTown(inputTeacherHomeTown());
    teacher.setIdNum(inputTeacherIdNum());
    teacher.setSalary(inputTeacherSalary());
    teacher.setBonus(inputTeacherBonus());
    teacher.setPenaty(inputTeacherPenaty());
    return teacher;
}
int TeacherView::inputNumTeacherAdd()
{
    int num;
    cout << "Nhap so luong giao vien can them: ";
    cin >> num;
    return num;
}
int TeacherView::inputIdNumTeacherDelete()
{
    int idNum;
    cout << "Nhap ma so giao vien can xoa: ";
    cin >> idNum;
    return idNum;
}
void TeacherView::printIdNumTeacherFind(bool check)
{
    if(check == 1) 
    {
        cout << "Success: Da xoa giao vien thanh cong!" << endl;
    }
    else 
    {
        cout << "Warning: Khong tim thay giao vien!" << endl;
    }
}
void TeacherView::printTeacherInfo(string name, int age, string homeTown, int idNum, int salary, int bonus, int penaty, int realSalary)
{
    cout << "___________Thong tin giao vien:___________" << endl;
    cout << "Ten: " << name << endl;
    cout << "Tuoi: " << age << endl;
    cout << "Que quan: " << homeTown << endl;
    cout << "Ma so giao vien: " << idNum << endl;
    cout << "Luong cung: " << salary << endl;
    cout << "Luong thuong: " << bonus << endl;
    cout << "Tien phat: " << penaty <<endl;
    cout << "Tong luong: " << realSalary << endl;
}