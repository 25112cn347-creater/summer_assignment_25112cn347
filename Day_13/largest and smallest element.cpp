//Write a program to Find largest and smallest element.
#include <iostream>
using namespace std;

int main() {
    int a[100], n;

    cout << "Enter number of elements: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }

    int largest = a[0];
    int smallest = a[0];

    for (int i = 1; i < n; i++) {
        if (a[i] > largest) {
            largest = a[i];
        }

        if (a[i] < smallest) {
            smallest = a[i];
        }
    }

    cout << "Largest element = " << largest << endl;
    cout << "Smallest element = " << smallest << endl;

    return 0;
}
