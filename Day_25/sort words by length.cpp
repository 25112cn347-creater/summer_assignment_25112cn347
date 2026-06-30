//Write a program to Sort words by length. 
#include <iostream>
using namespace std;

int main() {
    int n;
    string word[50], temp;

    cout << "Enter number of words: ";
    cin >> n;

    cout << "Enter words:\n";
    for (int i = 0; i < n; i = i + 1) {
        cin >> word[i];
    }

    // Sorting by length (Bubble sort)
    for (int i = 0; i < n; i = i + 1) {
        for (int j = i + 1; j < n; j = j + 1) {
            if (word[i].length() > word[j].length()) {
                temp = word[i];
                word[i] = word[j];
                word[j] = temp;
            }
        }
    }

    cout << "Words sorted by length:\n";
    for (int i = 0; i < n; i = i + 1) {
        cout << word[i] << endl;
    }

    return 0;
}
