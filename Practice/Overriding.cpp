// Function Overriding 

#include <iostream>
using namespace std;

class Parent {
    public:
        void rule() {
            cout << "Older thinking, learn with ratta!" << endl;
        }
};

class Child : public Parent {
    public:
        void rule() {
            cout << "New thinking: Learn with the logics" << endl;
        }
};

int main () {
    Parent p;
    p.rule();

    Child c;
    c.rule();

    return 0;
}