// Task 15: Write a program to demonstrate the runtime polymorphism.  

#include <iostream>
using namespace std;

class DoomEmpire {

    public:
        virtual void attack () {
            cout << "Base Empire: Launching Standerd Lasers. " << endl; 
        }
};

class upgradedDoombot : public DoomEmpire {
    public:
        void attack () {
            cout << "Derived Doombot: Launching heavy plasma cannons! " << endl;
        }
};


int main () {
    cout << "Main function Started " << endl;

    DoomEmpire* empiorPointer;
    upgradedDoombot botObj;

    empiorPointer = &botObj;

    empiorPointer->attack();

    cout << "Main function finished" << endl;


    return 0;
}