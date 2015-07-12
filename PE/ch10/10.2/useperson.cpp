/*
 * Here is a rather simple class definition:
 * (in person.h)
 * (It uses both a string object and a character array so that you can
 * compare how the two forms are used.) Write a program that completes the
 * implementation by providing code for the undefined methods.The program
 * in which you use the class should also use the three possible
 * constructor calls (no arguments, one argument, and two arguments) and
 * the two display methods. Here’s an example that uses the constructors
 * and methods:
 * (And that's this file.)
 */
#include <iostream>
#include "person.h"
int main()
{
    Person one;
    Person two("Smythcraft");
    Person three("Dimwiddy", "Sam");
    one.Show();
    cout << endl;
    one.FormalShow();
    two.Show();
    two.FormalShow();
    three.Show();
    three.FormalShow();
    return 0;
}
