#ifndef QUEUETP_H_
#define QUEUETP_H_

template <typename Item>
class Queue
{
    private:
        struct Node { Item item; struct Node * next;};
        enum {Q_SIZE = 10};     // default queue size
        Node * front;           // The pointer to the first Item
        Node * rear;            // The pointer to the last Item
        int items;              // Current items
        const int qsize;        // Maximum items
        // prevent copy
        Queue(const Queue & q) : qsize(0) { }
        Queue & operator=(const Queue & q) { return * this;}
    public:
        Queue(int qs = Q_SIZE); // create queue with a qs limit
        ~Queue();
        bool isempty() const { return items == 0; }
        bool isfull() const { return items == qsize; }
        int queuecount() const { return items; }
        bool enqueue(const Item & item);    // add item to end
        bool dequeue(Item & item);          // remove item from front
};

template <typename Item>
Queue<Item>::Queue(int qs) : qsize(qs), items(0)
{
    front = rear = 0;
}

template <typename Item>
Queue<Item>::~Queue()
{
    Node * temp;
    while (front != 0)
    {
        temp = front;
        front = front->next;
        delete temp;
    }
}

template <typename Item>
bool Queue<Item>::enqueue(const Item & item)
{
    if (isfull())
        return false;
    Node * add = new Node;
    add->item = item;
    add->next = 0;
    items++;
    if (front == 0)
        front = add;
    else
        rear->next = add;
    rear = add;
    return true;
}

template <typename Item>
bool Queue<Item>::dequeue(Item & item)
{
    if (front == 0)
        return false;
    item = front->item;
    items--;
    Node * temp = front;
    front = front->next;
    delete temp;
    if (items == 0)
        rear = 0;
    return true;
}

#endif
