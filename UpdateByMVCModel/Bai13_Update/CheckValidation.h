#ifndef _CHECKVALIDATION_H_
#define _CHECKVALIDATION_H_

#include <iostream>
#include <string>
#include "Exception.h"

using namespace std;

class CheckValidation
{
    private:
        //vector<Employee*> v;
    public:
        bool checkDate(int day, int month, int year);
        bool checkEmail(string email);
        bool checkName(string name);
        bool checkPhone(string phone);
        //bool checkID(string id);
        //bool checkSameID();
        bool is_character(char ch);
        bool is_number(char ch);
};


#endif