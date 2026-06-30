//Write a program to Create ATM simulation.
#include <iostream>
using namespace std;

// Function declarations
void checkBalance(double balance);
double deposit(double balance);
double withdraw(double balance);

int main() {
    int pin = 1234;
    int enteredPin, choice;
    double balance = 10000;

    cout << "Enter PIN: ";
    cin >> enteredPin;

    if (enteredPin != pin) {
        cout << "Incorrect PIN. Access Denied!";
        return 0;
    }

    do {
        cout << "\n====== ATM MENU ======\n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                checkBalance(balance);
                break;

            case 2:
                balance = deposit(balance);
                break;

            case 3:
                balance = withdraw(balance);
                break;

            case 4:
                cout << "Thank you for using ATM!\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }

    } while (choice != 4);

    return 0;
}

void checkBalance(double balance) {
    cout << "Current Balance: " << balance << endl;
}

double deposit(double balance) {
    double amount;
    cout << "Enter amount to deposit: ";
    cin >> amount;

    if (amount > 0) {
        balance += amount;
        cout << "Deposited successfully!\n";
    } else {
        cout << "Invalid amount!\n";
    }

    return balance;
}

double withdraw(double balance) {
    double amount;
    cout << "Enter amount to withdraw: ";
    cin >> amount;

    if (amount <= balance && amount > 0) {
        balance -= amount;
        cout << "Please collect your cash\n";
    } else {
        cout << "Insufficient balance or invalid amount!\n";
    }

    return balance;
}
