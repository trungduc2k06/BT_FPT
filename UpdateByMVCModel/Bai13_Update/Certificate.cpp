#include "Certificate.h"
#include "Library.h"

Certificate::Certificate()
{
    m_certificatedID = 0;
    m_certificateName = " ";
    m_certificateRank = 0;
    m_certificatedDate.day = 0;
    m_certificatedDate.month = 0;
    m_certificatedDate.year = 0;
}
Certificate::Certificate(int Cid, string Cname, int Crank, Date Cdate)
{
    m_certificatedID = Cid;
    m_certificateName = Cname;
    m_certificateRank = Crank;
    m_certificatedDate = Cdate;
}
Certificate::Certificate(Certificate& Cer)
{
    m_certificatedID = Cer.m_certificatedID;
    m_certificateName = Cer.m_certificateName;
    m_certificateRank = Cer.m_certificateRank;
    m_certificatedDate = Cer.m_certificatedDate;
}
Certificate::~Certificate()
{

}
void Certificate::setCertificatedID(int Cid)
{
    m_certificatedID = Cid;
}
int Certificate::getCertificatedID()
{
    return m_certificatedID;
}
void Certificate::setCertificateName(string Cname)
{
    m_certificateName = Cname;
}
string Certificate::getCertificateName()
{
    return m_certificateName;
}
void Certificate::setCertificateRank(int Crank)
{
    m_certificateRank = Crank;
}
int Certificate::getCertificateRank()
{
    return m_certificateRank;
}
void Certificate::setCertificatedDate(Date Cdate)
{
    m_certificatedDate = Cdate;
}
Date Certificate::getCertificatedDate()
{
    return m_certificatedDate;
}