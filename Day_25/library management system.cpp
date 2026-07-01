//Write a program to Create library management system. 
#include <iostream>
using namespace std;

string book[20];
int total = 0;

void addBook()
{
    cout << "Enter Book Name: ";
    cin.ignore();
    getline(cin, book[total]);
    total++;
    cout << "Book Added Successfully!\n";
}

void displayBooks()
{
    if (total == 0)
    {
        cout << "No Books Available.\n";
    }
    else
    {
        cout << "\nBooks in Library:\n";
        for (int i = 0; i < total; i++)
        {
            cout << i + 1 << ". " << book[i] << endl;
        }
    }
}

int main()
{
    int choice;

    do
    {
        cout << "\n===== LIBRARY MANAGEMENT SYSTEM =====\n";
        cout << "1. Add Book\n";
        cout << "2. Display Books\n";
        cout << "3. Exit\n";
        cout << "Enter Your Choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                addBook();
                break;

            case 2:
                displayBooks();
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
