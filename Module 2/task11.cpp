// Task 11: Write a program to demonstrate the typecasting of basic type to class type.  

#include <iostream>
using namespace std;

class Time {
private:
    int hours;
    int minutes;

public:
    Time() {
        hours = 0;
        minutes = 0;
    }

    Time(int totalMinutes) {
        hours = totalMinutes / 60;
        minutes = totalMinutes % 60;
        cout << "Transformation Complete: " << totalMinutes << " minutes converted to Object." << endl;
    }

    void displayTime() {
        cout << "Time inside Object = " << hours << " Hours and " << minutes << " Minutes." << endl;
    }
};

int main() {
    cout << "Main function started." << endl;

    int total_duration = 135; 
    Time t1; 

    cout << "\nExecuting Typecasting: Basic Type to Class Type...\n" << endl;

    t1 = total_duration; 
    t1.displayTime();

    cout << "\nMain function finished." << endl;
    return 0;
}
