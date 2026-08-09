// Task 2: Write a program that uses a class where the member functions are defined
// outside a class.


#include <iostream>
using namespace std;

class DoomEmpire {
    private:
        int weapons;

    public:
        void setWeapons(int w);
        void displayWeapons();        
};

void DoomEmpire::setWeapons(int w) {
    if (w < 0) {
        cout << "Error! Invalid Weapons Count." << endl;
    } else {
        weapons = w;
    }
}

void DoomEmpire::displayWeapons() {
    cout << "Weapons Count = " << weapons << endl;
}

int main () {
    DoomEmpire myObject;

    myObject.setWeapons(100);
    myObject.displayWeapons();

    return 0;
}