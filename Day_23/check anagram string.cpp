//Write a program to Check anagram strings.
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1, s2;
    int freq[256] = {0};

    cout << "Enter first string: ";
    getline(cin, s1);

    cout << "Enter second string: ";
    getline(cin, s2);

    // If lengths are different, not anagram
    if (s1.length() != s2.length()) {
        cout << "Not anagrams";
        return 0;
    }

    // Count characters of first string
    for (int i = 0; i < s1.length(); i++) {
        freq[s1[i]]++;
    }

    // Subtract characters of second string
    for (int i = 0; i < s2.length(); i++) {
        freq[s2[i]]--;
    }

    // Check if all frequencies are zero
    for (int i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            cout << "Not anagrams";
            return 0;
        }
    }

    cout << "Strings are anagrams";

    return 0;
}
