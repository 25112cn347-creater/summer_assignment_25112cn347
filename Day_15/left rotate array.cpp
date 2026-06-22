//Write a program to Rotate array left.
#include <iostream>
using namespace std;

void reverseArray(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main() {
    int n, d;
    cin >> n >> d;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    d = d % n;  // handle cases where d > n

    // Step 1: reverse first d elements
    reverseArray(arr, 0, d - 1);

    // Step 2: reverse remaining elements
    reverseArray(arr, d, n - 1);

    // Step 3: reverse whole array
    reverseArray(arr, 0, n - 1);

    cout << "Array after left rotation by " << d << " places: ";

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
