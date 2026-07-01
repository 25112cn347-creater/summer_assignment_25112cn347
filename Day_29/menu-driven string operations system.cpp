//Write a program to Create menu-driven string operations system.
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2, result;
    int choice;

    cout << "Enter first string: ";
    getline(cin, str1);

    do {
        cout << "\n----- STRING MENU -----";
        cout << "\n1. Find Length";
        cout << "\n2. Copy String";
        cout << "\n3. Concatenate Strings";
        cout << "\n4. Reverse String";
        cout << "\n5. Compare Strings";
        cout << "\n6. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;
        cin.ignore();

        switch(choice) {

            case 1:
                cout << "Length of string = " << str1.length();
                break;

            case 2:
                result = str1;
                cout << "Copied string = " << result;
                break;

            case 3:
                cout << "Enter second string: ";
                getline(cin, str2);
                result = str1 + str2;
                cout << "Concatenated string = " << result;
                break;

            case 4:
                result = string(str1.rbegin(), str1.rend());
                cout << "Reversed string = " << result;
                break;

            case 5:
                cout << "Enter second string: ";
                getline(cin, str2);

                if(str1 == str2)
                    cout << "Strings are equal";
                else if(str1 > str2)
                    cout << "First string is greater";
                else
                    cout << "Second string is greater";
                break;

            case 6:
                cout << "Exiting program...";
                break;

            default:
                cout << "Invalid choice!";
        }

    } while(choice != 6);

    return 0;
}
