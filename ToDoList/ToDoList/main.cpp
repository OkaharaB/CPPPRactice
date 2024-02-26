//
//  main.cpp
//  ToDoList
//
//  Created by Brittny Okahara on 2024/02/23.
//

#include <iostream>
#include <string>
#include <list>
#include <ctime>

class todoItem {
private:
    int id;
    std::string description;
    bool completed;
    
public:
    todoItem(): id(0), description(""), completed(false) {}
    ~todoItem() = default;
    
    bool create(std::string new_description) {
        id = rand() % 100 + 1;
        description = new_description;
        return true;
    }
    
    int getId() { return id;}
    std::string getDescription() { return description; }
    bool isCompleted() { return completed; }
    void setCompleted(bool val) {completed =val;}
};

int main() {
    
    char input_option;
    int input_id;
    std::string input_description;
    std::string version = "v0.2.0";
    std::list<todoItem> todoItems;
    std::list<todoItem>::iterator it;
    
    srand(time(NULL));
    
    todoItems.clear();
    
    //todoItem test;
    //test.create("this is a test");
    //todoItems.push_back(test);
    
    while (1) {
        system("cls");
        std::cout << "To Do List Maker: " << version << std::endl;
        std::cout << std::endl << std::endl;
        
        for (it = todoItems.begin(); it != todoItems.end(); it++) {
            
            std::string completed = it->isCompleted() ? "done" : "not done";
            
            std::cout << it->getId() << " | " << it->getDescription() << " | " << completed << std::endl;
        }
        
        if (todoItems.empty()){
            std::cout << "Wanna do somethin'?" << std::endl;
        }
        
        std::cout << std::endl << std::endl;
        
        std::cout << "[a]dd a new to do!" << std::endl;
        std::cout << "[c]omplete a to do!" << std::endl;
        std::cout << "[q]uit." << std::endl;
        
        std::cout << "choice: ";
        
        std::cin >> input_option;
        
        if (input_option == 'q') {
            std::cout << "Toodles!" << std::endl;
            break;
        }
        else if (input_option == 'a'){
            std::cout << "Add a bitchin' description: ";
            std::cin.clear();
            std::cin.ignore();
            std::getline(std::cin, input_description);
            
            todoItem newItem;
            newItem.create(input_description);
            todoItems.push_back(newItem);
        }
        else if (input_option == 'c') {
            std::cout << "Enter the id of what ya did." << std::endl;
            std::cin >> input_id;
            
            for (it = todoItems.begin(); it != todoItems.end(); it++) {
                
                if (input_id == it->getId()){
                    it->setCompleted(true);
                    break;
                }
            }
            
        }
        
       
    }
    
    
    return 0;
}
