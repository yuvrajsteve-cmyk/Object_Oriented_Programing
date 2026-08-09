//Task 5: Write a program to demonstrate the use of zero argument and parameterized
//constructors.

#include <iostream>
using namespace std;

class DynamicArmy {

    private:
        int*doombots;
        int armySize;

    public:
        DynamicArmy(int size) {
            armySize = size;

            doombots = new int[armySize];
            cout << "Dynamic Constructor: Space for " << armySize << " Elements grabed in RAM. " << endl;
        }

        ~DynamicArmy() {
            delete[] doombots;
            cout << "Destructor: Dynamic memory has been safely returned to RAM> " << endl;
        }
        
};


int main () {
    cout << "Main function started. " << endl;

    {
        DynamicArmy fortress(10);
    }

    cout << "Main function finished." << endl;


    return 0;
}
