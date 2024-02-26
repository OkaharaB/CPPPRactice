//
//  main.cpp
//  AmericaConverter
//
//  Created by Brittny Okahara on 2024/02/26.
//

#include <iostream>

double CtoF(double celcius)
{
    return (celcius * 9.0 / 5.0) + 32.0;
}

double FtoC(double fahrenheit)
{
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}

double InchtoCm(double inch)
{
    return (inch * 2.54);
}

double CmtoInch(double cm)
{
    return (cm / 2.54);
}
int main()
{
    int choice;
    double number, convertedNumber;
    
    std::cout << "America to Others Converter" << std::endl;
    std::cout << "1. Celsius to Fahrenheit" << std::endl;
    std::cout << "2. Fahrenheit to Celsius" << std::endl;
    std::cout << "3. Inches to centimeters" << std::endl;
    std::cout << "4. Centimeters to inches" << std::endl;
    std::cout << "Enter your choice (1-4)" << std::endl;
    std::cin >> choice;
    
    std::cout << "Enter the number to be converted: ";
    std::cin >> number;
    
    switch (choice)
    {
        case 1:
            convertedNumber = CtoF(number);
            break;
        case 2:
            convertedNumber = FtoC(number);
            break;
        case 3:
            convertedNumber = InchtoCm(number);
            break;
        case 4:
            convertedNumber = CmtoInch(number);
            break;
        default:
            std::cout << "That wasn't one of the numbers I asked for, yo." << std::endl;
            return 1;
    }
    
    std::cout << "The converted number is: " << convertedNumber << std::endl;
    return 0;
}
