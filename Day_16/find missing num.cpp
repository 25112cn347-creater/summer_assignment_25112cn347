//Write a program to Find missing number in array.
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;   // actual range size (1 to n)

    int arr[n - 1];

    int sum = 0;

    for (int i = 0; i < n - 1; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    int totalSum = n * (n + 1) / 2;

    int missingNumber = totalSum - sum;

    cout << "Missing number = " << missingNumber;

    return 0;
}
