//Write a program to Check string rotation.
#include <iostream>
using namespace std;

int main() {
    string s1, s2;

    cout << "Enter first string: ";
    getline(cin, s1);

    cout << "Enter second string: ";
    getline(cin, s2);

    // If lengths are different, not rotation
    if (s1.length() != s2.length()) {
        cout << "Not a rotation";
        return 0;
    }

    // Concatenate first string with itself
    string temp = s1 + s1;

    // Check if second string is substring of temp
    if (temp.find(s2) != string::npos) {
        cout << "Strings are rotation of each other";
    } else {
        cout << "Not a rotation";
    }

    return 0;
}
