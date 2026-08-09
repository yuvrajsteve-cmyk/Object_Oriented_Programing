// Task 8: Write a program to demonstrate the use of initializer list. 

#include <iostream>
using namespace std;

class LatveriaArmy {
    private:
        int doombotId;

    public:
        static int totalDoombots;
        
        LatveriaArmy(int id) {
            doombotId = id;
            totalDoombots++;
        }

        static void displayTotalCount() {
            cout << "Active Doombots in RAM: " << totalDoombots << endl;
        }
};

int LatveriaArmy::totalDoombots = 0;

int main () {

    LatveriaArmy::displayTotalCount();
    LatveriaArmy bot1 (101);
    LatveriaArmy bot2 (102);
    LatveriaArmy bot3 (103);
    LatveriaArmy bot4 (104);

    LatveriaArmy::displayTotalCount();

    return 0;
}