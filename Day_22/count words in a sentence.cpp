//Write a program to Count words in a sentence. 
#include <iostream>
using namespace std;

int main() {
    char str[200];
    int i, words = 1;

    cout << "Enter a sentence: ";
    cin.getline(str, 200);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0') {
            words++;
        }
    }

    cout << "Total words = " << words;

    return 0;
}
