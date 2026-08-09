// Task 1: Write a program that uses a class where the member functions are defined inside a class.

#include <iostream>
using namespace std;

class DoomEmpire {
    private:    // the secret Room
        int weapons;

    public:     // open Room
        void setWeapons(int w) {
            weapons = w;
        }
        void displayWeapons () {
            cout << "Weapons Count = " << weapons << endl;
        }
}; 

int main() {

    DoomEmpire myObject;

    myObject.setWeapons(100);
    myObject.displayWeapons();

    return 0;
}