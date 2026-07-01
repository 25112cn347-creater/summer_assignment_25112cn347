//Write a program to Create bank account system.
#include <iostream>
using namespace std;

class Bank
{
private:
    string name;
    int accountNo;
    float balance;

public:
    void createAccount()
    {
        cout << "Enter Name: ";
        cin.ignore();
        getline(cin, name);

        cout << "Enter Account Number: ";
        cin >> accountNo;

        cout << "Enter Initial Balance: ";
        cin >> balance;

        cout << "Account Created Successfully!\n";
    }

    void deposit()
    {
        float amount;
        cout << "Enter Amount to Deposit: ";
        cin >> amount;

        balance += amount;
        cout << "Amount Deposited Successfully!\n";
    }

    void withdraw()
    {
        float amount;
        cout << "Enter Amount to Withdraw: ";
        cin >> amount;

        if (amount <= balance)
        {
            balance -= amount;
            cout << "Withdrawal Successful!\n";
        }
        else
        {
            cout << "Insufficient Balance!\n";
        }
    }

    void display()
    {
        cout << "\nAccount Details:\n";
        cout << "Name: " << name << endl;
        cout << "Account No: " << accountNo << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main()
{
    Bank b;
    int choice;

    do
    {
        cout << "\n===== BANK MENU =====\n";
        cout << "1. Create Account\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Display Account\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            b.createAccount();
            break;

        case 2:
            b.deposit();
            break;

        case 3:
            b.withdraw();
            break;

        case 4:
            b.display();
            break;

        case 5:
            cout << "Thank You!\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 5);

    return 0;
}
