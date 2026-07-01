//Write a program to Create inventory management system. 
#include <iostream>
using namespace std;

int main() {
    int id[100], qty[100];
    float price[100];
    string name[100];

    int n = 0, choice, searchId, i;

    do {
        cout << "\n===== INVENTORY MENU =====";
        cout << "\n1. Add Product";
        cout << "\n2. Display Products";
        cout << "\n3. Search Product";
        cout << "\n4. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice) {

            case 1:
                cout << "Enter Product ID: ";
                cin >> id[n];

                cout << "Enter Product Name: ";
                cin >> name[n];

                cout << "Enter Quantity: ";
                cin >> qty[n];

                cout << "Enter Price: ";
                cin >> price[n];

                n++;
                cout << "Product added successfully!";
                break;

            case 2:
                cout << "\nID\tName\tQty\tPrice\n";
                for(i = 0; i < n; i++) {
                    cout << id[i] << "\t"
                         << name[i] << "\t"
                         << qty[i] << "\t"
                         << price[i] << endl;
                }
                break;

            case 3:
                cout << "Enter Product ID to search: ";
                cin >> searchId;

                for(i = 0; i < n; i++) {
                    if(id[i] == searchId) {
                        cout << "\nProduct Found!";
                        cout << "\nID: " << id[i];
                        cout << "\nName: " << name[i];
                        cout << "\nQuantity: " << qty[i];
                        cout << "\nPrice: " << price[i];
                        break;
                    }
                }

                if(i == n)
                    cout << "Product not found!";
                break;

            case 4:
                cout << "Exiting system...";
                break;

            default:
                cout << "Invalid choice!";
        }

    } while(choice != 4);

    return 0;
}
