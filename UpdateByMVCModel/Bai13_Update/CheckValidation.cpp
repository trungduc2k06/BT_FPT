#include "CheckValidation.h"

bool CheckValidation::is_character(char ch)
{
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        return true;
    }
    return false;
}
bool CheckValidation::is_number(char ch)
{
    if(ch >= '0' && ch <='9')
    {
        return true;
    }
    return false;
}
bool CheckValidation::checkDate(int day, int month, int year)
{
    try
    {
        if(day <= 0 || day >= 32)
        {
            throw BirthDayException("Invalid day!");
        }
        if(month <= 0 || month >= 13)
        {
            throw BirthDayException("Invalid month!");
        }
        if(year <= 1950 || year >= 2005)
        {
            throw BirthDayException("Invalid year!");
        }
    }
    catch (BirthDayException& ex)
    {
        cout << ex.what() << endl;
        return false;
    }
    return true;
}
bool CheckValidation::checkEmail(string email)
{
    try
    {
        if(!is_character(email[0]))
        {
            throw EmailException();
        }
        int At = -1, Dot = -1;
        for (int i = 0; i < email.size(); i++)
        {
            if(email[i] == '@')
            {
                At = i;
            }
            else if(email[i] == '.')
            {
                Dot = i;
            }
        }
        // If At or Dot is not present
        if (At == -1 || Dot == -1)
            throw EmailException();

        // If Dot is present before At
        if (At > Dot)
            throw EmailException();

        // If Dot is present at the end
        if (Dot >= (email.length() - 1))
        {
            throw EmailException();
        }
    }
    catch(EmailException& ex)
    {
        cout << ex.what() << endl;
        return false;
    }
    return true;
}
bool CheckValidation::checkName(string name)
{
    try
    {
        for(int i = 0; i < name.length(); i++)
        {
            if(!is_character(name[i]))
            {
                if(name[i] == ' ')
                {
                    throw FullNameException();
                }
            }
        }
    }
    catch(FullNameException& ex)
    {
        cout << ex.what() << endl;
        return false;
    }
    return true;
}
bool CheckValidation::checkPhone(string phone)
{
    try
    {
        if(phone.length() != 10)
        {
            throw PhoneException();
        }
        for(int i = 0; i < phone.length(); i++)
        {
            if(!is_number(phone[i]))
            {
                throw PhoneException();
            }
        }
    }
    catch(PhoneException& ex)
    {
        cout << ex.what() << endl;
        return false;
    }
    return true;
    
}
// bool CheckValidation::checkSameID() {
//     try {
//         if (v.size() > 1) {
//             for (int i = 0; i < v.size() - 1; i++) {
//                 if (v[i]->getID() == v[v.size() - 1]->getID()) {      
//                     throw myException("Same ID. Enter again!");
//                 }
//             }
//         }
//     }
//     catch (myException &ex) {
//         cout << ex.what() << endl;
//         return true;
//     }
//     return false;
// }
