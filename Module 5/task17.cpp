// Task 17: Write a program to demonstrate the use of class template. 

#include <iostream>
using namespace std;

template <class T> 

class Container {
    private:
        T num1, num2;

    public:
        Container(T n1, T n2) {
            num1 = n1;
            num2 = n2;
        }        

        T getMaximun() {
            if (num1 > num2) {
                return num1;
            } else {
                return num2;
            }
        }
};


int main() {
    Container<int> intObj(10, 24);
    cout << "The Largest Number Between 10 and 24 is: " << intObj.getMaximun() << endl;

    return 0;
}
 