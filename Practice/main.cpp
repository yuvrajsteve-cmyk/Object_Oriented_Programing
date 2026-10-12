#include <iostream>

class Node {
    public:
        int data;
        Node* next;

        Node(int val) {
            data = val;
            next = nullptr;
        }
};

class LinkedList {
    Node* head;

    public:
        LinkedList() {
            head = nullptr;
        }

        void insertAtHead(int value) {
            Node* newNode = new Node(value);
            newNode->next = head;
            head = newNode;
        }

        void display() {
            Node* temp = head;

        while(temp != nullptr) {
            std::cout << temp->data << " -> ";
            temp = temp->next;
        }
        std::cout << "NULL " << std::endl;
}
};




int main () {

   Node(10);
   Node(20);
   Node(30);
   Node(40);
  

   LinkedList li;
   std::cout << "==================" << std::endl;
   li.insertAtHead(10);
   li.insertAtHead(20);
   li.insertAtHead(30);
   li.insertAtHead(40);
   li.insertAtHead(50);
   li.insertAtHead(60);
   li.insertAtHead(70);
   li.insertAtHead(80);
   li.insertAtHead(90);
   li.insertAtHead(100);

   li.insertAtHead(110);
   li.insertAtHead(120);
   li.insertAtHead(130);
   li.insertAtHead(140);
   li.insertAtHead(150);
   li.insertAtHead(160);
   li.insertAtHead(170);
   li.insertAtHead(180);
   li.insertAtHead(190);
   li.insertAtHead(200);

   std::cout << "==================" << std::endl;
   li.display();
    return 0;
}