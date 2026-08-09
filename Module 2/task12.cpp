// Task 12: Write a program to demonstrate the typecasting of class type to basic type.  
#include <iostream>
using namespace std;

class Time {
private:
    int hours;
    int minutes;

public:
    Time(int h, int m) {
        hours = h;
        minutes = m;
    }

    operator int() {
        int total = (hours * 60) + minutes;
        return total;
    }
};

int main() {
    cout << "Main function started." << endl;

    Time t1(2, 15); 
    int total_minutes;

    cout << "\nExecuting Typecasting: Class Type to Basic Type...\n" << endl;

    total_minutes = t1; 

    cout << "Extracted Value from Object = " << total_minutes << " Minutes." << endl;

    cout << "\nMain function finished." << endl;
    return 0;
}
