#include "UI.h"

UI::UI()
{
    int option;
    while (flag)
    {
        cout << "______________EMPLOYEE MANAGEMENT PROGRAM_______________" << endl;
        cout << "1. Add employees" << endl;
        cout << "2. Modify employee's information by ID" << endl;
        cout << "3. Delete employees by ID" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter the option: ";
        cin >> option;

        switch (option)
        {
        case 1:
        {
            cout << "1. Add employees" << endl;
            con.addEmployee();
            break;
        }
        case 2:
        {
            string id;
            cout << "2. Modify employee's information by ID" << endl;
            cout << "Enter employee's ID: ";
            cin >> id;
            con.modifyEmployeeInfoByID(id);
            break;
        }
        case 3:
        {
            string id;
            cout << "3. Delete employees by ID" << endl;
            cout << "Enter employee's ID: ";
            cin >> id;
            con.removeEmployeeByID(id);
            break;
        }
        case 4:
        {
            flag = 0;
            break;
        }
        default:
            break;
        }

    }
}
UI::~UI()
{

}