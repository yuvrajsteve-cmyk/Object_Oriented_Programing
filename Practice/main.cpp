#include <iostream>
#include <string>




int main () {



  enum { arr = 9};
  std::string myArr[arr] = {"Yuvraj Singh", "Satinderpal Singh", "Inderjit Singh", "Karamjit Kaur", "Jasspreet Kaur"};
  
  std::string newName;
  std::cout << "Enter a name to add: ";
  std::getline(std::cin, newName);

  myArr[5] = newName;
  myArr[6] = "Param";
  myArr[7] = "Jassi";
  myArr[8] = "Harpal";


  for (int i = 0; i < arr; i++) {
    std::cout << "List: " << myArr[i] << "\n";
  }

 

  




  

  return 0;
}