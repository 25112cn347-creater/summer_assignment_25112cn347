//Write a program to Create marksheet generation system. 
 #include <iostream>
using namespace std;

struct Student {
    int roll;
    string name;
    int m1, m2, m3;
    int total;
    float percentage;
};

int main() {
    Student s[100];
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "\nEnter details of student " << i + 1 << ":\n";

        cout << "Roll No: ";
        cin >> s[i].roll;

        cout << "Name: ";
        cin >> s[i].name;

        cout << "Marks of 3 subjects: ";
        cin >> s[i].m1 >> s[i].m2 >> s[i].m3;

        // Calculations
        s[i].total = s[i].m1 + s[i].m2 + s[i].m3;
        s[i].percentage = s[i].total / 3.0;
    }

    cout << "\n===== MARKSHEET =====\n";

    for (int i = 0; i < n; i++) {
        cout << "\nRoll No: " << s[i].roll;
        cout << "\nName: " << s[i].name;
        cout << "\nTotal Marks: " << s[i].total;
        cout << "\nPercentage: " << s[i].percentage << "%";

        if (s[i].percentage >= 40)
            cout << "\nResult: PASS";
        else
            cout << "\nResult: FAIL";

        cout << "\n----------------------";
    }

    return 0;
}
