/*
 * Rewrite the Stonewt class (Listings 11.16 and 11.17) so that it overloads
 * all six relational operators. The operator should compare the pounds
 * members and return a type bool value. Write a program that declares an
 * array of six Stonewt objects and initializes the first three objects in
 * the array declaration. Then it should use a loop to read in values used
 * to set the remaining three array elements. Then it should report the
 * smallest element, the largest element, and how many elements are greater
 * or equal to 11 stone. (The simplest approach is to create a Stonewt
 * object initialized to 11 stone and to compare the other objects with that
 * object.
 */
#include <iostream>
#include "stonewt.h"
int main()
{
    using namespace std;
    Stonewt objects[6] = {11*14, 201.5, 120};
    for (int i = 3; i < 6; i++)
    {
        cout << "Please enter the pounds of object #" << i+1 << ": ";
        double p;
        cin >> p;
        objects[i] = p;
    }
    Stonewt max, min;
    max = min = objects[0];
    int gr11 = 0;
    for (int i = 0; i < 6; i++)
    {
        if (objects[i] > max)
            max = objects[i];
        if (objects[i] < min)
            min = objects[i];
        if (objects[i] >= objects[0])
            gr11++;
    }
    cout << "Max: ";
    max.show_stn();
    cout << "Min: ";
    min.show_stn();
    cout << "There are " << gr11 << " elements not less than 11 stones.\n";
    return 0;
}
