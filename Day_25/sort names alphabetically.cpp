//Write a program to Sort names alphabetically. 
#include <iostream>
using namespace std;

int main() {
    int n;
    string name[50], temp;

    cout << "Enter number of names: ";
    cin >> n;

    cout << "Enter names:\n";
    for (int i = 0; i < n; i = i + 1) {
        cin >> name[i];
    }

    // Sorting (simple bubble sort)
    for (int i = 0; i < n; i = i + 1) {
        for (int j = i + 1; j < n; j = j + 1) {
            if (name[i] > name[j]) {
                temp = name[i];
                name[i] = name[j];
                name[j] = temp;
            }
        }
    }

    cout << "Sorted names:\n";
    for (int i = 0; i < n; i = i + 1) {
        cout << name[i] << endl;
    }

    return 0;
}
