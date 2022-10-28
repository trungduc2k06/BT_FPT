#include "UI.h"

UI::UI()
{
    int choice = 0;
    while (flag)
    {
        cout << "__________________________" << endl;
        cout << "1. Cong 2 so phuc." << endl;
        cout << "2. Tru 2 so phuc." << endl;
        cout << "3. Nhan 2 so phuc." << endl;
        cout << "4. Thoat khoi chuong trinh." << endl;

        cout << "Chon yeu cau can thuc hien:  " ;
        cin >> choice;  
        switch(choice)
        {
            case cmd_add:
            {
                cout << "1. Cong 2 so phuc."  << endl;
                m_spCon.tong2SoPhuc();
                break;
            }
            case cmd_sub:
            {
                cout << "2. Tru 2 so phuc." << endl;
                m_spCon.hieu2SoPhuc();
                break;
            }
            case cmd_mul:
            {
                cout << "3. Nhan 2 so phuc." << endl;
                m_spCon.nhan2SoPhuc();
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