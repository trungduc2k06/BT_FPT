#include "GoodStudent.h"

GoodStudent::GoodStudent()
{
    m_GPA = 0;
    m_bestRewardName = " ";
}
GoodStudent::GoodStudent(float gpa, string bestRW)
{
    m_GPA = gpa;
    m_bestRewardName = bestRW;
}
GoodStudent::GoodStudent(GoodStudent& st)
{
    m_GPA = st.m_GPA;
    m_bestRewardName = st.m_bestRewardName;
}
GoodStudent::~GoodStudent()
{

}
void GoodStudent::setGPA(float gpa)
{
    m_GPA = gpa;
}
float GoodStudent::getGPA()
{
    return m_GPA;
}
void GoodStudent::setBestReward(string bestRW)
{
    m_bestRewardName = bestRW;
}
string GoodStudent::getBestReward()
{
    return m_bestRewardName;
}
int	GoodStudent::getGradeType()
{
    return t_good;
}