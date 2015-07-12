/*
 * Consider the following structure declaration:
 * struct customer {
 *     char fullname[35];
 *     double payment;
 * };
 * Write a program that adds and removes customer structures from a stack,
 * represented by a Stack class declaration. Each time a customer is
 * removed, his or her payment should be added to a running total and the
 * running total should be reported. Note: You should be able to use the
 * Stack class unaltered; just change the typedef declaration so that Item
 * is type customer instead of unsigned long.
 */
#include <iostream>
#include <cctype>
#include "stack.h"
int main()
{
    using namespace std;
    Stack st;
    char ch;
    double total = 0.0;
    Item cust;
    cout << "Please enter A to add a customer, P to process a customer,\n"
         << "or Q to quit.\n";
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
            case 'a':   cout << "Enter the name of the customer: ";
                        cin.getline(cust.fullname, 35);
                        cout << "Enter the payment of the customer: ";
                        cin >> cust.payment;
                        cin.get();
                        if (st.isfull())
                            cout << "stack already full\n";
                        else
                            st.push(cust);
                        break;
            case 'P':
            case 'p':   if (st.isempty())
                            cout << "stack already empty\n";
                        else {
                            st.pop(cust);
                            cout << "OK. The total is " << total << endl;
                            total += cust.payment;
                        }
                        break;
        }
        cout << "Please enter A to add a customer, "
            << "P to process a customer,\n" << "or Q to quit.\n";
    }
    cout << "Bye\n";
    return 0;
}
