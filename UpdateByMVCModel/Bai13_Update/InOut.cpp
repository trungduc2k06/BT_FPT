#include "InOut.h"

/* Input */
//Employee
string InOut::inputEmployeeID()
{
    string ID;
    cout << "Nhap ID: ";
    cin.ignore();
    getline(cin, ID);
    return ID;
}
string InOut::inputEmployeeFullName()
{
    string fullname;
    cout << "Nhap ten: ";
    cin.ignore();
    getline(cin, fullname);
    while (!m_checkVali.checkName(fullname))
    {
        cout << "Nhap ten: ";
        cin.ignore();
        getline(cin, fullname);
    }    
    return fullname;
}
Date InOut::inputEmployeeBirth()
{
    Date date;
    cout << "Nhap ngay sinh: ";
    cin >> date.day;
    cout << "Nhap thang sinh: ";
    cin >> date.month;
    cout << "Nhap nam sinh: ";
    cin >> date.year;
    while (!m_checkVali.checkDate(date.day, date.month, date.year))
    {
        cout << "Nhap ngay sinh: ";
        cin >> date.day;
        cout << "Nhap thang sinh: ";
        cin >> date.month;
        cout << "Nhap nam sinh: ";
        cin >> date.year;
    }
    return date;
}
string InOut::inputEmployeePhone()
{
    string phone;
    cout << "Nhap so dien thoai: ";
    cin.ignore();
    getline(cin, phone);
    while (!m_checkVali.checkPhone(phone))
    {
        cout << "Nhap so dien thoai: ";
        cin.ignore();
        getline(cin, phone);
    }
    return phone;
}
string InOut::inputEmployeeEmail()
{
    string email;
    cout << "Nhap email: ";
    cin.ignore();
    getline(cin, email);
    while (!m_checkVali.checkEmail(email))
    {
        cout << "Nhap email: ";
        cin.ignore();
        getline(cin, email);
    }
    return email;
}
//Experience
int InOut::inputExperienceExpInYear()
{
    int expInYear;
    cout << "Nhap so nam kinh nghiem: ";
    cin >> expInYear;
    return expInYear;
}
string InOut::inputExperienceProSkill()
{
    string proSkill;
    cout << "Nhap ky nang chuyen mon: ";
    cin.ignore();
    getline(cin, proSkill);
    return proSkill;
}
Experience InOut::inputExperience()
{
    Experience experience;
    cout << "___________Nhap thong tin nhan vien Experience:___________" << endl;
    experience.setID(inputEmployeeID());
    experience.setFullName(inputEmployeeFullName());
    experience.setBirthday(inputEmployeeBirth());
    experience.setPhone(inputEmployeePhone());
    experience.setEmail(inputEmployeeEmail());
    experience.setExpInYear(inputExperienceExpInYear());
    experience.setProSkill(inputExperienceProSkill());
    cout << "Nhap thong tin bang cap: " << endl;
    experience.setCertifi(inputCertificate());
    return experience;
}
//Fresher
Date InOut::inputFresherGraduationDate()
{
    Date date;
    cout << "Nhap ngay tot nghiep: ";
    cin >> date.day;
    cout << "Nhap thang tot nghiep: ";
    cin >> date.month;
    cout << "Nhap nam tot nghiep: ";
    cin >> date.year;
    return date;
}
int InOut::inputFresherGraduationRank()
{
    int rank;
    cout << "Nhap xep loai tot nghiep: ";
    cin >> rank;
    return rank;
}
string InOut::inputFresherGraduationEducation()
{
    string education;
    cout << "Nhap ten truong tot nghiep: ";
    cin.ignore();
    getline(cin, education);
    return education;
}
Fresher InOut::inputFresher()
{
    Fresher fresher;
    cout << "___________Nhap thong tin nhan vien Fresher:___________" << endl;
    fresher.setID(inputEmployeeID());
    fresher.setFullName(inputEmployeeFullName());
    fresher.setBirthday(inputEmployeeBirth());
    fresher.setPhone(inputEmployeePhone());
    fresher.setEmail(inputEmployeeEmail());
    fresher.setGraduationDate(inputFresherGraduationDate());
    fresher.setGraduationRank(inputFresherGraduationRank());
    fresher.setEducation(inputFresherGraduationEducation());
    cout << "Nhap thong tin bang cap: " << endl;
    fresher.setCertifi(inputCertificate());
    return fresher;
}
//Intern
string InOut::inputInternMajor()
{
    string major;
    cout << "Nhap chuyen nganh: ";
    cin.ignore();
    getline(cin, major);
    return major;
}
int InOut::inputInternSemester()
{
    int semester;
    cout << "Nhap hoc ki dang hoc: ";
    cin >> semester;
    return semester;
}
string InOut::inputInternUniName()
{
    string uniName;
    cout << "Nhap ten truong dang hoc: ";
    cin.ignore();
    getline(cin, uniName);
    return uniName; 
}
Intern InOut::inputIntern()
{
    Intern intern;
    cout << "___________Nhap thong tin nhan vien Intern:___________" << endl;
    intern.setID(inputEmployeeID());
    intern.setFullName(inputEmployeeFullName());
    intern.setBirthday(inputEmployeeBirth());
    intern.setPhone(inputEmployeePhone());
    intern.setEmail(inputEmployeeEmail());
    intern.setMajor(inputInternMajor());
    intern.setSemester(inputInternSemester());
    intern.setUniversity(inputInternUniName());
    cout << "Nhap thong tin bang cap: " << endl;
    intern.setCertifi(inputCertificate());
    return intern;
}
//Certificate
vector<Certificate*> InOut::inputCertificate()
{
    vector<Certificate*> pCertificate;
    int num;
    cout << "Nhap so bang cap cua nhan vien: " ;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        int cID;
		string cName;
		int cRank;
        Date cDate;
        cout << "___________Nhap thong tin bang cap:___________" << endl;
        cout << "Nhap ID bang: ";
        cin >> cID;
        cout << "Nhap ten bang: " ;
        cin.ignore();
        getline(cin, cName);
        cout << "Nhap xep loai bang: " ;
        cin >> cRank;
        cout << "Nhap thoi gian nhan bang: " << endl;
        cout << "Ngay: "; cin >> cDate.day;
        cout << "Thang: "; cin >> cDate.month;
        cout << "Nam: " ; cin >> cDate.year;
        Certificate* certi = new Certificate(cID, cName, cRank, cDate);
        pCertificate.push_back(certi);
    }
    return pCertificate; 
}
void InOut::showCertifi(Certificate* cer)
{
    Date certifiDate = cer->getCertificatedDate();
    cout << "Certificate ID: " << cer->getCertificatedID() << endl;
    cout << "Certificate name: " << cer->getCertificateName() << endl;
    cout << "Certificate rank: " << cer->getCertificateRank() << endl;
    cout << "Certificate date: " << certifiDate.day << "/" << certifiDate.month << "/" << certifiDate.year << endl;
}
void InOut::showListCertifi(vector<Certificate*> pCertificate)
{
    if(pCertificate.empty())
    {
        cout << "Khong co du lieu!" << endl;
        return;
    }
    for (int i = 0; i < pCertificate.size(); i++)
    {
        cout << i + 1 << ".";
        showCertifi(pCertificate[i]);
    }
}
//
int InOut::inputNumEmployeeAdd()
{
    int num;
    cout << "Nhap so nhan vien can them: ";
    cin >> num;
    return num;
}
/* Output */
void InOut::printInfoEmployee(string id, string fullname, Date birth, string phone, string email, int type, vector<Certificate*> pCertificate)
{
    cout << "ID: " << id << endl;
    cout << "Fullname: " << fullname << endl;
    cout << "Birth: " << birth.day << "/" << birth.month << "/" << birth.year << endl;
    cout << "Phone: " << phone << endl;
    cout << "Email: " << email << endl;
    if (type == t_experience)
	{
		cout << "Type of employee: Experience." << endl;
	}
	if (type == t_fresher)
	{
		cout << "Type of employee: Fresher." << endl;
	}
	if (type == t_intern)
	{
		cout << "Type of employee: Intern." << endl;
	}
    cout << "Number of Certificate: " << pCertificate.size() << endl;
	showListCertifi(pCertificate);
}
void InOut::printInfoExperience(Employee* employ, int expInYear, string proSkill)
{
    cout << "___________Thong tin nhan vien Experience:___________" << endl;
    printInfoEmployee(employ->getID(), employ->getFullName(), employ->getBirthday(), employ->getPhone(), employ->getEmail(), employ->getEmployeeType(), employ->getCertifi());
    cout << "So nam kinh nghiem: " << expInYear << endl;
    cout << "Ky nang chuyen mon: " << proSkill << endl;
}
void InOut::printInfoFresher(Employee* employ, Date graDate, int graRank, string education)
{
    cout << "___________Thong tin nhan vien Fresher:___________" << endl;
    printInfoEmployee(employ->getID(), employ->getFullName(), employ->getBirthday(), employ->getPhone(), employ->getEmail(), employ->getEmployeeType(), employ->getCertifi());
    cout << "Thoi gian tot nghiep: " << graDate.day << "/" << graDate.month << "/" << graDate.year << endl;
    cout << "Xep loai tot nghiep: " << graRank << endl;
    cout << "Truong tot nghiep: " << education << endl;
}
void InOut::printInfoIntern(Employee* employ, string major, int semester, string uniName)
{
    cout << "___________Thong tin nhan vien Intern:___________" << endl;
    printInfoEmployee(employ->getID(), employ->getFullName(), employ->getBirthday(), employ->getPhone(), employ->getEmail(), employ->getEmployeeType(), employ->getCertifi());
    cout << "Chuyen nganh dang hoc: " << major << endl;
    cout << "Hoc ki dang hoc: " << semester << endl;
    cout << "Ten truong dai hoc: " << uniName << endl;
}