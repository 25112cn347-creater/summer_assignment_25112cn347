#include <iostream>
using namespace std;

// Function to check palindrome
bool isPalindrome(int num) {
    int original = num;
    int reversed = 0;

    while (num > 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num = num / 10;
    }

    return (original == reversed);
}

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (isPalindrome(num))
        cout << num << " is a Palindrome number." << endl;
    else
        cout << num << " is not a Palindrome number." << endl;

    return 0;
}
