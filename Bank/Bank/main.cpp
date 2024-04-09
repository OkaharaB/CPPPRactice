//
//  main.cpp
//  Bank
//
//  Created by Brittny Okahara on 2024/02/27.
//

#include <iostream>
#include <string>

class BankAccount
{
private:
    std::string name;
    double balance;
    
public:
    BankAccount(std::string accountName, double startingBalance)
    : name(accountName), balance(startingBalance) {}
    
    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
        }
    }
    
    void withdraw(double amount)
    {
        if (amount <= balance)
        {
            balance -= amount;
        }
        else
        {
            std::cout << "Uh oh. You outta money.\n";
        }
    }
    
    void display()
    {
        std::cout << "Account: " << name << "\nBalance: ¥" << balance << std::endl;
    }
};

int main() {
    std::string name;
    double startingBalance;
    
    std::cout << "Enter your name: ";
    getline(std::cin, name);
    std::cout << "Enter your starting balance: ";
    std::cin >> startingBalance;
    
    BankAccount account(name, startingBalance);
    
    int selection;
    double amount;
    
    do {
        std::cout << "\n1. Deposit" << std::endl;
        std::cout << "2. Withdraw\n";
        std::cout << "3. Display Account\n";
        std::cout << "4. Exit\n";
        std::cout << "Enter selection: ";
        std::cin >> selection;
        
        switch (selection)
        {
            case 1:
                std::cout << "Enter amount to be deposited: ";
                std::cin >> amount;
                account.deposit(amount);
                break;
            case 2:
                std::cout << "Enter amount to be withdrawn: ";
                std::cin >> amount;
                account.withdraw(amount);
                break;
            case 3:
                account.display();
                break;
            case 4:
                break;
            default:
                std::cout << "That wasn't one of the options I gave you, dude. \n";
        }
    } while (selection != 4);
    
    return 0;
}
