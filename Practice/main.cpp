#include <iostream>
#include <string>

typedef std::string Elem; // list element type
class DNode               // doubly linked list node
{
private:
    Elem elem;                // node element value
    DNode *prev;              // previous node in list
    DNode *next;              // next node in list
    friend class DLinkedList; // allow DLinkList access
};

class DLinkedList
{
public:
    DLinkedList();                // constructor
    ~DLinkedList();               // destructor
    bool empty() const;           // is list empty ?
    const Elem &back() const;     // get back element
    const Elem &front() const;    // get front element
    void addFront(const Elem &e); // add to front of list
    void addBack(const Elem &e);  // add to back of list
    void removeFront();           // remove from front
    void removeBack();            // remove from back

private:
    DNode *header;
    DNode *trailer;

protected:                             // local utilites
    void add(DNode *v, const Elem &e); // insert new node before v
    void remove(DNode *v);             // remove node v
};

DLinkedList::DLinkedList() // construtor
{
    header = new DNode; // create sentinels
    trailer = new DNode;
    header->next = trailer; // have them point to each other
    trailer->prev = header;
}
DLinkedList::~DLinkedList() // destructor
{
    while (!empty())
        removeFront(); // remove all but sentinels
    delete header;     // remove the sentinels
    delete trailer;
}

bool DLinkedList::empty() const // is list empty?
{
    return (header->next == trailer);
}
const Elem &DLinkedList::front() const // get front element
{
    return header->next->elem;
}
const Elem &DLinkedList::back() const // get back element
{
    return trailer->prev->elem;
}
void DLinkedList::add(DNode *v, const Elem &e) // insert new node berfore v
{
    DNode *u = new DNode; // create a nwe node for e
    u->elem = e;
    u->next = v;       //  link u in between v
    u->prev = v->prev; // ...add v->prev
    v->prev->next = v->prev = u;
}

void DLinkedList::addFront(const Elem &e) // add to front of list
{
    add(header->next, e);
}
void DLinkedList::addBack(const Elem &e) // add to back of list
{
    add(trailer, e);
}

void DLinkedList::remove(DNode *v) // remove node v
{
    DNode *u = v->prev; // predecessor
    DNode *w = v->next; // successor
    u->next = w;        // unlink v from list
    w->prev = u;
    delete v;
}
void DLinkedList::removeFront() // remove from front
{
    remove(header->next);
}
void DLinkedList::removeBack() // remove from back
{
    remove(trailer->prev);
}

int main()
{
    DLinkedList list;
    list.addBack("Satinderpal Singh");
    list.addFront("Yuvraj Singh");

    std::cout << list.back() << "\n";
    std::cout << list.front() << "\n";

    return 0;
}