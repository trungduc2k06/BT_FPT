#include "UI.h"

UI::UI()
{
    int choice = 0;
    while (flag)
    {
        cout << "_____________ HE THONG QUAN LY KHACH SAN _____________" << endl;
        cout << "1. Them moi khach hang." << endl;
        cout << "2. Xoa khach hang." << endl;
        cout << "3. Gia tien thue phong." << endl;
        cout << "4. Thoat khoi chuong trinh." << endl;

        cout << "Chon yeu cau can thuc hien:  " ;
        cin >> choice;  
        switch(choice)
        {
            case choice_1:
            {
                cout << "1. Them moi khach hang."  << endl;
                hotelcon.addCustomer();
                hotelcon.showCustomer();
                break;
            }
            case choice_2:
            {
                cout << "2. Xoa khach hang."  << endl;
                hotelcon.deleteCustomer();
                break;
            }
            case choice_3:
            {
                cout << "3. Gia tien thue phong."  << endl;
                hotelcon.calculateRoomRentPrice();
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