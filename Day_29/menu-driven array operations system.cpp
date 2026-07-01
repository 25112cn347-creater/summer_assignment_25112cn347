//Write a program to Create menu-driven array operations system. 
#include <iostream>
using namespace std;

int main() {
    int arr[100], n, i, choice, pos, value;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter array elements: ";
    for(i = 0; i < n; i++)
        cin >> arr[i];

    do {
        cout << "\n----- MENU -----";
        cout << "\n1. Display Array";
        cout << "\n2. Insert Element";
        cout << "\n3. Delete Element";
        cout << "\n4. Search Element";
        cout << "\n5. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Array Elements: ";
                for(i = 0; i < n; i++)
                    cout << arr[i] << " ";
                break;

            case 2:
                cout << "Enter position: ";
                cin >> pos;
                cout << "Enter value: ";
                cin >> value;

                for(i = n; i >= pos; i--)
                    arr[i] = arr[i - 1];

                arr[pos - 1] = value;
                n++;
                cout << "Element inserted.";
                break;

            case 3:
                cout << "Enter position to delete: ";
                cin >> pos;

                for(i = pos - 1; i < n - 1; i++)
                    arr[i] = arr[i + 1];

                n--;
                cout << "Element deleted.";
                break;

            case 4:
                cout << "Enter element to search: ";
                cin >> value;

                for(i = 0; i < n; i++) {
                    if(arr[i] == value) {
                        cout << "Element found at position " << i + 1;
                        break;
                    }
                }

                if(i == n)
                    cout << "Element not found.";
                break;

            case 5:
                cout << "Exiting...";
                break;

            default:
                cout << "Invalid choice!";
        }

    } while(choice != 5);

    return 0;
}
