#include "VanBanController.h"

VanBanController::VanBanController()
{

}
VanBanController::~VanBanController()
{

}
int VanBanController::demSoTu()
{
    string chuoiKyTu = m_vanBanIO.inputString();
    if(chuoiKyTu.empty())
    {
        m_vanBanIO.printEmptyString();
    }
    vector<string> listWord;
    string word;
    for(auto x : chuoiKyTu)
    {
        if(x == ' ')
        {
            if(!word.empty())
            {
                listWord.push_back(word);
                word = "";
            }
        }
        else
        {
            word = word + x;
        }
    }
    return listWord.size();
}
int VanBanController::demSoKyTu()
{
    string chuoiKyTu = m_vanBanIO.inputString();
    int countChar = 0;
    if(chuoiKyTu.empty())
    {
        m_vanBanIO.printEmptyString();
    }
    for (auto x : chuoiKyTu)
    {
        if(x == ' ' || x == '\0')
        {
            continue;
        }
        else
        {
            countChar++;
        }
    }
    return countChar;
    
}
string VanBanController::chuanHoaVanBan()
{
    string chuoiKyTu = m_vanBanIO.inputString();
    if (chuoiKyTu.empty())
    {
        m_vanBanIO.printEmptyString();
    }
    else
    {
        string tempStr;
        int count = 0;
        // xoa nhieu dau cach lien ke ve 1 dau cach
        for (auto x : chuoiKyTu)
        {
            if (x == ' ')
            {
                count++;
                if (count == 2)
                {
                    count = 1;
                    continue;
                }
            }
            else {
                if (count==1)
                {
                    tempStr = tempStr + " ";
                    count = 0;
                }
                tempStr = tempStr + x;
            }
        }

        //xoa dau cach o dau chuoi
        if (tempStr[0] == ' ') 
        {
            tempStr.erase(tempStr.begin());
        }

        // xoa dau cach cuoi chuoi
        if (tempStr[tempStr.size() - 1] == ' ')
        {
            tempStr.erase(tempStr.end()-1);
        }

        // tra ve chuoi van ban duoc chuan hoa
        chuoiKyTu = tempStr;
    }
    return chuoiKyTu;
}