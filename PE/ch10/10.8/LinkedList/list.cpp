#include <iostream>
#include "list.h"
List::List()
{
    count = 0;
    head = NULL;
}

List::~List()
{
    Node * temp = head;
    Node * front;
    if (temp == NULL)
        return;
    while (temp->next != NULL)
    {
        front = temp;
        temp = temp->next;
        delete front;
    }
    delete temp;
}
    
bool List::add(Item data)
{
    if (this->isFull())
    {
        std::cout << "The list is full.\n";
        return false;
    }
    else
    {
        Node * p = new Node;
        p->data = data;
        p->next = NULL;
        if (head == NULL)
            head = p;
        else
        {
            Node * current = head;
            while (current->next != NULL)
                current = current->next;
            current->next = p;
        }
        count++;
        return true;
    }
}
bool List::isEmpty()
{
    return count == 0;
}
bool List::isFull()
{
    return count == MAX;
}
void List::visit(void (*pf)(Item &))
{
    if (this->isEmpty())
        std::cout << "The list is empty.\n";
    else
    {
        Node * current = head;
        do
        {
            pf(current->data);
            current = current->next;
        } while (current != NULL);
    }
}
