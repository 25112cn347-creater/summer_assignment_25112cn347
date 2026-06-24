//wap to find diagonal sum.
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of square matrix: ";
    cin >> n;

    int A[10][10];

    cout << "Enter matrix elements:\n";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }

    int sum = 0;

    for(int i = 0; i < n; i++) {
        sum += A[i][i];   // main diagonal
    }

    cout << "Diagonal Sum = " << sum << endl;

    return 0;
}
