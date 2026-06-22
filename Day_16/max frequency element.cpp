//Write a program to Find maximum frequency element. 
#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];

    unordered_map<int, int> freq;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        freq[arr[i]]++;
    }

    int maxFreq = 0;
    int element = arr[0];

    for (auto it : freq) {
        if (it.second > maxFreq) {
            maxFreq = it.second;
            element = it.first;
        }
    }

    cout << "Element with maximum frequency = " << element << endl;
    cout << "Frequency = " << maxFreq;

    return 0;
}
