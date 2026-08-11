// Task 16: Write a program to demonstrate the exception handling. 

#include <iostream>
using namespace std;

int main() {
    int numerator = 10;
    int denominator = 0;
    int result;

    try {
        if (denominator == 0) {
            throw "Mistake: can't devide with 0! ";
        }
        result = numerator / denominator;
        cout << "Result is: " << result << endl;
    }

    catch (const char* error_msg) {
        cout << error_msg << endl;
    }

    cout << "Program is Running Secure! " << endl;

    return 0;
}