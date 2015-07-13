/*
 * Here's a class definition:
 * (In move.h)
 * Create member function definitions and a program that exercises the
 * class.
 */
#include <iostream>
#include "move.h"
int main()
{
    using namespace std;
    Move m1;
    Move m2(3,4);
    cout << "m1: ";
    m1.showmove();
    cout << "m2: ";
    m2.showmove();
    m1.reset(1,2);
    cout << "m1: ";
    m1.showmove();
    Move m3 = m1.add(m2);
    cout << "m3: ";
    m3.showmove();
    m3.reset();
    cout << "Now m3: ";
    m3.showmove();
    return 0;
}
