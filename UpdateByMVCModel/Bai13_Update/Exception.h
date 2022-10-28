#ifndef _EXCEPTION_H_
#define _EXCEPTION_H_

#include "Library.h"

class BirthDayException : public exception
{
    private:
        string message;
    public:
        BirthDayException(string msg)
        {
            message = msg;
        }
        string what()
        {
            return message;
        }
};


class PhoneException : public exception
{
    public:
        string what()
        {
            return "Invalid phone number!";
        }
};

class EmailException : public exception
{
    public:
        string what()
        {
            return "Invalid email!";
        }
};

class FullNameException : public exception
{
    public:
        string what()
        {
            return "Invalid name!";
        }
};
class myException : public exception
{
    string msg;
public:
    myException(string mess) 
    {
        msg = mess;
    }
    string what() {
        return msg;
    }
};
#endif 
