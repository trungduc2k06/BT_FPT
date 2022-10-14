#ifndef _CARDVIEW_H_
#define _CARDVIEW_H_

#include "Card.h"

class CardView
{
    public:
        string inputStudentName();
        int inputStudentAge();
        string inputStudentClassroom();
        int inputCardId();
        int inputCardBorrowDate();
        int inputCardPaymentDate();
        int inputCardIdBook();
        Card inputCard();
        int inputNumCardAdd();
        int inputCardIdDelete();
        void printCheckIdCardFind(bool);
        void printStudentInfo(string, int, string);
        void printCardInfo(Student , int, int, int, int);
};

#endif