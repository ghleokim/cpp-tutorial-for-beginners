// https://www.youtube.com/watch?v=vLnPwxZdW4Y&t=8333s

/*
    guessing game : while, if문 활용하기

*/

#include <iostream>

using namespace std;

int main() {

    int secretNum = 7;
    int guess;
    int counter = 0;
    int guessLimit = 3;
    bool outOfGuesses = false;

    while(secretNum != guess && !outOfGuesses){
        if(counter < guessLimit) {
            cout << "Current Count: " << guessLimit - counter << endl;
            cout << "Enter guess: ";
            cin >> guess;
            counter++;
        } else {
            outOfGuesses = true;
        }
    }

    if(outOfGuesses) {
        cout << "You Lose.";
    } else {
        cout << "You Win!";
    }

    return 0;
}