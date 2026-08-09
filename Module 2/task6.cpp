// Task 6: Write a program to demonstrate the use of dynamic constructor

#include <iostream>
using namespace std;

class LatveriaGuard {
    private:
        int guradId;

    public:
        explicit LatveriaGuard(int id) {
            guradId = id;
            cout << "Guard created safely with ID: " << guradId << endl;
        }    
};

int main () {

    LatveriaGuard gurad1(101);

    return 0;
}