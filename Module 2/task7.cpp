// Task 7: Write a program to demonstrate the use of explicit constructor.  

#include <iostream>
using namespace std;

class DoomCore  {
    private:
        const int doomId;
        int powerLevel;

    public:
        DoomCore(int id, int power) : doomId(id) {
            powerLevel = power;
        }

        void displaySystem() const {
            cout << "Core Id: " << doomId << " | Power Level: " << powerLevel << "%" << endl;
        }
};


int main () {

    DoomCore core(101, 88);

    core.displaySystem();
    
    return 0;
}