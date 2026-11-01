#include <iostream>
#include <string>

class StringNode
{
private:
    std::string elem;
    StringNode *next;

    friend class StringLinkedList;
};
class StringLinkedList
{
public:
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
    list.addFront("yuvraj singh");
    list.addFront("satinderpal singh");
    list.addFront("batta");

    list.removeFront();
    list.empty();
    //list.~StringLinkedList();

    std::cout << "Add in Queue: " << list.front()  << ", "<< list.empty() << "\n";


    return 0;
}