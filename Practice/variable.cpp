

#include <iostream>
using namespace std;

int main () {

    // int data type 
    int number = 12;
    cout << "Number is: " << number << " and size if int is: " << sizeof(number)  << endl;
    cout << "=====================" << endl;
    
    // char data type 
    char Alphabet = 'A';
    cout << "Char is: " << Alphabet << " and size of char is: " << sizeof(Alphabet) << endl;
    cout << "=====================" << endl;

    // short data type 
    short newType = 'B';
    cout << "Short is: " << newType << " and size of short is: " << sizeof(newType) << endl;
    cout << "=====================" << endl;

    // float data type 
    float point = 23.44;
    cout << "Float is: " << point << " and size of float is: " << sizeof(point) << endl;
    cout << "=====================" << endl;

    // double data type 
    double afterPoint = 23.5545;
    cout << "Double is: " << afterPoint << " and size of: " << sizeof(afterPoint) << endl;
    cout << "=====================" << endl;

    // string data type 
    string myName = "Yuvraj Singh";
    cout << "String is: " << myName << " and size of string is: " << sizeof(myName) << endl;
    cout << "=====================" << endl;

    // const data type 
    const int myNumber = 6280;
    cout << "Const is: " << myNumber << " and size of const is: " << sizeof(myNumber) << endl;
    cout << "=====================" << endl;

    // boolean data type 
    bool wrong = false;
    cout << "Bool is: " << wrong << " and size of bool is: " << sizeof(wrong) << endl;
    cout << "=====================" << endl;


    return 0;
}