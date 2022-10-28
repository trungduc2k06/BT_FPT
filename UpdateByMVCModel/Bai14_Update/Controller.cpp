#include "Controller.h"

Controller::Controller()
{

}
Controller::~Controller()
{
    for (int i = 0; i < pStudent.size(); i++)
    {
        delete pStudent[i];
    }
}
void Controller::enterApplicantInfor()
{
    int numApplicant = m_inOut.inputNumApplicant();
    int choice;
    for (int i = 0; i < numApplicant; i++)
    {
        cout << "Choose type of applicant: " << endl;
        cout << "1. Good Student" << endl;
        cout << "2. Normal Student" << endl;
        cout << "Choose: ";
        cin >> choice;

        if (choice == t_good)
        {
            GoodStudent* goodStu = new GoodStudent(m_inOut.inputGoodStudent());
            m_countGood++;
            pStudent.push_back(goodStu);
        }

        if (choice == t_normal)
        {
            NormalStudent* normalStu = new NormalStudent(m_inOut.inputNormalStudent());
            m_countNormal++;
            pStudent.push_back(normalStu);
        }
    }
}
void Controller::showApplicantInfor()
{
    for (int i = 0; i < pStudent.size(); i++)
    {
        if(pStudent[i]->getGradeType() == t_good)
        {
            GoodStudent* goodStd = static_cast<GoodStudent*>(pStudent[i]);
            m_inOut.printInfoGoodStudent(pStudent[i], goodStd->getGPA(), goodStd->getBestReward());
        }
        if(pStudent[i]->getGradeType() == t_normal)
        {
            NormalStudent* normalStd = static_cast<NormalStudent*>(pStudent[i]);
            m_inOut.printInfoNormalStudent(pStudent[i], normalStd->getEnglishScore(), normalStd->getEntryTestScore());
        }
    }
}
void Controller::applicantSelect()
{
    std::vector<Student*> pRecruit;
    std::vector<GoodStudent*> pGood;
    std::vector<NormalStudent*> pNoraml;
    std::vector<Student*> ptemp;
    int numRecruit = m_inOut.inputNumRecruit();
    for (int i = 0; i < pStd.size(); i++)
    {
        if (pStd[i]->getGradeType() == t_good)
        {
            m_countGood++;
            GoodStudent* p = dynamic_cast<GoodStudent*>(pStd[i]);
            pGood.push_back(p);
        }
        if (pStd[i]->getGradeType() == t_normal)
        {
            m_countNormal++;
            NormalStudent* p = dynamic_cast<NormalStudent*>(pStd[i]);
            pNoraml.push_back(p);
        }
    }
    // ung vien loai goodstudent nhiu hon so luong can tuyen
    if (m_countGood > numRecruit)
    {
        bool stopflag = 1;
        while (stopflag)
        {
            float maxCPA = pGood[0]->getGPA();
            int index=0;
            for (int i = 0; i < pGood.size(); i++)
            {
                if (maxCPA < pGood[i]->getGPA())
                {
                    maxCPA = pGood[i]->getGPA();
                    index = i;
                }
            }
            pRecruit.push_back(pGood[index]);
            pGood.erase(pGood.begin() + index);
            if (pRecruit.size() == numRecruit)
            {
                stopflag = 0;
            }
        }

    }
    //so ung vien can tuyen bang so ung vien goodstudent
    else if (m_countGood = numRecruit)
    {
        for (int i = 0; i < numRecruit; i++)
        {
            pRecruit.push_back(pGood[i]);
        }
    }
    // so ung vien goodstudent it hon normalstudent
    else
    {
        int numNormal = numRecruit - m_countGood;
        bool stopflag = 1;

        for (int i = 0; i < m_countGood; i++)
        {
            pRecruit.push_back(pGood[i]);
        }

        while (stopflag)
        {
            float maxEntryScore = pNoraml[0]->getEntryTestScore();
            int index=0;
            for (int i = 0; i < pNoraml.size(); i++)
            {
                if (maxEntryScore < pNoraml[0]->getEntryTestScore())
                {
                    maxEntryScore = pNoraml[0]->getEntryTestScore();
                    index = i;
                }
            }
            pRecruit.push_back(pNoraml[index]);
            pNoraml.erase(pNoraml.begin() + index);
            if (pRecruit.size() == numRecruit)
            {
                stopflag = 0;
            }
        }

    }
}
// void Controller::arrangeGoodStudent()
// {
//     for (int i = 0; i < pStudent.size(); i++)
// 	{
// 		if (shared_ptr<GoodStudent> gs = dynamic_pointer_cast<GoodStudent>(pStudent[i]))
// 		{
// 			//cout << "casting complete" << endl;
// 			m_countGood++;
// 			index.push_back(i);
// 		}
// 	}
// 	for (int i=0 ; i < index.size() -1; i++)
// 	{
// 		for (int j = i + 1; j < index.size(); j++)
// 		{
// 			shared_ptr<GoodStudent> gs1 = dynamic_pointer_cast<GoodStudent>(pStudent[index[i]]);
// 			shared_ptr<GoodStudent> gs2 = dynamic_pointer_cast<GoodStudent>(pStudent[index[j]]);
// 			if (gs1->getGPA() < gs2->getGPA())
// 			{
// 				//SwapStudent(student[index[i]], student[index[j]]);
// 				swap(pStudent[index[i]], pStudent[index[j]]);
// 				continue;
// 			}
// 			else if (gs1->getGPA() == gs2->getGPA())
// 			{
// 				if ((gs1->getFullName()).compare(gs2->getFullName()))
// 				{
// 					//SwapStudent(student[index[i]], student[index[j]]);
// 					swap(pStudent[index[i]], pStudent[index[j]]);
// 				}
// 			}
// 		}
// 	}
// }
void Controller::arrangeNormalStudent()
{

}