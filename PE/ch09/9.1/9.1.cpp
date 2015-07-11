/*
 * Here is a header file:
 * (It's golf.h)
 * Note that setgolf() is overloaded. Using the first version of setgolf()
 * would look like this:
 * golf ann;
 * setgolf(ann, "Ann Birdfree", 24);
 * The function call provides the information that's stored in the ann
 * structure. Using the second version of setgolf() would look like this:
 * golf andy;
 * setgolf(andy);
 * The function would prompt the user to enter the name and handicap and
 * store them in the andy structure. This function could (but doesn't need
 * to) use the first version internally.
 * Put together a multifile program based on this header. One file, named
 * golf.cpp, should provide suitable function definitions to match the
 * prototypes in the header file. A second file should contain main() and
 * demonstrate all the features of the prototyped functions. For example, a
 * loop should solicit input for an array of golf structures and terminate
 * when the array is full or the user enters an empty string for the
 * golfer's name. The main() function should use only the prototyped
 * functions to access the golf structures.
 */
#include <iostream>
#include "golf.h"
int main()
{
    using namespace std;
    golf player[8];
    setgolf(player[0], "Ann Birdfree", 24);
    int count = 1;
    for (int i = 1; i < 8; i++)
    {
        if (!setgolf(player[i]))
        {
            cout << "Input terminated.\n";
            break;
        }
        else
            count++;
    }
    for (int i = 0; i < count; i++)
        showgolf(player[i]);
    cout << "Now you can change Ann Birdfree's handicap: ";
    int hdcp;
    cin >> hdcp;
    handicap(player[0], hdcp);
    for (int i = 0; i < count; i++)
        showgolf(player[i]);
    return 0;
}
