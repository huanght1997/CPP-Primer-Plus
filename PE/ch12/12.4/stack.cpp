/* 
 * Consider the following variation of the Stack class defined in Listing
 * 10.10:
 * (In stack.h)
 * As the private members suggest, this class uses a dynamically allocated
 * array to hold the stack items. Rewrite the methods to fit this new
 * representation and write a program that demonstrates all the methods,
 * including the copy constructor and assignment operator.
 */
#include "stack.h"
Stack::Stack(int n)      // create an empty stack
{
    size = n;
    pitems = new Item[size];
    top = 0;
}

Stack::Stack(const Stack & st)
{
    size = st.size;
    pitems = new Item[size];
    top = st.top;
    for (int i = 0; i < size; i++)
        pitems[i] = st.pitems[i];
}

Stack::~Stack()
{
    delete [] pitems;
}

bool Stack::isempty() const
{
    return top == 0;
}

bool Stack::isfull() const
{
    return top == size;
}

bool Stack::push(const Item & item)
{
    if (!isfull())
    {
        pitems[top++] = item;
        return true;
    }
    else
        return false;
}

bool Stack::pop(Item & item)
{
    if (!isempty())
    {
        item = pitems[--top];
        return true;
    }
    else
        return false;
}

Stack & Stack::operator=(const Stack & st)
{
    delete [] pitems;
    size = st.size;
    pitems = new Item[size];
    for (int i = 0; i < size; i++)
        pitems[i] = st.pitems[i];
    top = st.top;
    return *this;
}
