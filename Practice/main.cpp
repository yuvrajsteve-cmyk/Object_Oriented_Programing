#include <iostream>
#include <string>
#include <format>


class Student {
  public:
    std::string name;
    int age;
    int rollNo;

  void display () {
    std::string reslt = std::format("Hello, {} . Your {} years old and this is your {} roll number" , name, age, rollNo);
    std::cout << reslt << std::endl;
  }
};

int main()
{

  Student s;
  s.age = 25;
  s.name = "Yuvraj Singh";
  s.rollNo = 3775;

  

  s.display();

  return 0;
}
