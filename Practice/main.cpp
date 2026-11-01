#include <iostream>
#include <string>

class StringNode // it's a class
{
private: // private variables
    std::string elem;
    StringNode *next;              // next is a pointer
    friend class StringLinkedList; // this is a frined class
};
class StringLinkedList // this is a class
{
public: // public member functions , destructor and constructor
    StringLinkedList();
    ~StringLinkedList();
    bool empty() const;
    const std::string &front() const;
    void addFront(const std::string &e);
    void removeFront();

private:
    StringNode *head;
};

StringLinkedList::StringLinkedList() : head(NULL) {}

StringLinkedList::~StringLinkedList()
{
    while (!empty())
        removeFront();
}

bool StringLinkedList::empty() const
{
    return head == NULL;
}

const std::string &StringLinkedList::front() const
{
    return head->elem;
}

void StringLinkedList::addFront(const std::string &e)
{
    StringNode *v = new StringNode;
    v->elem = e;
    v->next = head;
    head = v;
}

void StringLinkedList::removeFront()
{
    StringNode *old = head;
    head = old->next;
    delete old;
}
int main()
{
    StringLinkedList list;
    list.addFront("Satinderpal Singh");

    std::cout << list.front() << "\n";
    return 0;
}