

#include "Student.h"
#include <iostream>
using namespace std;

struct Node {
    Student* studentData;
    Node* next;
};

class StudentList {
    private:
        Node* head;

    public:
        StudentList();
        void addStudent(string name, int rollNumber, string branch);
        void searchStudent(int rollNumber);
        void displayAll();        
};
