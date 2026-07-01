//Write a program to Create menu-driven calculator.
#include <iostream>
using namespace std;

int main() {
    int choice;
    float a, b;

    cout << "***** MENU DRIVEN CALCULATOR *****\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "Enter your choice: ";
    cin >> choice;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    switch(choice) {
        case 1:
            cout << "Addition = " << a + b;
            break;

        case 2:
            cout << "Subtraction = " << a - b;
            break;

        case 3:
            cout << "Multiplication = " << a * b;
            break;

        case 4:
            if(b != 0)
                cout << "Division = " << a / b;
            else
                cout << "Division by zero is not possible.";
            break;

        default:
            cout << "Invalid Choice!";
    }

    return 0;
}
