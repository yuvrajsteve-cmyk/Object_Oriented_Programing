#include <iostream>
#include <string>


template <typename T>
auto min(T a, T b) -> T
{
    return a < b ? a : b;
}

int main()
{
    std::cout << min(1, 2) << "\n";
    std::cout << min(1.2, 2.2) << "\n";
    return 0;
}