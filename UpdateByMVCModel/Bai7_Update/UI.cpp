#include "UI.h"

UI::UI()
{
    int choice = 0;
    while (flag)
    {
        cout << "_____________ HE THONG QUAN LY GIAO VIEN _____________" << endl;
        cout << "1. Them moi giao vien." << endl;
        cout << "2. Xoa giao vien." << endl;
        cout << "3. Hien thi thong tin." << endl;
        cout << "4. Thoat khoi chuong trinh." << endl;

        cout << "Chon yeu cau can thuc hien:  ";
        cin >> choice;  
        switch(choice)
        {
            case choice_1:
            {
                cout << "1. Them moi giao vien." << endl;
                teacherCon.addTeacher();
                break;
            }
            case choice_2:
            {
                cout << "2. Xoa giao vien." << endl;
                teacherCon.deleteTeacher();
                break;
            }
            case choice_3:
            {
                cout << "3. Hien thi thong tin." << endl;
                teacherCon.showTeacher();
                break;
            }
            case choice_4:
            {
                cout << "4. Thoat khoi chuong trinh." << endl;
                flag = 0;
                break;
            }
            default:   
                break;
        }
    }
}
UI::~UI()
{
    
}