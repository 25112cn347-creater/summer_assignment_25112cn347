//Write a program to Character frequency. 
#include <iostream>
using namespace std;

int main() {
    string str;
    int freq[256] = {0};

    cout << "Enter a string: ";
    getline(cin, str);

    for (int i = 0; i < str.length(); i++) {
        freq[str[i]]++;
    }

    cout << "\nCharacter Frequencies:\n";
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0 && i != ' ') {
            cout << (char)i << " = " << freq[i] << endl;
        }
    }

    return 0;
}
