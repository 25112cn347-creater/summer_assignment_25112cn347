//Write a program to Create student record management system.
#include <iostream>
using namespace std;

struct Student {
    int roll;
    string name;
    float marks;
};

int main() {
    Student s[100];
    int n, i;

    cout << "Enter number of students: ";
    cin >> n;

    // Input records
    for (i = 0; i < n; i++) {
        cout << "\nEnter details of student " << i + 1 << ":\n";
        cout << "Roll No: ";
        cin >> s[i].roll;

        cout << "Name: ";
        cin >> s[i].name;

        cout << "Marks: ";
        cin >> s[i].marks;
    }

    // Display records
    cout << "\n===== STUDENT RECORDS =====\n";
    for (i = 0; i < n; i++) {
        cout << "Roll No: " << s[i].roll
             << ", Name: " << s[i].name
             << ", Marks: " << s[i].marks << endl;
    }

    return 0;
}
