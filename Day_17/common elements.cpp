//Write a program to Find common elements.
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> a = {1, 2, 2, 3, 4, 5};
    vector<int> b = {2, 2, 3, 5, 6};

    int n1 = a.size();
    int n2 = b.size();

    int i = 0, j = 0;
    vector<int> common;

    while (i < n1 && j < n2) {
        if (a[i] < b[j]) {
            i++;
        }
        else if (a[i] > b[j]) {
            j++;
        }
        else {
            common.push_back(a[i]);
            i++;
            j++;
        }
    }

    cout << "Common elements are: ";
    for (int x : common) {
        cout << x << " ";
    }

    return 0;
}
