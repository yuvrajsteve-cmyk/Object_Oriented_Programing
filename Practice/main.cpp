#include <stack>
#include <iostream>

std::stack<int> myStack;

int main()
{

  myStack.push(3);
  myStack.push(6);

  std::cout << myStack.top() << " and size is: " << myStack.size() << "\n";
  std::cout << "My stack is empty: " << myStack.empty() << "\n";

for (int i = 0; i < myStack.size(); i++) {
  std::cout << "The stack is: " << myStack.size() << " and top " << myStack.top() << "\n";
}

  return 0;
}