// Task 10: Write a program to demonstrate the overloading of memory management
// operators.

#include <iostream>
using namespace std;

class Doombot {
    private:
        int id;

    public:
        Doombot() {
            cout << "Doombot Constructure Called." << endl;
        }        

        void* operator new(size_t size) {
            cout << "\n[ALERT] Doom'a custom 'new' Intercepted!" << endl;
            cout << "Requesting " << size << " bytes from RAM." << endl;

            void* p = malloc(size);
            return p;
        }

        void operator delete (void* p) {
            cout << "[ALERT] Doom's custom 'delete' Intercepted!" << endl;
            cout << "Returning memory back to RAM safly." << endl;

            free(p);
        }

        ~Doombot() {
            cout << "Doombot Destructor Called." << endl;
        }
};

int main () {

    cout << "Main function Started." << endl;

    Doombot* myBot = new Doombot();

    delete myBot;

    cout << "\nMain function finished." << endl;

    return 0;
}