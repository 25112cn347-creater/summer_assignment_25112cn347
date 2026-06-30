//Write a program to Find first repeating character.
#include <iostream>
using namespace std;

int main() {
    string str;
    int freq[256] = {0};

    cout << "Enter a string: ";
    getline(cin, str);

    // Count frequency of each character
    for (int i = 0; i < str.length(); i++) {
        freq[str[i]]++;
    }

    // Find first repeating character
    for (int i = 0; i < str.length(); i++) {
        if (freq[str[i]] > 1) {
            cout << "First repeating character: " << str[i] << endl;
            return 0;
        }
    }

    cout << "No repeating character found." << endl;

    return 0;
}
