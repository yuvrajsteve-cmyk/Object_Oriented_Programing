#include <iostream>
#include <string>

int main () {

  const char *name = "Yuvraj Singh";
  int number = 8;
  int& ptr = number;
  ptr = 10;
  std::string brother = "Satinderpal";
  bool isOnline = true;

  std::string& myBrother = brother;
  myBrother = "Jasspreet singh"; 



  std::cout << name << "\n";
  std::cout << ptr << " and Number is: "<< number << "\n";
  std::cout << &brother << " and string is: " << brother << "\n";
  std::cout << &isOnline << " and bool is: " << isOnline << "\n";
  
}