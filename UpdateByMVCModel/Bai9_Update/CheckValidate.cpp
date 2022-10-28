#include "CheckValidate.h"

void CheckValidate::printCheckIdCardFind(bool check)
{
    if(check == 1) 
    {
        cout << "Success: Da xoa bien lai thanh cong!" << endl;
    }
    else 
    {
        cout << "Warning: Khong tim thay bien lai!" << endl;
    }
}