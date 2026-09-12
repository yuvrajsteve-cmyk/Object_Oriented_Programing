

#include <iostream>
#include <string>
using namespace std;

class Student {
    public:
        string name;
        int rollNumber;
        string branch;

    Student(string name, int rollNumber, string branch){
        this->name = name;
        this->rollNumber = rollNumber;
        this->branch = branch;
    }    
};