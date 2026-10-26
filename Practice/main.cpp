#include <iostream>
#include <string>
#include <map>

template <typename T>
class Box
{
private:
  T data;

public:
  Box(T d) : data(d)
  {
  }
  T getData()
  {
    return data;
  }
};
int main()
{
  
  Box<int> intBox(230);
  Box<std::string> nameBox("yuvraj");

  std::cout << "Hello!" << std::endl;

  std::cout << "Int Box Data: " << intBox.getData() << std::endl;
  std::cout << "Name Box Data: " << nameBox.getData() << std::endl;

  return 0;
}