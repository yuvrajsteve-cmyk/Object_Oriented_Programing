// Task 14: Write a program to demonstrate the multiple inheritances.

#include <iostream>
using namespace std;

class DoomEmpire {
    protected:
        int doombotCount;

    public:
        void setBots(int count) {
            doombotCount = count;
        }        
};

class LatveriaFortress : public DoomEmpire {
    public:
        void displayStatus() {
            cout << "Fortress is fully sourced with " << doombotCount << " Doombots. " << endl;
        }
};


int main () {
    cout << "Main function started: " << endl;

    LatveriaFortress fortress;
    fortress.setBots(8000);

    fortress.displayStatus();

    cout << "Main function finished! " << endl;


    return 0;
}