


#include <iostream>
using namespace std;


union Test {
    int money;
    char grade;
};


int main () {
    Test ti;
    
    ti.money = 53;

    cout << "Money: " << ti.money << endl;
    cout << "Grade: " << ti.grade << endl;
   
 
    return 0;
}