//Write a program to Create employee management system. 
#include <iostream>
using namespace std;

struct Employee {
    int id;
    string name;
    float salary;
};

int main() {
    Employee e[100];
    int n = 0;
    int choice;

    do {
        cout << "\n===== EMPLOYEE MANAGEMENT SYSTEM =====\n";
        cout << "1. Add Employee\n";
        cout << "2. Display Employees\n";
        cout << "3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter Employee ID: ";
            cin >> e[n].id;

            cout << "Enter Name: ";
            cin >> e[n].name;

            cout << "Enter Salary: ";
            cin >> e[n].salary;

            n++;
        }

        else if (choice == 2) {
            cout << "\n===== EMPLOYEE RECORDS =====\n";
            for (int i = 0; i < n; i++) {
                cout << "ID: " << e[i].id
                     << ", Name: " << e[i].name
                     << ", Salary: " << e[i].salary << endl;
            }
        }

        else if (choice == 3) {
            cout << "Exiting program...\n";
        }

        else {
            cout << "Invalid choice!\n";
        }

    } while (choice != 3);

    return 0;
}
