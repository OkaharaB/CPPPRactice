#include <iostream>

//Gets tower height from user
double getTowerHeight(){
    std::cout << "Enter the height of the tower in meters: ";
    double towerHeight{};
    std::cin >> towerHeight;
    return towerHeight;
}
//Returns the current ball height
double calculateBallHeight(double towerHeight, int seconds)
{
    const double gravity {9.8 };

    //Using formula: s = (u * t) + (a * t^2) / 2
    //u = initial velocity (0), so u*t is 0
    const double fallDistance { gravity * (seconds * seconds) / 2.0 };
    const double ballHeight { towerHeight - fallDistance};

    //Prevents the ball from going underground
    if (ballHeight < 0.0)
    return 0.0;

    return ballHeight;
}

//Prints ball height
void printBallHeight(double ballHeight, int seconds)
{
    if (ballHeight > 0.0)
        std::cout << "At " << seconds << " seconds, the ball is at a height of " << ballHeight << " meters.\n";
    else
        std::cout << "At " << seconds << " seconds, the ball is on the ground.\n";
}

//Calculates the current ball height and then prints it
//This is a helper function
void calculateAndPrintBallHeight(double towerHeight, int seconds)
{
    double ballHeight{ calculateBallHeight(towerHeight, seconds) };
    printBallHeight(ballHeight, seconds);
}

int main()
{
    double towerHeight{getTowerHeight()};

    calculateAndPrintBallHeight(towerHeight, 0);
    calculateAndPrintBallHeight(towerHeight, 1);
    calculateAndPrintBallHeight(towerHeight, 2);
    calculateAndPrintBallHeight(towerHeight, 3);
    calculateAndPrintBallHeight(towerHeight, 4);
    calculateAndPrintBallHeight(towerHeight, 5);

    return 0;
}
