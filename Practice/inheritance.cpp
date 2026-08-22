

#include <iostream>
using namespace std;


class Animal {
    public:
        bool alive = true;
    void eat() {
        cout << "This animal is eating\n";
    }        
};

class Dog : public Animal{

};

int main () {

    Dog dog;

    cout << dog.alive << '\n';
 
    return 0;
}