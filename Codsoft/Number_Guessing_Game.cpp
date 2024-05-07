#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    // seed random number generator
    srand(time(0));
    // random number between 1 and 100 
    int secretNumber = rand() % 100 + 1; 
    int guess = 0;
    int numGuess = 0;
    cout << "I'm thinking of a number between 1 and 100." << endl;
    while (guess != secretNumber) {
        cout << "Enter your guess: ";
        cin >> guess;
        numGuess++;
        if (guess < secretNumber) {
            cout << "Your guess is too low." << endl;
        } else if (guess > secretNumber) {
            cout << "Your guess is too high." << endl;
        }
    }
    cout << "Congratulations! You guessed the number in " << numGuess << " tries." << endl;
    return 0;
}