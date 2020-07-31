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

    while (answer != codeword && misses < 7) {

        misses++;
    }

    end_game(answer, codeword);
}