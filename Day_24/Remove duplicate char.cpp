//Write a program to Remove duplicate characters. 
#include <iostream>
using namespace std;

int main() {
    string str, result = "";
    int freq[256] = {0};

    cout << "Enter a string: ";
    getline(cin, str);

    for (int i = 0; i < str.length(); i++) {
        if (freq[str[i]] == 0) {
            result += str[i];
            freq[str[i]] = 1;
        }
    }

    cout << "String after removing duplicates: " << result;

    return 0;
}
