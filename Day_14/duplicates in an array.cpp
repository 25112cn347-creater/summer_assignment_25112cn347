//Write a program to Find duplicates in array. 
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Duplicate elements are: ";

    for (int i = 0; i < n; i++) {
        int index = abs(arr[i]);

        if (arr[index] >= 0) {
            arr[index] = -arr[index];
        }
        else {
            cout << index << " ";
        }
    }

    return 0;
}
