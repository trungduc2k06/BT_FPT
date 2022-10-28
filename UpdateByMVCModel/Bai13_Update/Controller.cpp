#include "Controller.h"

Controller::Controller()
{

}
Controller::~Controller()
{
    for (int i = 0; i < employee.size(); i++)
    {
        delete employee[i];
    }
    
}
void Controller::addEmployee()
{
    int numEmployAdd = m_inOut.inputNumEmployeeAdd();
    int employeeType;
    for (int i = 0; i < numEmployAdd; i++)
    {
        cout << "Chon nhan vien can nhap thong tin: " << endl;
        cout << "1. Experience" << endl;
        cout << "2. Fresher" << endl;
        cout << "3. Intern" << endl;
        cout << "Chon: ";
        cin >> employeeType;


        if(employeeType == t_experience)
        {
            Experience* exper = new Experience(m_inOut.inputExperience());
            exper->setEmployeeType(t_experience);
            employee.push_back(exper);
        }
        if(employeeType == t_fresher)
        {
            Fresher* fresher = new Fresher(m_inOut.inputFresher());
            fresher->setEmployeeType(t_fresher);
            employee.push_back(fresher);
        }
        if(employeeType == t_intern)
        {
            Intern* intern = new Intern(m_inOut.inputIntern());
            intern->setEmployeeType(t_intern);
            employee.push_back(intern);
        }
    }
}
void Controller::modifyEmployeeInfoByID(string id)
{
    for (int i = 0; i < employee.size(); i++)
    {
        int choice;
        if (employee[i]->getID() == id)
        {
            int stopFlag = 1;
            while (stopFlag)
            {
                cout << "Emter the information you want to modify: " << endl;
                cout << "1. Full name" << endl;
                cout << "2. Birthday" << endl;
                cout << "3. Phone" << endl;
                cout << "4. Email" << endl;
                cout << "5. Exit" << endl;
                cout << "Choose: ";
                fflush(stdin);
                cin >> choice;
                cin.ignore();

                switch (choice)
                {
                case 1:
                {
                    //check name
                    string fullName;
                    fflush(stdin);
                    cout << "Enter fullname: ";			
                    getline(cin, fullName);
                    while (!m_checkVali.checkName(fullName))
                    {
                        cout << "Enter fullname: ";		
                        getline(cin, fullName);
                    }
                    employee[i]->setFullName(fullName);
                    break;
                }
                case 2:
                {
                    //check date
                    Date date;
                    cout << "Enter Birthday: \n";
                    cout << "Enter day: ";				cin >> date.day;
                    cout << "Enter month: ";			cin >> date.month;
                    cout << "Enter year: ";				cin >> date.year;
                    while (!m_checkVali.checkDate(date.day, date.month, date.year))
                    {
                        cout << "Enter Birthday: \n";
                        cout << "Enter day: ";			cin >> date.day;
                        cout << "Enter month: ";		cin >> date.month;
                        cout << "Enter year: ";			cin >> date.year;
                    }
                    employee[i]->setBirthday(date);
                    break;
                }
                case 3:
                {
                    fflush(stdin);
                    string phone;
                    cout << "Enter phone: ";			
                    cin >> phone;
                    while (!m_checkVali.checkPhone(phone))
                    {
                        cout << "Enter phone: ";		
                        cin >> phone;
                    }
                    employee[i]->setPhone(phone);
                    break;
                }
                case 4:
                {
                    fflush(stdin);
                    string email;
                    cout << "Enter email: ";			
                    cin >> email;
                    while (!m_checkVali.checkEmail(email))
                    {
                        cout << "Enter email: ";			
                        cin >> email;
                    }
                    employee[i]->setEmail(email);
                    break;
                }
                case 5:
                {
                    stopFlag = 0;
                    break;
                }
                default:
                    break;
                }
            }
        }
    }
}
void Controller::removeEmployeeByID(string id)
{
    for (int i = 0; i < employee.size(); i++)
    {
        if (employee[i]->getID() == id)
        {
            employee.erase(employee.begin() + i);
        }
    }
}
void Controller::showEmployee()
{
    for (int i = 0; i < employee.size(); i++)
    {
        //m_inOut.printInfoEmployee(employee[i]->getID(), employee[i]->getFullName(), employee[i]->getBirthday(), employee[i]->getPhone(), employee[i]->getEmail(), employee[i]->getEmployeeType());
        if(employee[i]->getEmployeeType() == t_experience)
        {
            Experience* exper = static_cast<Experience*>(employee[i]);
            m_inOut.printInfoExperience(employee[i] ,exper->getExpInYear(), exper->getProSkill());
        }
        if(employee[i]->getEmployeeType() == t_fresher)
        {
            Fresher* fresher = static_cast<Fresher*>(employee[i]);
            m_inOut.printInfoFresher(employee[i], fresher->getGraduationDate(), fresher->getGraduationRank(), fresher->getEducation());
        }
        if(employee[i]->getEmployeeType() == t_intern)
        {
            Intern* intern = static_cast<Intern*>(employee[i]);
            m_inOut.printInfoIntern(employee[i], intern->getMajor(), intern->getSemester(), intern->getUniversity());
        }
    }
}
vector<Employee*> Controller::GroupbyType(int typeEm)
{
    vector<Employee*> temp;
    for (int i = 0; i < employee.size(); i++)
    {
        if (employee[i]->getEmployeeType() == typeEm)
        {
            temp.push_back(employee[i]);
        }
    }
    return temp;
}