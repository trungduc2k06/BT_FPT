#ifndef _CARD_H_
#define _CARD_H_

#include "Student.h"

class Card
{
    private:
        Student m_student;
        int m_id;
        int m_borrowDate;
        int m_paymentDate;
        int m_idBook;
    public:
        Card();
        Card(Student student, int id, int borrowDate, int paymentDate, int idBook);
        Card(Card& card);
        ~Card();
        void setStudent(Student student);
        Student getStudent();
        void setId(int id);
        int getId();
        void setBorrowDate(int borrowDate);
        int getBorrowDate();
        void setPaymentDate(int paymentDate);
        int getPaymentDate();
        void setIdBook(int idBook);
        int getIdBook();
};

#endif