//Write a program to Find sum and average of array. 
#include <iostream>
using namespace std;

int main() {
    int a[100], n, sum = 0;
    float avg;

    cout << "Enter number of elements: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "a[" << i << "] = ";
        cin >> a[i];
        sum += a[i];
    }

    avg = (float)sum / n;

    cout << "\nSum = " << sum;
    cout << "\nAverage = " << avg;

    return 0;
}
