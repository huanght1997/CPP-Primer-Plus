/*
 * Consider the following class declaration
 * (in cow.h)
 * Provide the implementation for this class and write a short program that
 * uses all the member functions.
 */
#include <iostream>
#include "cow.h"
int main()
{
    Cow c1;
    Cow c2("Moo", "Eating grass", 120);
    Cow c3("Bull", "Fighting", 140);
    c1 = c2;
    c1.ShowCow();
    c2.ShowCow();
    Cow c4(c3);
    c3.ShowCow();
    c4.ShowCow();
    return 0;
}
