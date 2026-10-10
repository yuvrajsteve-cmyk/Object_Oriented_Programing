#include <iostream>

class TonyStarkLab {
    public:
        TonyStarkLab() {
            std::cout << "JARVIS: Security Shield Activte " << std::endl;
        }

        ~TonyStarkLab() {
            std::cout << "JARVIS: Memory Cleared! " << std::endl;
        }
};

void runLabSystem_C_Style(TonyStarkLab system) {
    std::cout << "Lab system is running......" << std::endl;
}

void runLabSystem_CPP_Style(const TonyStarkLab& system) {
    std::cout << "Lab system is running Efficently ......" << std::endl;
} 
int main () {

    TonyStarkLab tony;
    std::cout << "============================ " << std::endl;
    runLabSystem_C_Style(tony);

    std::cout << "Calling cpp style.........." << std::endl;
    runLabSystem_CPP_Style(tony);


    return 0;
    
}