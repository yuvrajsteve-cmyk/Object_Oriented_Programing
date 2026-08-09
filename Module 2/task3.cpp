// Task 3: Write a program to demonstrate the use of static data members. 

#include <iostream>
using namespace std;

class Latveria {

    private:
        int doombots;

    public:
        Latveria (int b) {
            doombots = b;
            cout << "Doom's army of " << doombots << " Doombots is ready! " << endl;
            cout << "Kneel before DOOM! " << endl;
        }
};


int main () {
        Latveria myEmpire(50000);

    return 0;
}