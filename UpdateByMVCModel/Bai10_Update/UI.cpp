#include "UI.h"

UI::UI()
{
    int choice = 0;
    while (flag)
    {
        cout << "__________________________" << endl;
        cout << "1. Dem so tu." << endl;
        cout << "2. Dem so ky tu." << endl;
        cout << "3. Chuan hoa van ban." << endl;
        cout << "4. Thoat khoi chuong trinh." << endl;

        cout << "Chon yeu cau can thuc hien:  " ;
        cin >> choice;  
        switch(choice)
        {
            case cmd_1:
            {
                cout << "1. Dem so tu."  << endl;
                m_vbIO.printTongSoTu(m_vbCon.demSoTu());
                break;
            }
            case cmd_2:
            {
                cout << "2. Dem so ky tu." << endl;
                m_vbIO.printTongSoKyTu(m_vbCon.demSoKyTu());
                break;
            }
            case cmd_3:
            {
                cout << "3. Chuan hoa van ban." << endl;
                m_vbIO.printString(m_vbCon.chuanHoaVanBan());
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