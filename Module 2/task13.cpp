// Task 13: Write a program to demonstrate the typecasting of class type to class type. 


#include <iostream>
using namespace std;

class Doombot {
private:
    int power;

public:
    Doombot(int p) {
        power = p;
    }

    int getPower() const {
        return power;
    }
};

class LatveriaGuard {
private:
    int guardPower;

public:
    LatveriaGuard() {
        guardPower = 0;
    }

    LatveriaGuard(const Doombot& bot) {
        guardPower = bot.getPower();
        cout << "Sovereign Conversion: Doombot data converted into LatveriaGuard." << endl;
    }

    void displayGuardPower() {
        cout << "Latveria Guard Power Level = " << guardPower << "%" << endl;
    }
};

int main() {
    cout << "Main function started." << endl;

    Doombot bot1(95);
    LatveriaGuard guard1;

    cout << "\nExecuting Typecasting: Class Type to Another Class Type...\n" << endl;

    guard1 = bot1;

    guard1.displayGuardPower();

    cout << "\nMain function finished." << endl;
    return 0;
}
