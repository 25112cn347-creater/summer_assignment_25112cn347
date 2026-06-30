//Write a program to Reverse a string. 
#include <iostream>
using namespace std;

int main() {
    char str[100];
    int i, length = 0;
    char temp;

    cout << "Enter a string: ";
    cin >> str;

    // Find length
    while (str[length] != '\0') {
        length++;
    }

    // Reverse the string
    for (i = 0; i < length / 2; i++) {
        temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }

    cout << "Reversed string = " << str;

    return 0;
}
