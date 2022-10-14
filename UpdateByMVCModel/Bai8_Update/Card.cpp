#include "Card.h"

Card::Card()
{
    m_id = 0;
    m_borrowDate = 0;
    m_paymentDate = 0;
    m_idBook = 0;
}
Card::Card(Student student, int id, int borrowDate, int paymentDate, int idBook)
{
    m_student = student;
    m_id = id;
    m_borrowDate = borrowDate;
    m_paymentDate = paymentDate;
    m_idBook = idBook;
}
Card::Card(Card& card)
{
    m_student = card.m_student;
    m_id = card.m_id;
    m_borrowDate = card.m_borrowDate;
    m_paymentDate = card.m_paymentDate;
    m_idBook = card.m_idBook;
}
Card::~Card()
{

}
void Card::setStudent(Student student)
{
    m_student = student;
}
Student Card::getStudent()
{
    return m_student;
}
void Card::setId(int id)
{
    m_id = id;
}
int Card::getId()
{
    return m_id;
}
void Card::setBorrowDate(int borrowDate)
{
    m_borrowDate = borrowDate;
}
int Card::getBorrowDate()
{
    return m_borrowDate;
}
void Card::setPaymentDate(int paymentDate)
{
    m_paymentDate = paymentDate;
}
int Card::getPaymentDate()
{
    return m_paymentDate;
}
void Card::setIdBook(int idBook)
{
    m_idBook = idBook;
}
int Card::getIdBook()
{
    return m_idBook;
}