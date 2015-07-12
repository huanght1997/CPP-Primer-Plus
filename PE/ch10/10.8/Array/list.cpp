#include <iostream>
#include "list.h"
List::List()
{
    count = 0;
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
        items[count++] = data;
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
        for (int i = 0; i < count; i++)
            pf(items[i]);
}
