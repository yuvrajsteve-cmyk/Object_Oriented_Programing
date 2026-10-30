#include <iostream>
#include <string>

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
int ArrayStack<E>::size() const { return (t + 1); }
template <typename E>
bool ArrayStack<E>::empty() const { return (t < 0); }
template <typename E>
const E &ArrayStack<E>::top() const
{
    if (empty())
        ;
    return S[t];
}

template <typename E>
void ArrayStack<E>::push(const E &e)
{
    if (size() == capacity)
        ;
    S[++t] = e;
}

template <typename E>
void ArrayStack<E>::pop()
{
    if (empty())
        ;
    --t;
}

int main()
{
    ArrayStack<int> A;
    A.push(12);
    A.push(20);

    ArrayStack<std::string> name;
    name.push("Satinder");
    name.push("yuvraj");
    name.push("lovepreet");

    ArrayStack<bool> yes;
    yes.push(1);
    yes.push(0);

    ArrayStack<char> a;
    a.push('A');


    std::cout << A.top() << std::endl;
    std::cout << name.top() << "\n";
    std::cout << yes.top() << "\n";
    std::cout << a.top() << "\n";
    return 0;
}