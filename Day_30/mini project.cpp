//Write a program to Develop complete mini project using arrays, strings and functions. 
#include <iostream>
using namespace std;

const int MAX = 100;

int roll[MAX], marks[MAX];
string name[MAX];
int n = 0;

// Function to add student
void addStudent() {
    cout << "Enter Roll No: ";
    cin >> roll[n];

    cout << "Enter Name: ";
    cin >> name[n];

    cout << "Enter Marks: ";
    cin >> marks[n];

    n++;
    cout << "Student added successfully!\n";
}

// Function to display students
void displayStudents() {
    cout << "\nRoll\tName\tMarks\n";
    for(int i = 0; i < n; i++) {
        cout << roll[i] << "\t"
             << name[i] << "\t"
             << marks[i] << endl;
    }
}

// Function to search student
void searchStudent() {
    int r, i;
    cout << "Enter Roll No to search: ";
    cin >> r;

    for(i = 0; i < n; i++) {
        if(roll[i] == r) {
            cout << "\nStudent Found!\n";
            cout << "Roll: " << roll[i] << endl;
            cout << "Name: " << name[i] << endl;
            cout << "Marks: " << marks[i] << endl;
            return;
        }
    }
    cout << "Student not found!\n";
}

// Function to update marks
void updateMarks() {
    int r, i;
    cout << "Enter Roll No to update marks: ";
    cin >> r;

    for(i = 0; i < n; i++) {
        if(roll[i] == r) {
            cout << "Enter new marks: ";
            cin >> marks[i];
            cout << "Marks updated successfully!\n";
            return;
        }
    }
    cout << "Student not found!\n";
}

int main() {
    int choice;

    do {
        cout << "\n===== MINI STUDENT MANAGEMENT SYSTEM =====";
        cout << "\n1. Add Student";
        cout << "\n2. Display Students";
        cout << "\n3. Search Student";
        cout << "\n4. Update Marks";
        cout << "\n5. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                addStudent();
                break;

            case 2:
                displayStudents();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                updateMarks();
                break;

            case 5:
                cout << "Exiting program...\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }

    } while(choice != 5);

    return 0;
}
