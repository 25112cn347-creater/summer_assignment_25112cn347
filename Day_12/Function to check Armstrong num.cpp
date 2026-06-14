#include <iostream>
#include <cmath>
using namespace std;

// Function to check Armstrong number
bool isArmstrong(int num) {
    int original = num;
    int sum = 0;

    // count digits
    int digits = 0;
    int temp = num;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    // calculate sum of powers
    temp = num;
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    return (sum == original);
}

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (isArmstrong(num))
        cout << num << " is an Armstrong number." << endl;
    else
        cout << num << " is not an Armstrong number." << endl;

    return 0;
}
