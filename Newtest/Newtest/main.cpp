#include <iostream>

int main()
{
    double num1, num2;
    char operation;
    
    std::cout << "Enter first number: \n";
    std::cin >> num1;
    
    std::cout << "Enter second number : \n";
    std::cin >> num2;
    
    std::cout << "Enter an operator (+, -, *, /): \n";
    std::cin >> operation;
    
    switch (operation)
    {
        case '+':
            std::cout << "Result: " << num1 + num2 << std::endl;
            break;
        case '-':
            std::cout << "Result: " << num1 - num2 << std::endl;
            break;
        case '/':
            if (num2 != 0)
            {
                std::cout << "Result: " << num1 / num2 << std::endl;
            }
            else
            {
                std::cout << "Bruh. No.\n";
            }
                break;
        case '*':
            std::cout << "Result: " << num1 * num2 << std::endl;
            break;
        default:
            std::cout << "Friend, why are you messing with me? I'm a calculator.\n";
            
    }
    return 0;
}
