// the pointer 

// the two magic symbols of pointer 

#include <iostream>
using namespace std;

int main () {
    int houseNumber = 100;

    int *gps = &houseNumber;

    cout << houseNumber << endl;
    cout << "===============" << endl;

    cout << gps << endl;
    cout << "===============" << endl;

    cout << *gps << endl;
    cout << "===============" << endl;




    return 0;
}