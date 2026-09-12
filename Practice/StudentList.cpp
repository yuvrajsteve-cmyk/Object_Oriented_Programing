
#include "StudentList.h"


StudentList::StudentList() {
    head = nullptr;
}
void StudentList::addStudent(string name, int rollNumber, string branch) {
    Student* newStudent = new Student(name, rollNumber, branch);
    Node* newNode = new Node();
    newNode->studentData = newStudent;
    newNode->next = head;
    head = newNode;
}

void StudentList::searchStudent(int rollNumber) {
    Node * current = head;

    while(current != nullptr){
        if(current->studentData->rollNumber == rollNumber) {
            cout << "the student detail: " <<  current->studentData->name << endl;
            return;
        }
            current = current->next;
        
    }

    cout << "Error: Student with Roll Number " << rollNumber << " not found." << endl;
}

void StudentList::displayAll() {
    Node* current = head;

    if (current == nullptr) {
        cout << "No Records Found." << endl;
        return;
    }

    while (current != nullptr) {
        cout << "Name: " << current->studentData->name << endl;
        cout << "Roll: " << current->studentData->rollNumber << endl;
        cout << "Branch: " << current->studentData->branch << endl;
        cout << "----------------------" << endl;
        
        current = current->next; 
    }
}
