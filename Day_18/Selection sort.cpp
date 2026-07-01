//Write a program to Selection sort.
#include <iostream>
using namespace std;

// Function for Selection Sort
void selectionSort(int arr[], int n) {
    int i, j, minIndex, temp;

    for(i = 0; i < n - 1; i++) {
        minIndex = i;

        for(j = i + 1; j < n; j++) {
            if(arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Swap elements
        temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

int main() {
    int arr[100], n, i;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter array elements: ";
    for(i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Function call
    selectionSort(arr, n);

    cout << "Sorted Array: ";
    for(i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
