#include "UI.h"

UI::UI()
{
    int choice = 0;

    while (flag)
    {
        cout << "_____________ HE THONG QUAN LY HOC SINH _____________" << endl;
        cout << "1. Them moi hoc sinh." << endl;
        cout << "2. Hien thi hoc sinh 20 tuoi ." << endl;
        cout << "3. So luong hoc sinh 23 tuoi va que o DN." << endl;
        cout << "4. Thoat khoi chuong trinh." << endl;

        cout << "Chon yeu cau can thuc hien:  ";
        cin >> choice;  
        switch(choice)
        {
            case choice_1:
            {
                cout << "1. Them moi hoc sinh." << endl;
                stucon.addStudent();
                break;
            }
            case choice_2:
            {
                cout << "2. Hien thi hoc sinh 20 tuoi ." << endl;
                stucon.getStudent20YearOld();
                break;
            }
            case choice_3:
            {
                cout << "3. So luong hoc sinh 23 tuoi va que o DN." << endl;
                stucon.getStudent23YearOldAndDN();
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