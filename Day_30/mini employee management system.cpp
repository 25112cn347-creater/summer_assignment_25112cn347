//Write a program to Create mini employee management system.
#include <iostream>
using namespace std;

int main() {
    int empID[100], salary[100];
    string name[100], dept[100];

    int n = 0, choice, searchID, i;

    do {
        cout << "\n===== EMPLOYEE MANAGEMENT SYSTEM =====";
        cout << "\n1. Add Employee";
        cout << "\n2. Display Employees";
        cout << "\n3. Search Employee";
        cout << "\n4. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice) {

            case 1:
                cout << "Enter Employee ID: ";
                cin >> empID[n];

                cout << "Enter Name: ";
                cin >> name[n];

                cout << "Enter Department: ";
                cin >> dept[n];

                cout << "Enter Salary: ";
                cin >> salary[n];

                n++;
                cout << "Employee added successfully!";
                break;

            case 2:
                cout << "\nID\tName\tDept\tSalary\n";
                for(i = 0; i < n; i++) {
                    cout << empID[i] << "\t"
                         << name[i] << "\t"
                         << dept[i] << "\t"
                         << salary[i] << endl;
                }
                break;

            case 3:
                cout << "Enter Employee ID to search: ";
                cin >> searchID;

                for(i = 0; i < n; i++) {
                    if(empID[i] == searchID) {
                        cout << "\nEmployee Found!";
                        cout << "\nID: " << empID[i];
                        cout << "\nName: " << name[i];
                        cout << "\nDepartment: " << dept[i];
                        cout << "\nSalary: " << salary[i];
                        break;
                    }
                }

                if(i == n)
                    cout << "Employee not found!";
                break;

            case 4:
                cout << "Exiting system...";
                break;

            default:
                cout << "Invalid choice!";
        }

    } while(choice != 4);

    return 0;
}
