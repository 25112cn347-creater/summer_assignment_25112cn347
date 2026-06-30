//Write a program to Find common characters in strings. 
#include <iostream>
using namespace std;

int main() {
    string a, b;

    cout << "Enter first string: ";
    getline(cin, a);

    cout << "Enter second string: ";
    getline(cin, b);

    cout << "Common characters: ";

    for (int i = 0; i < a.length(); i++) {
        for (int j = 0; j < b.length(); j++) {
            if (a[i] == b[j]) {
                cout << a[i] << " ";
                break;
            }
        }
    }

    return 0;
}
