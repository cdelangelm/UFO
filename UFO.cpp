// UFO.cpp project from the functions block lesson, Codecademy.
//

#include <iostream>
#include <vector>
#include "ufo_functions.h"

using namespace std;

int main()
{
    greet();
    string codeword = "codecademy";
    string answer = "__________";
    int misses = 0;

    vector<char> incorrect;
    bool guess = false;

    while (answer != codeword && misses < 7) {
        display_misses(misses);
        display_status(incorrect, answer);
        misses++;
    }

    end_game(answer, codeword);
}