

#include <iostream>
#include <string>
using namespace std;

int main () {


   int x = 20;
   double y = x;

   cout << "Value is: " << x << endl;
   cout << "Value is: " << fixed << y << endl;
   cout <<"===================================" << endl;

   char word = 'A';
   string name(1, word);

   cout << "The Word is: " << word << endl;
   cout << "The Name is: " << name << endl;


    return 0;
}