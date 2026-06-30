//Write a program to Create salary management system. 
#include <iostream>
using namespace std;

struct Employee {
    int id;
    string name;
    float basicSalary;
    float hra, da, pf, netSalary;
};

int main() {
    Employee e[100];
    int n;

    cout << "Enter number of employees: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "\nEnter details of employee " << i + 1 << ":\n";

        cout << "ID: ";
        cin >> e[i].id;

        cout << "Name: ";
        cin >> e[i].name;

        cout << "Basic Salary: ";
        cin >> e[i].basicSalary;

        // Salary calculations
        e[i].hra = 0.20 * e[i].basicSalary;  // 20% HRA
        e[i].da  = 0.10 * e[i].basicSalary;  // 10% DA
        e[i].pf  = 0.05 * e[i].basicSalary;  // 5% PF

        e[i].netSalary = e[i].basicSalary + e[i].hra + e[i].da - e[i].pf;
    }

    cout << "\n===== SALARY DETAILS =====\n";

    for (int i = 0; i < n; i++) {
        cout << "\nID: " << e[i].id;
        cout << "\nName: " << e[i].name;
        cout << "\nBasic Salary: " << e[i].basicSalary;
        cout << "\nHRA: " << e[i].hra;
        cout << "\nDA: " << e[i].da;
        cout << "\nPF: " << e[i].pf;
        cout << "\nNet Salary: " << e[i].netSalary;
        cout << "\n------------------------";
    }

    return 0;
}
