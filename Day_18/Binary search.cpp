//Write a program to Binary search. 
#include <iostream>
using namespace std;

int main() {
    int arr[100], n, key, low, high, mid;

    cout << "Enter size: ";
    cin >> n;

    cout << "Enter sorted elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter element to search: ";
    cin >> key;

    low = 0;
    high = n - 1;

    while(low <= high) {
        mid = (low + high) / 2;

        if(arr[mid] == key) {
            cout << "Found at position " << mid + 1;
            return 0;
        }
        else if(arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    cout << "Not found";

    return 0;
}
