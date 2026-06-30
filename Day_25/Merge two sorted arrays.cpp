//Write a program to Merge two sorted arrays.
#include <iostream>
using namespace std;

int main() {
    int a[50], b[50], c[100];
    int n1, n2;

    cout << "Enter size of first array: ";
    cin >> n1;

    cout << "Enter elements of first sorted array: ";
    for (int i = 0; i < n1; i = i + 1) {
        cin >> a[i];
    }

    cout << "Enter size of second array: ";
    cin >> n2;

    cout << "Enter elements of second sorted array: ";
    for (int j = 0; j < n2; j = j + 1) {
        cin >> b[j];
    }

    int i = 0, j = 0, k = 0;

    while (i < n1 && j < n2) {
        if (a[i] < b[j]) {
            c[k] = a[i];
            i = i + 1;
        } else {
            c[k] = b[j];
            j = j + 1;
        }
        k = k + 1;
    }

    while (i < n1) {
        c[k] = a[i];
        i = i + 1;
        k = k + 1;
    }

    while (j < n2) {
        c[k] = b[j];
        j = j + 1;
        k = k + 1;
    }

    cout << "Merged array: ";
    for (int x = 0; x < k; x = x + 1) {
        cout << c[x] << " ";
    }

    return 0;
}
