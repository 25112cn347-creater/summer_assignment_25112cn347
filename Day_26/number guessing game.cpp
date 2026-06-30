//Write a program to Create number guessing game. 
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int guess;

    // Computer generates random number between 1 to 10
    srand(time(0));
    int secret = rand() % 10 + 1;

    cout << "Guess the number between 1 to 10:\n";

    while (1) {
        cin >> guess;

        if (guess == secret) {
            cout << "Correct! You won the game";
            break;
        }
        else if (guess > secret) {
            cout << "Too high, try again: ";
        }
        else {
            cout << "Too low, try again: ";
        }
    }

    return 0;
}
