#include <iostream>
#include <fstream>
#include <string>

int main () {
    std::ifstream in("../CMakeLists.txt");

    if(!in) {
        std::cout << "File not found! ";
        return 1;
    }

    std::string line;

    std::cout << "=== Data found in the file ===\n\n";

    while(std::getline(in, line)) {
        std::cout << line << std::endl;
    }

    std::cout << "\n ==================== \n";

    in.close();

    return 0;
}