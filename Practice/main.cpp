#include <iostream>
#include <string>

class StackEmpty
{
public:
  StackEmpty(std::string err) {}
};
class StackFull
{
public:
  StackFull(std::string err) {}
};

template <typename E>
class ArrayStack
{
  enum
  {
    DEF_CAPACITY = 100
  };

public:
  ArrayStack(int cap = DEF_CAPACITY);
  int size() const;
  bool empty() const;
  const E &top() const;
  void push(const E &e);
  void pop();

private:
  E *S;
  int capacity;
  int t;
};

template <typename E>
ArrayStack<E>::ArrayStack(int cap) : S(new E[cap]), capacity(cap), t(-1) {}

template <typename E>
int ArrayStack<E>::size() const
{
  return (t + 1);
}

template <typename E>
bool ArrayStack<E>::empty() const
{
  return (t < 0);
}

template <typename E>
const E &ArrayStack<E>::top() const
{
  if (empty())
    throw StackEmpty("Top of empty stack");
  return S[t];
}

template <typename E>
void ArrayStack<E>::push(const E &e)
{
  if (size() == capacity)
    throw StackFull("Push to full stack");
  S[++t] = e;
}

template <typename E>
void ArrayStack<E>::pop()
{
  if (empty())
    throw StackEmpty("Pop from empty stack");
  --t;
}
int main()
{
  ArrayStack<int> myStack(5);

  myStack.push(10);
  myStack.push(20);
  std::cout << "Top element: " << myStack.top() << std::endl;

  std::cout <<"=====================================" "\n";

  ArrayStack<std::string> myString(10);
  myString.push("Satinderpal Singh");
  std::cout << "Top element is: " << myString.top() << "\n";

  std::cout <<"=====================================" "\n";

  ArrayStack<float> myFloat(10);
  myFloat.push(10.23);
  std::cout << "Top element is: " << myFloat.top() << "\n";

  std::cout <<"=====================================" "\n";

  ArrayStack<bool> myBool(10);
  myBool.push(false);
  std::cout << "Top element is: " << myBool.top() << "\n";
  return 0;
}
