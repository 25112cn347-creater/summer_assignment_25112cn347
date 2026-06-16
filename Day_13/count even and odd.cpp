//Write a program to Count even and odd elements.
#include <iostream>
using namespace std;

int main() {
    int a[100], n;
    int even = 0, odd = 0;

    cout << "Enter number of elements: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    cout << "Number of even elements = " << even << endl;
    cout << "Number of odd elements = " << odd << endl;

    return 0;
}
