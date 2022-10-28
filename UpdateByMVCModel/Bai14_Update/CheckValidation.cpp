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
            throw InvalidDOBException("Invalid day!");
        }
        if(month <= 0 || month >= 13)
        {
            throw InvalidDOBException("Invalid month!");
        }
        if(year <= 1950 || year >= 2005)
        {
            throw InvalidDOBException("Invalid year!");
        }
    }
    catch (InvalidDOBException& ex)
    {
        cout << ex.what() << endl;
        return false;
    }
    return true;
}
bool CheckValidation::checkGender(string gender)
{
    try
    {
        if (gender != "male" && gender != "female" && gender != "other")
        {
            throw GenderException();
        }
    }
    catch (GenderException& ex)
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
            if(!is_character(name[i]) && name[i] == ' ')
            {
                // if(name[i] == ' ')
                // {
                    throw InvalidFullNameException();
                // }
            }
        }
        if(name.length() <= 10 || name.length() >= 50)
        {
            throw InvalidFullNameException();
        }
    }
    catch(InvalidFullNameException& ex)
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
        if (phone.length() != 10)
        {
            throw InvalidPhoneNumberException();
        }
        for(int i = 0; i < phone.length(); i++)
        {
            if(!is_number(phone[i]))
            {
                throw InvalidPhoneNumberException();
            }
        }
        string head[6] = headNumberPhone;
        string headnum = "";
        for (int i=0; i<3; i++)
        {
            headnum += phone[i];
        }
        for (int i = 0; i < 6; i++)
        {
            if (head[i] == headnum)
            {
                return true;
            }
            else
            {
                throw InvalidPhoneNumberException();
            }
        }
    }
    catch (InvalidPhoneNumberException& ex)
    {
        cout << ex.what() << endl;
        return false;
    }
    return true;
}
bool CheckValidation::checkGPA(float gpa)
{
    try
    {
        if (gpa < 0 || gpa > 10)
        {
            throw OtherException();
        }
    }
    catch (OtherException& ex)
    {
        cout << ex.what() << endl;
        return false;
    }
    return true;
}
bool CheckValidation::checkToeic(int toeicScore)
{
    try
    {
        if (toeicScore < 0 || toeicScore > 990)
        {
            throw OtherException();
        }
    }
    catch (OtherException& ex)
    {
        cout << ex.what() << endl;
        return false;
    }
    return true;
}
bool CheckValidation::checkNumApplicant(int num)
{
    try
    {
        if (num < 1 || num > 5)
        {
            throw OtherException();
        }
    }
    catch (OtherException& ex)
    {
        cout << ex.what() << endl;
        return false;
    }
    return true;
}