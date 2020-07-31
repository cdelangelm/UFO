// UFO.cpp project from the functions block lesson, Codecademy.
//

#include <iostream>
#include <vector>
#include "ufo_functions.h"

using namespace std;

int main()
{
    greet();
    string codeword = "desoxirribonucleico";
    string answer = "___________________";
    int misses = 0;

    vector<char> incorrect;
    bool guess = false;

    char letter;

    while (answer != codeword && misses < 7) {
        display_misses(misses);
        display_status(incorrect, answer);
        cout << "Please enter your guess: ";
        cin >> letter;
        for (int i = 0; i < codeword.size(); i++) {
            if (letter == codeword[i]) {
                answer[i] = letter;
                guess = true;
            }
        }
        if (guess) {
            cout << "Correct!\n\n";
        }
        else {
            cout << "Incorrect! The tractor beam pulls the person in further\n\n";
            incorrect.push_back(letter);
            misses++;
        }
        guess = false;
    }

    end_game(answer, codeword);
}