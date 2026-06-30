#include <iostream>
using namespace std;

int main() {
    char str[100];
  
  cout << "Enter a string: ";
    cin >> str;

    for (int i = 0; str[i] != '\0'; i++);

    cout << "Length of string = " << i;

    return 0;
}
