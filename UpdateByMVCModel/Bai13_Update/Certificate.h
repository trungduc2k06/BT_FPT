#ifndef _CERTIFICATE_H_
#define _CERTIFICATE_H_

#include <string>
#include "Library.h"

using namespace std;

class Certificate
{
private:
    int	m_certificatedID;
	string m_certificateName;
	int m_certificateRank;
	Date m_certificatedDate;
public:
    Certificate();
    Certificate(int, string, int, Date);
	Certificate(Certificate &);
	Certificate(vector<Certificate*>);
    ~Certificate();
    void setCertificatedID(int);
	int getCertificatedID();
	void setCertificateName(string);
	string getCertificateName();
	void setCertificateRank(int);
	int getCertificateRank();
	void setCertificatedDate(Date);
	Date getCertificatedDate();
};

#endif