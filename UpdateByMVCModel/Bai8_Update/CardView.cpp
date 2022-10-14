#include "CardView.h"

string CardView::inputStudentName()
{
    string name;
    cout << "Nhap ten: ";
    cin.ignore();
    getline(cin, name);
    return name;
}
int CardView::inputStudentAge()
{
    int age;
    cout << "Nhap tuoi: ";
    cin >> age;
    return age;
}
string CardView::inputStudentClassroom()
{
    string classroom;
    cout << "Nhap lop hoc: ";
    cin.ignore();
    getline(cin, classroom);
    return classroom;
}
int CardView::inputCardId()
{
    int id;
    cout << "Nhap ma phieu muon: ";
    cin >> id;
    return id;
}
int CardView::inputCardBorrowDate()
{
    int borrowDate;
    cout << "Nhap ngay muon: ";
    cin >> borrowDate;
    return borrowDate;
}
int CardView::inputCardPaymentDate()
{
    int paymentDate;
    cout << "Nhap ngay tra: ";
    cin >> paymentDate;
    return paymentDate;
}
int CardView::inputCardIdBook()
{
    int idBook;
    cout << "Nhap so hieu sach: ";
    cin >> idBook;
    return idBook;
}
Card CardView::inputCard()
{
    Card card;
    Student student;
    cout << "___________Nhap thong tin the muon:___________" << endl;
    student.setName(inputStudentName());
    student.setAge(inputStudentAge());
    student.setClassroom(inputStudentClassroom());
    card.setStudent(student);
    card.setId(inputCardId());
    card.setBorrowDate(inputCardBorrowDate());
    card.setPaymentDate(inputCardPaymentDate());
    card.setIdBook(inputCardIdBook());
    return card;
}
int CardView::inputNumCardAdd()
{
    int num;
    cout << "Nhap so luong the can them: ";
    cin >> num;
    return num;
}
int CardView::inputCardIdDelete()
{
    int id;
    cout << "Nhap ma the muon can xoa: ";
    cin >> id;
    return id;
}
void CardView::printCheckIdCardFind(bool check)
{
    if(check == 1) 
    {
        cout << "Success: Da xoa the muon thanh cong!" << endl;
    }
    else 
    {
        cout << "Warning: Khong tim thay the muon!" << endl;
    }
}
void CardView::printStudentInfo(string name, int age, string classroom)
{
    cout << "Ho va ten: "<< name << endl;
    cout << "Tuoi: " << age << endl;
    cout << "Lop hoc: " << classroom << endl;
}
void CardView::printCardInfo(Student student, int id, int borrowDate, int paymentDate, int idBook)
{
    cout << "_________ Thong tin the muon:__________" << endl;
    printStudentInfo(student.getName(), student.getAge(), student.getClassroom());
    cout << "Ma phieu muon: " << id << endl;
    cout << "Ngay muon: " << borrowDate << endl;
    cout << "Ngay tra: " << paymentDate << endl;
    cout << "So hieu sach: " << idBook << endl;
}