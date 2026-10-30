#include <iostream>
#include <string>
class Animal
{
public:
    virtual void sound() { std::cout << "Animal\n"; }
};

class Dog : public Animal
{
    public:
        void sound() { std::cout << "Bark: woof woof\n"; }
};

int main()
{
    Animal *a;
    Dog d;
    a = &d;
    a->sound();

    std::cout << sizeof(a) << std::endl;
    
    
    return 0;
}