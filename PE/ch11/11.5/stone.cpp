/*
 * Rewrite the Stonewt class (Listing 11.16 and 11.17) so that it has a
 * state member that governs whether the object is interpreted in stone
 * form, integer pounds form, or floating-point pounds form. Overload the
 * << operator to replace the show_stn() and show_lbs() methods. Overload
 * the addition, subtraction, and multiplication operators so that one can
 * add, subtract, and multiply Stonewt values. Test your class with a short
 * program that uses all the class methods and friends.
 */
#include <iostream>
#include "stonewt.h"
int main()
{
    using namespace std;
    Stonewt st1;
    Stonewt st2(275);
    Stonewt st3(21, 8.8);

    cout << "st1: " << st1 << endl;
    cout << "st2: " << st2 << endl;
    cout << "st3: " << st3 << endl;
    st1 = 280.8;
    cout << "Now st1: " << st1 << endl;
    st1.setState(Stonewt::iPounds);
    cout << "Integer pounds form of st1: " << st1 << endl;
    st1.setState(Stonewt::Stone);
    cout << "Stone form of st1: " << st1 << endl;
    st3.setState(Stonewt::fPounds);
    cout << "Floating-point form of st3: " << st3 << endl;

    cout << "st2 + st3 = " << st2+st3 << endl;
    cout << "st2 - st3 = " << st2-st3 << endl;
    cout << "2 * st3 = " << 2 * st3 << endl;
    cout << "st1 * 1.5 = " << st1 * 1.5 << endl;

    return 0;
}
