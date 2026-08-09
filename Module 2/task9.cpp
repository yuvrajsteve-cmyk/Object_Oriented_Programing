// Task 9: Write a program to demonstrate the overloading of increment and decrement
// operators.

#include <iostream>
using namespace std;

class Doombot {
    private:
        int laserPower;

    public:
        Doombot(int p) {
            laserPower = p;
        }
        
        void operator ++ () {
            laserPower = laserPower + 1;
            cout << "Pre-Increment Called! Power boosted by 1." << endl;
        }

        void operator ++ (int) {
            laserPower = laserPower + 1;
            cout << "Post-Increment Called! Power boosted by 1." << endl;
        }

        void displayPower () {
            cout << "Doombot Current Laser Power: " << laserPower << "%" << endl;
        }
};

int main () {

    Doombot myBot(70);
    myBot.displayPower();
    cout << "--------------------" << endl;

    ++myBot;
    myBot.displayPower();
    cout << "---------------------" << endl;

    myBot++;
    myBot.displayPower();
    cout << "---------------------" << endl;

    return 0;
}