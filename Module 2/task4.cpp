// Task 4: Write a program to demonstrate the use of const data members. 

#include <iostream>
using namespace std;

class Doombot {

    private:
        int laserPower;
        
    public:
    Doombot(int power) {
        laserPower = power;
        cout << "Original Doombot online with Power: " << laserPower << endl;
    }
    
    Doombot(const Doombot &oldBot) {
        laserPower = oldBot.laserPower;
        cout << "Copy Constructor Called: Clone Doombot is now Online!" << endl;
    }

    void displayPower() {
        cout << "Current Doombot Laser Power = " << laserPower << "%" << endl;
    }
};

int main () {
    Doombot originalBot(90);

    cout << "------------------------------------" << endl;

    Doombot cloneBot = originalBot;

    cout << "-------------------------------------" << endl;

    cloneBot.displayPower();

    return 0;
}