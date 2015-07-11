#include <iostream>
#include <cstring>
#include "person.h"
using namespace std;
Person::Person(const string & ln, const char * fn)
{
    lname = ln;
    strcpy(fname, fn);
}
void Person::Show() const
{
    cout << fname << " " << lname << endl;
}
void Person::FormalShow() const
{
    cout << lname << ", " << fname << endl;
}
