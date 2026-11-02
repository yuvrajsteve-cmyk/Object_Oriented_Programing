#include <iostream>
#include <string>

typedef std::string Elem; // list element type
class DNode
{
private:
    Elem elem;
    DNode *prev;
    DNode *next;
    friend class DLinkedList;
};

class DLinkedList
{
public:
    DLinkedList();                // make the constructor
    ~DLinkedList();               // make the destructor
    bool empty() const;           // is list empty?
    const Elem &front() const;    // this function for get the front element
    const Elem &back() const;     // this function for get the last back element
    void addFront(const Elem &e); // this for add element to the front
    void addBack(const Elem &e);  // this for add the element to the back
    void removeFront();           // for remove the front element
    void removeBack();            // for remove the back element
private:
    DNode *header;
    DNode *trailer;

protected:
    void add(DNode *v, const Elem &e);
    void remove(DNode *v);
};
DLinkedList::DLinkedList() // constructor
{
    header = new DNode;     // create heap memory
    trailer = new DNode;    // create heap memory
    header->next = trailer; // header point to the trailer
    trailer->prev = header; // trailer again pointer to the header
}
DLinkedList::~DLinkedList() // destructor
{
    while (!empty())   // if not empty() , than this
        removeFront(); // this
    delete header;     // otherwise delete the header
    delete trailer;    // otherwise delete the trailer
}
bool DLinkedList::empty() const // is list empty ?
{
    return (header->next == trailer); // this return the header pints to the trailer
}
const Elem &DLinkedList::front() const // this for get the front element
{
    return header->next->elem; // this return the header points to the next and on the elemnt
}
const Elem &DLinkedList::back() const // this is for get the back element
{
    return trailer->prev->elem; // this return the trailer points to the previous and next on the element
}
void DLinkedList::add(DNode *v, const Elem &e) // insert new node v
{
    DNode *u = new DNode;
    u->elem = e;       // create a new node for e
    u->next = v;       // link u in between v
    u->prev = v->prev; // ...and v->prev
    v->prev->next = u; // joint the pinter to u
    v->prev = u;       // v prev points to u
}
void DLinkedList::addFront(const Elem &e) // this is for add front element
{
    add(header->next, e);
}
void DLinkedList::addBack(const Elem &e) // this is for th add last back element
{
    add(trailer, e);
}
void DLinkedList::remove(DNode *v) // remove the node V
{
    DNode *u = v->prev;
    DNode *w = v->next;
    u->next = w;
    w->prev = u;
    delete v;
}
void DLinkedList::removeFront() // this is for remove the front
{
    remove(header->next);
}
void DLinkedList::removeBack() // this is for remove back element
{
    remove(trailer->prev);
}

int main()
{
    DLinkedList list;
    list.addBack("yuvraj");
    list.addFront("Satinder");

    std::cout << list.front() << " and " << list.back() << "\n";
    return 0;
}