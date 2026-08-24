

#include <iostream>
using namespace std;

class Animal {
    public:
        void eat() {
            cout << "I can eat!" << endl;
        }
};

class Dog : public Animal {
    public:
        void dog() {
            cout << "I can bark! woof! woof!" << endl;
        }
};


int main () {

    Dog myDog;

    myDog.eat();
    myDog.dog();


    return 0;
}