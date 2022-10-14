#include "QLHS.h"
#include <vector>

enum choiceType
{
    choice_1 = 1,
    choice_2,
    choice_3,
    choice_4,
};

void runProgram()
{
    bool flag = 1;
    int choice = 0;
    vector<HocSinh*> pHocSinh;

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
                int n = 0;
                cout << "1. Them moi hoc sinh." << endl;
                cout << "Nhap so luong hoc sinh: ";
                cin >> n;
                themMoiHocSinh(pHocSinh, n);
                break;
            }
            case choice_2:
            {
                cout << "2. Hien thi hoc sinh 20 tuoi ." << endl;
                hienThiThongTinHocSinh20Tuoi(pHocSinh);
                break;
            }
            case choice_3:
            {
                cout << "3. So luong hoc sinh 23 tuoi va que o DN." << endl;
                soLuongHocSinh23TuoiVaODn(pHocSinh);
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