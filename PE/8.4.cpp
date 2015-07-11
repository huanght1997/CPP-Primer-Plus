/*
 * The following is a program skeleton:
 *
 * Complete this skeleton by providing the described functions and
 * prototypes. Note that there should be two show() functions, each using
 * default arguments. Use const arguments when appropriate. Note that set()
 * should use new to allocate sufficient space to hold the designated
 * string. the techniques used here are similar to those used in designing
 * and implementing classes. (You might have to alter the header filenames
 * and delete the using directive, depending on your compiler.)
 */
// the provided part begins.
#include <iostream>
using namespace std;
#include <cstring>      // for strlen(), strcpy()
struct stringy {
    char * str;         // points to a string
    int ct;             // length of string (not counting '\0')
};

// prototype for set(), show(), and show() go here
// THE CONTENTS BETWEEN THIS TWO COMMENTS ARE NOT THE PROVIDED PART.
void set(stringy & stry, char * str);
void show(const stringy & stry, int count = 1);
void show(const char * str, int count = 1);
// THE CONTENTS BETWEEN THIS TWO COMMENTS ARE NOT THE PROVIDED PART.
int main()
{
    stringy beany;
    char testing[] = "Reality isn't what it used to be.";

    set(beany, testing);    // first argument is a reference,
                // allocates space to hold copy of testing.
                // sets str member of beany to point to the
                // new block, copies testing to new block,
                // and sets ct member of beany
    show(beany);        // print member string once
    show(beany, 2);     // print member string twice
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);      // print testing string once
    show(testing, 3);   // print testing string thrice
    show("Done!");
    return 0;
}
// The provided part ends.

void set(stringy & stry, char * str)
{
    char * s = new char[strlen(str)+1];
    stry.str = s;
    strcpy(s, str);
    stry.ct = strlen(str);
}

void show(const stringy & stry, int count)
{
    for (int i = 0; i < count; i++)
        cout << stry.str << endl;
}

void show(const char * str, int count)
{
    for (int i = 0; i < count; i++)
        cout << str << endl;
}
