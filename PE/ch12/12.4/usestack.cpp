// usestack.cpp -- testing the Stack class
#include <iostream>
#include <cctype>
#include "stack.h"
int main()
{
    using namespace std;
    Stack st1;
    Stack st2(8);
    char ch;
    unsigned long po;
    cout << "Please enter A to add a purchase order,\n"
        << "P to process a PO, or Q to quit.\n";
    while (cin >> ch && toupper(ch) != 'Q')
    {
        while (cin.get() != '\n')
            continue;
        if (!isalpha(ch))
        {
            cout << '\a';
            continue;
        }
        switch (ch)
        {
            case 'A':
            case 'a':   cout << "Enter a PO number to add: ";
                        cin >> po;
                        if (st1.isfull())
                            cout << "stack already full\n";
                        else
                            st1.push(po);
                        break;
            case 'P':
            case 'p':   if (st1.isempty())
                            cout << "stack already empty\n";
                        else {
                            st1.pop(po);
                            cout << "PO #" << po << " popped\n";
                        }
                        break;
        }
        cout << "Please enter A to add a purchase order,\n"
             << "P to process a PO, or Q to quit.\n";
    }
    for (int i = 0; i < 8; i++)
        st2.push(i);
    cout << "Original st2:\n";
    for (int i = 0; i < 8; i++)
    {
        st2.pop(po);
        cout << po << " ";
    }
    st2 = st1;  // assignment
    Stack st3(st1);
    cout << endl << "Poping st2: ";
    for (int i = 0; !st2.isempty(); i++)
    {
        st2.pop(po);
        cout << po << " ";
    }
    cout << endl << "Poping st3: ";
    for (int i = 0; !st3.isempty(); i++)
    {
        st3.pop(po);
        cout << po << " ";
    }
    cout << "\nBye\n";
    return 0;
}
