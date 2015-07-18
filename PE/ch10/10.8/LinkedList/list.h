#ifndef LIST_H_
#define LIST_H_
typedef double Item;
struct Node
{
    Item data;
    Node * next;
};
class List
{
    private:
        static const int MAX = 10;
        Node * head;
        int count;
    public:
        List();
        ~List();
        bool add(Item data);
        bool isEmpty();
        bool isFull();
        void visit(void (*pf)(Item &));
};
#endif
