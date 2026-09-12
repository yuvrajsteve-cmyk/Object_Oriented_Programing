#include <iostream>
using namespace std;


class Computer {
    public:
        class CPU {
            public:
                void display() {
                    cout << "Nested class: i'm computer's CPU! " << endl;
                }
        };
};

int main () {

    Computer::CPU myCpu;
    myCpu.display();


    return 0;
}