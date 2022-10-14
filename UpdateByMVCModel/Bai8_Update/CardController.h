#ifndef _CARDCONTROLLER_H_
#define _CARDCONTROLLER_H_

#include "CardView.h"
#include <vector>

class CardController
{
    private:
        vector<Card*> pCard;
        CardView m_cardView;
    public:
        CardController();
        ~CardController();
        void addCard();
        void deleteCard();
        void showCard();
};

#endif