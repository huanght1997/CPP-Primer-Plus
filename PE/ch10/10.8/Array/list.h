#ifndef LIST_H_
#define LIST_H_
typedef double Item;
class List
{
    private:
        static const int MAX = 10;
        Item items[MAX];
        int count;
    public:
        List();
        bool add(Item data);
        bool isEmpty();
        bool isFull();
        void visit(void (*pf)(Item &));
};
#endif
