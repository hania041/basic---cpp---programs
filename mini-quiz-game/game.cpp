#include <iostream>
using namespace std;

int main() {
    int score = 0;
    string answer;

    cout << "=== Mini Quiz Game ===\n";

    // Question 1
    cout << "\n1. What is the capital of Pakistan?\n";
    cout << "a) Karachi\nb) Lahore\nc) Islamabad\n";
    cout << "Your answer: ";
    cin >> answer;

    if (answer == "c" || answer == "C") {
        score++;
    }

    // Question 2
    cout << "\n2. How many days are there in a week?\n";
    cout << "a) 5\nb) 7\nc) 10\n";
    cout << "Your answer: ";
    cin >> answer;

    if (answer == "b" || answer == "B") {
        score++;
    }

    // Question 3
    cout << "\n3. Which one is a programming language?\n";
    cout << "a) C++\nb) Banana\nc) Oxygen\n";
    cout << "Your answer: ";
    cin >> answer;

    if (answer == "a" || answer == "A") {
        score++;
    }

    // Final score
    cout << "\n=== Quiz Over! ===\n";
    cout << "Your final score: " << score << "/3\n";

    return 0;
}
