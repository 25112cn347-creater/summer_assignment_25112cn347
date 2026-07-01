//Write a program to Create student record system using arrays and strings.
#include <iostream>
using namespace std;

int main() {
    int roll[100], marks[100];
    string name[100];
    int n = 0, choice, searchRoll, i;

    do {
        cout << "\n===== STUDENT RECORD SYSTEM =====";
        cout << "\n1. Add Student";
        cout << "\n2. Display Students";
        cout << "\n3. Search Student";
        cout << "\n4. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice) {

            case 1:
                cout << "Enter Roll Number: ";
                cin >> roll[n];

                cout << "Enter Name: ";
                cin >> name[n];

                cout << "Enter Marks: ";
                cin >> marks[n];

                n++;
                cout << "Student record added successfully!";
                break;

            case 2:
                cout << "\nRoll\tName\tMarks\n";
                for(i = 0; i < n; i++) {
                    cout << roll[i] << "\t"
                         << name[i] << "\t"
                         << marks[i] << endl;
                }
                break;

            case 3:
                cout << "Enter Roll Number to search: ";
                cin >> searchRoll;

                for(i = 0; i < n; i++) {
                    if(roll[i] == searchRoll) {
                        cout << "\nStudent Found!";
                        cout << "\nRoll: " << roll[i];
                        cout << "\nName: " << name[i];
                        cout << "\nMarks: " << marks[i];
                        break;
                    }
                }

                if(i == n)
                    cout << "Student not found!";
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
