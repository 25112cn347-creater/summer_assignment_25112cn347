//write a program to create a quiz application.
#include <iostream>
using namespace std;

int main() {
    string answer;
    int score = 0;

    cout << "===== SIMPLE QUIZ APP =====\n\n";

    cout << "Q1. What is the capital of India?\n";
    cout << "a) Mumbai\nb) Delhi\nc) Kolkata\n";
    cout << "Answer: ";
    cin >> answer;

    if (answer == "b" || answer == "B") {
        score++;
    }

    cout << "\nQ2. 2 + 2 = ?\n";
    cout << "a) 3\nb) 4\nc) 5\n";
    cout << "Answer: ";
    cin >> answer;

    if (answer == "b" || answer == "B") {
        score++;
    }

    cout << "\nQ3. C++ is a ____ language?\n";
    cout << "a) Procedural\nb) Object Oriented\nc) Machine\n";
    cout << "Answer: ";
    cin >> answer;

    if (answer == "b" || answer == "B") {
        score++;
    }

    cout << "\n===== RESULT =====\n";
    cout << "Your Score: " << score << "/3\n";

    if (score == 3) {
        cout << "Excellent!";
    } else if (score == 2) {
        cout << "Good!";
    } else {
        cout << "Try again!";
    }

    return 0;
}
