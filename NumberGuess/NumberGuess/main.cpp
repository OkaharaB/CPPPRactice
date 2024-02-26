//
//  main.cpp
//  NumberGuess
//
//  Created by Brittny Okahara on 2024/02/24.
//

#include <iostream>
#include <cstdlib>
#include <ctime>

int main() 
{
    //Initialize a rando seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Generate a rando number between 1 and a hundo.
    int secretNumber = rand() % 100 + 1;
    int guess = 0;
    
    std::cout << "Bro! I picked a number between 1 and 100." << std::endl;
    std::cout << "Can you guess what it is?" << std::endl;
    
    while (guess != secretNumber)
    {
        std::cout << "Guess! ";
        std::cin >> guess;
        
        if (guess > secretNumber)
        {
            std::cout << "Too high!";
        }
        else if (guess < secretNumber)
        {
            std::cout << "Too low!";
        }
        else
        {
            std::cout << "That's right!!";
        }
    }
    return 0;
}
