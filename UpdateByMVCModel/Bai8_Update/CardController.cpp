#include "CardController.h"

CardController::CardController()
{

}
CardController::~CardController()
{

}
void CardController::addCard()
{
    int numCardAdd = m_cardView.inputNumCardAdd();
    for (int i = 0; i < numCardAdd; i++)
    {
        Card* card = new Card(m_cardView.inputCard());
        pCard.push_back(card);
    }
}
void CardController::showCard()
{
    for (int i = 0; i < pCard.size(); i++)
    {
        m_cardView.printCardInfo(pCard[i]->getStudent(), pCard[i]->getId(), pCard[i]->getBorrowDate(), pCard[i]->getPaymentDate(), pCard[i]->getIdBook());
    }    
}
void CardController::deleteCard()
{
    bool check = 0;
    int idCardDelete = m_cardView.inputCardIdDelete();
    for (int i = 0; i < pCard.size(); i++)
    {
        if(pCard[i]->getId() == idCardDelete)
        {
            pCard.erase(pCard.begin() + i);
            check = 1;
        }
    }
    m_cardView.printCheckIdCardFind(check);
}
