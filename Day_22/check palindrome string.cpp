//Write a program to Check palindrome string.
#include <iostream>
using namespace std;

int main() {
    char str[100];
    int i, length = 0;
    bool palindrome = true;

    cout << "Enter a string: ";
    cin >> str;

    // Find length
    while (str[length] != '\0') {
        length++;
    }

    // Check palindrome
    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            palindrome = false;
            break;
        }
    }

    if (palindrome)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}
