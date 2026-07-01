//Write a program to Create contact management system. 
#include <iostream>
using namespace std;

class Contact
{
private:
    string name[20];
    string phone[20];
    int total = 0;

public:
    void addContact()
    {
        cout << "Enter Name: ";
        cin.ignore();
        getline(cin, name[total]);

        cout << "Enter Phone Number: ";
        cin >> phone[total];

        total++;
        cout << "Contact Added Successfully!\n";
    }

    void displayContacts()
    {
        if (total == 0)
        {
            cout << "No Contacts Available.\n";
        }
        else
        {
            cout << "\nContact List\n";
            for (int i = 0; i < total; i++)
            {
                cout << "Contact " << i + 1 << endl;
                cout << "Name : " << name[i] << endl;
                cout << "Phone: " << phone[i] << endl;
                cout << "---------------------\n";
            }
        }
    }
};

int main()
{
    Contact c;
    int choice;

    do
    {
        cout << "\n===== CONTACT MANAGEMENT SYSTEM =====\n";
        cout << "1. Add Contact\n";
        cout << "2. Display Contacts\n";
        cout << "3. Exit\n";
        cout << "Enter Your Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            c.addContact();
            break;

        case 2:
            c.displayContacts();
            break;

        case 3:
            cout << "Thank You!\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 3);

    return 0;
}
