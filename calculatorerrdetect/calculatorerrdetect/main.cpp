//
//  main.cpp
//  calculatorerrdetect
//
//  Created by Brittny Okahara on 2024/04/11.
//

#include <iostream>
#include <limits>
#include <cstdlib>

void ignoreLine()
{
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

double getDouble()
{
    while (true)
    {
        std::cout << "Enter a decimal number: ";
        double x{};
        std::cin >> x;
        
        if (!std::cin)
        {
            if (std::cin.eof())
            {
                exit(0);
            }
            
            std::cin.clear();
            ignoreLine();
            
            std::cout << "What are you doing. That input is all wrong!\n";
            continue;
        }
        ignoreLine();
        return x;
    }
}

char getOperator()
{
    while (true)
    {
        std::cout << "Enter one of the following: +, -, /, or *: ";
        char op{};
        std::cin >> op;
        
        if (!std::cin)
        {
            if (std::cin.eof())
            {
                exit(0);
            }
            
            std::cin.clear();
        }
        
        ignoreLine();
        
        switch (op) {
            case '/':
            case '-':
            case '+':
            case '*':
                return op;
                
            default:
                std::cout << "Error: Invalid Operator\n";
        }
    }
    
}

void printResult(double x, char op, double y)
{
    switch (op) {
        case '+':
            std::cout << x << " plus " << y << " equals " << (x + y) << ".\n";
            break;
        case '-':
            std::cout << x << " minus " << y << " equals " << (x - y) << ".\n";
            break;
        case '*':
            std::cout << x << " times " << y << " equals " << (x * y) << ".\n";
            break;
        case '/':
            std::cout << x << " divided by " << y << " equals " << (x / y) << ".n";
            break;
        default:
            std::cout << "Hmm. Something went wrong here.\n";
            break;
    }
}

int main() {
    double x{getDouble()};
    char operation{ getOperator()};
    double y{getDouble()};
    
    printResult(x, operation, y);
    
    return 0;
    
}
