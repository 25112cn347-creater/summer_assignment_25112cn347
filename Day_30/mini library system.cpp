//Write a program to Create mini library system. 
#include <iostream>
using namespace std;

int main() {
    int bookID[100];
    string bookName[100], author[100];
    int n = 0, choice, searchID, i;

    do {
        cout << "\n===== MINI LIBRARY SYSTEM =====";
        cout << "\n1. Add Book";
        cout << "\n2. Display Books";
        cout << "\n3. Search Book";
        cout << "\n4. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice) {

            case 1:
                cout << "Enter Book ID: ";
                cin >> bookID[n];

                cout << "Enter Book Name: ";
                cin >> bookName[n];

                cout << "Enter Author Name: ";
                cin >> author[n];

                n++;
                cout << "Book added successfully!";
                break;

            case 2:
                cout << "\nID\tBook Name\tAuthor\n";
                for(i = 0; i < n; i++) {
                    cout << bookID[i] << "\t"
                         << bookName[i] << "\t\t"
                         << author[i] << endl;
                }
                break;

            case 3:
                cout << "Enter Book ID to search: ";
                cin >> searchID;

                for(i = 0; i < n; i++) {
                    if(bookID[i] == searchID) {
                        cout << "\nBook Found!";
                        cout << "\nID: " << bookID[i];
                        cout << "\nBook Name: " << bookName[i];
                        cout << "\nAuthor: " << author[i];
                        break;
                    }
                }

                if(i == n)
                    cout << "Book not found!";
                break;

            case 4:
                cout << "Exiting Library System...";
                break;

            default:
                cout << "Invalid choice!";
        }

    } while(choice != 4);

    return 0;
}
