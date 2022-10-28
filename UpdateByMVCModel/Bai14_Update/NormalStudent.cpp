#include "NormalStudent.h"

NormalStudent::NormalStudent()
{
    m_englishScore = 0;
    m_entryTestScore = 0;
}
NormalStudent::NormalStudent(int engScore, int eTestScore)
{
    m_englishScore = engScore;
    m_entryTestScore = eTestScore;
}
NormalStudent::NormalStudent(NormalStudent& st)
{
    m_englishScore = st.m_englishScore;
    m_entryTestScore = st.m_entryTestScore;
}
NormalStudent::~NormalStudent()
{

}
void NormalStudent::setEnglishScore(int engScore)
{
    m_englishScore = engScore;
}
int	NormalStudent::getEnglishScore()
{
    return m_englishScore;
}
void NormalStudent::setEntryTestScore(int eTestScore)
{
    m_entryTestScore = eTestScore;
}
int	NormalStudent::getEntryTestScore()
{
    return m_entryTestScore;
}
int	 NormalStudent::getGradeType()
{
    return t_normal;
}