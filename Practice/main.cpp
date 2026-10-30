#include <iostream>
#include <string>

struct Entity
{
    static int x, y;

    static void print()
    {
        std::cout << x << ", " << y << std::endl;
    }
};

int Entity::x;
int Entity::y;
int main()
{
    Entity::x = 7;
    Entity::y = 8;

    Entity::x = 10;
    Entity::y = 20;

    Entity::print();

    return 0;
}