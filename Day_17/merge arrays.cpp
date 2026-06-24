//wap to merge arrays.
#include <iostream>
using namespace std;

int main() {
    int arr[100], b[50];
    int n1, n2, i;

    cout << "Enter size of first array: ";
    cin >> n1;

    cout << "Enter elements of first array:\n";
    for (i = 0; i < n1; i++) {
        cin >> arr[i];
    }

    cout << "Enter size of second array: ";
    cin >> n2;

    cout << "Enter elements of second array:\n";
    for (i = 0; i < n2; i++) {
        cin >> b[i];
    }

    // Merge b into arr
    for (i = 0; i < n2; i++) {
        arr[n1 + i] = b[i];
    }

    cout << "Merged array:\n";
    for (i = 0; i < n1 + n2; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
