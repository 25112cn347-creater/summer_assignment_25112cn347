//Write a program to Find maximum occurring character. 
#include <iostream>
using namespace std;

int main() {
    string str;
    int freq[256] = {0};

    cout << "Enter a string: ";
    getline(cin, str);

    // Count frequency
    for (int i = 0; i < str.length(); i++) {
        freq[str[i]]++;
    }

    // Find maximum occurring character
    int max = 0;
    char ch;

    for (int i = 0; i < str.length(); i++) {
        if (freq[str[i]] > max) {
            max = freq[str[i]];
            ch = str[i];
        }
    }

    cout << "Maximum occurring character: " << ch;

    return 0;
}
