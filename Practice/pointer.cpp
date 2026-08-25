// the pointer 

// the two magic symbols of pointer 

#include <iostream>
using namespace std;


struct Car {
    int speed;
};

int operator+(Car A, int bonus ) {
    return A.speed + bonus;
}

int main () {

        Car myCar;
        myCar.speed = 100;

        Car *carPtr = &myCar;
        
        int finalSpeed = (*carPtr) + 50;

        cout << finalSpeed << endl;
        
        

    return 0;
}