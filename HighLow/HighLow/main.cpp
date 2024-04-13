//
//  main.cpp
//  HighLow
//
//  Created by Brittny Okahara on 2024/04/11.
//

#include <iostream>
#include "Random.h"
#include <limits>

void ignoreLine()
{
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

int getGuess()

{
    while (true)
    {
        int guess{};
        std::cin >> guess;
        if (!std::cin)
        {
            std::cin.clear();
            ignoreLine();
            std::cout << "Invalid Entry. Try again.";
            continue;
        }
        
        ignoreLine();
        return guess;
    }
}

void hiLow()
{
    int x {Random::get(1, 100)};
    for (int count{1}; (count <= 7); ++count)
    {
        
        std::cout << "Guess #" << count << ": ";
        int guess{};
        guess = getGuess();
        
        if (guess == x)
        {
            std::cout << "You win!\n";
            break;
        }
        else if (guess > 100 || guess < 1)
            std::cout << "The number is between 1 and 100!";
        else if (guess > x)
            std::cout << "Your guess is too high.\n";
        else if (guess < x)
            std::cout << "Your guess is too low.\n";
        else
            std::cout << "Something went wrong.\n";
    }
}

int main() {
    std::cout << "Let's play a game. I'm thinking of a number between 1 and 100. You have 7 tries to guess what it is.\n";
    
    bool playAgain{true};
    while (playAgain == true)
    {
        hiLow();
        std::cout << "Would you like to play again? y/n: ";
        char choice{};
        std::cin >> choice;
        switch (choice) {
            case 'y':
                continue;
            case 'n':
                std::cout << "Bye!";
                playAgain = false;
                break;
            default:
                std::cout << "Invalid entry.";
                break;
        }
    }
    
    return 0;
}
