#ifndef _CHECKVALIDATION_H_
#define _CHECKVALIDATION_H_

#include "Library.h"
#include "Exception.h"

using namespace std;

class CheckValidation
{
    public:
        bool is_character(char ch);
        bool is_number(char ch);
        bool checkDate(int day, int month, int year);
        bool checkGender(string gender);
        bool checkName(string name);
        bool checkPhone(string phone);
        bool checkGPA(float gpa);
        bool checkToeic(int toeicScore);
        bool checkNumApplicant(int num);
};

#endif 