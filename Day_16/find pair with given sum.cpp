//Write a program to Find pair with given sum.
#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int n, target;
    cin >> n >> target;

    int arr[n];
    unordered_set<int> s;

    bool found = false;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];

        int complement = target - arr[i];

        if (s.find(complement) != s.end()) {
            cout << "Pair found: " << complement << " + " << arr[i] << " = " << target;
            found = true;
        }

        s.insert(arr[i]);
    }

    if (!found) {
        cout << "No pair found";
    }

    return 0;
}
