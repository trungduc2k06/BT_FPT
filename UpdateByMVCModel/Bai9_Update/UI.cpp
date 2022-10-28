#include "UI.h"

UI::UI()
{
    int choice = 0;
    while (flag)
    {
        cout << "_____________ HE THONG QUAN LY BIEN LAI _____________" << endl;
        cout << "1. Them moi khach hang." << endl;
        cout << "2. Hien thi khach hang." << endl;
        cout << "3. Xoa khach hang." << endl;
        cout << "4. Thoat khoi chuong trinh." << endl;

        cout << "Chon yeu cau can thuc hien:  " ;
        cin >> choice;  
        switch(choice)
        {
            case cmd_add:
            {
                cout << "1. Them moi khach hang."  << endl;
                recCon.addReceipt();
                break;
            }
            case cmd_show:
            {
                cout << "2. Hien thi khach hang."  << endl;
                recCon.showReceipt();
                break;
            }
            case cmd_delete:
            {
                cout << "3. Xoa khach hang."  << endl;
                recCon.deleteReceipt();
                break;
            }
            case cmd_exit:
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