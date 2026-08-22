

#include <iostream>
using namespace std;


class Animal {
    public:
        bool alive = true;
    void eat() {
        cout << "This animal is eating\n";
        cout << "My animal name is Bruno\n";
    }        
};

class Dog : public Animal{
    public:

    void bark() {
        cout << "The dog goes woof!\n";
    }

};

int main () {

    Dog dog;

    cout << dog.alive << '\n';
    dog.eat();
    dog.bark();
 
    return 0;
}