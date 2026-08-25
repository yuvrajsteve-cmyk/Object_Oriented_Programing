
// OPERATORS and OPERATOR OVERLOADING in C++ 

#include <iostream>
using namespace std;

struct Ingredient {
    int calories;
};

int operator+(Ingredient A, Ingredient B) {
    return A.calories + B.calories;
}



int main () {

    Ingredient sugar;
    sugar.calories = 100;

    Ingredient butter;
    butter.calories = 200;

    int total = sugar + butter;

    cout << total << " : is your total calories";



    return 0;
}