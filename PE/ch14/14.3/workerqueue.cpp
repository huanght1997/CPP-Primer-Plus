/*
 * Define a QueueTp template.Test it by creating a queue of pointers-to-
 * Worker (as defined in Listing 14.10) and using the queue in a program
 * similar to that in Listing 14.12.
 */
// compile with workermi.cpp
#include <iostream>
#include <cstring>
#include "queuetp.h"
#include "workermi.h"
const int SIZE = 5;

int main()
{
    using std::cin;
    using std::cout;
    using std::endl;
    using std::strchr;

    Queue<Worker *> lolas(SIZE);

    int ct;
    for (ct = 0; ct < SIZE; ct++)
    {
        char choice;
        cout << "Enter the employee category:\n"
            << "w: waiter  s: singer  "
            << "t: singing waiter  q: quit\n";
        cin >> choice;
        while (strchr("wstq", choice) == NULL)
        {
            cout << "Please enter a w, s, t, or q: ";
            cin >> choice;
        }
        if (choice == 'q')
            break;
        Worker * temp;
        switch (choice)
        {
            case 'w':   temp = new Waiter;
                        break;
            case 's':   temp = new Singer;
                        break;
            case 't':   temp = new SingingWaiter;
                        break;
        }
        cin.get();
        temp->Set();
        lolas.enqueue(temp);
    }

    cout << "\nHere is your staff:\n";
    int i;
    for (i = 0; !lolas.isempty(); i++)
    {
        Worker * current;
        lolas.dequeue(current);
        current->Show();
        delete current;
    }
    cout << "Bye.\n";
    return 0;
}
