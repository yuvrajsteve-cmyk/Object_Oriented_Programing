#include <iostream>

void atmTransaction(int choice) {
    if (choice == 1) {
        throw 404;
    }
    if (choice == 2) {
        throw "Server is down!";
    }
    if (choice == 3) {
        throw 9.99f;
    }
    if (choice > 3) {
        throw "Invalid Choice ";
    }
}

int main () {
    int userChoice;
    std::cout << "Enter Your choice: ";
    std::cin >> userChoice ;

    try{
        atmTransaction(userChoice);
    }

    catch (int code) {
        std::cout << "Catch 1: Found error number: " << code << std::endl;
    }
    catch (const char* message) {
        std::cout << "Catch 2: Message found: " << message << std::endl;
    }
    catch (...) {
        std::cout << "Cathc 3: Found an unmached Mistake " << std::endl;
    }

    return 0;
} 