#include <iostream>

#define LOG(x) std::cout << x << std::endl;


int main () {

    int var = 8;
    void* ptr = &var ;
    std::cout << "Hello World" << std::endl;
    std::cout << ptr << std::endl;
    std::cout << &var << std::endl;


    return 0;
}