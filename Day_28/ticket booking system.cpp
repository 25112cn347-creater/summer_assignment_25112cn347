//Write a program to Create ticket booking system. 
#include <iostream>
using namespace std;

class Ticket
{
private:
    string name;
    int tickets;
    int available = 10; // total tickets available

public:
    void bookTicket()
    {
        cout << "Enter Your Name: ";
        cin.ignore();
        getline(cin, name);

        cout << "Enter Number of Tickets: ";
        cin >> tickets;

        if (tickets <= available)
        {
            available -= tickets;
            cout << "Ticket Booked Successfully!\n";
        }
        else
        {
            cout << "Sorry! Not enough tickets available.\n";
        }
    }

    void showStatus()
    {
        cout << "\nAvailable Tickets: " << available << endl;
    }
};

int main()
{
    Ticket t;
    int choice;

    do
    {
        cout << "\n===== TICKET BOOKING SYSTEM =====\n";
        cout << "1. Book Ticket\n";
        cout << "2. Show Available Tickets\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            t.bookTicket();
            break;

        case 2:
            t.showStatus();
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
