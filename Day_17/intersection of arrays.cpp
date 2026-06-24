//wap to intersection of arrays.
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> a = {1, 2, 2, 3, 3, 4, 5, 6};
    vector<int> b = {2, 3, 3, 5, 6, 6, 7};

    int n1 = a.size();
    int n2 = b.size();

    int i = 0, j = 0;
    vector<int> ans;

    while (i < n1 && j < n2) {
        if (a[i] < b[j]) {
            i++;
        }
        else if (a[i] > b[j]) {
            j++;
        }
        else {
            ans.push_back(a[i]);
            i++;
            j++;
        }
    }

    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}
