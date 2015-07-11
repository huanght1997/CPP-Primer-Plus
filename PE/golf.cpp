#include <iostream>
#include <cstring>
#include "golf.h"

void setgolf(golf & g, const char * name, int hc)
{
    strcpy(g.fullname, name);
    g.handicap = hc;
}

int setgolf(golf & g)
{
    using namespace std;
    cout << "Please enter the fullname: ";
    char name[Len];
    cin.getline(name, Len);
    if (name[0] == '\0')
        return 0;
    strcpy(g.fullname, name);
    cout << "Please enter the handicap: ";
    int handicap;
    cin >> handicap;
    g.handicap = handicap;
    cin.get();
    return 1;
}

void handicap(golf & g, int hc)
{
    g.handicap = hc;
}

void showgolf(const golf & g)
{
    using namespace std;
    cout << "Fullname: " << g.fullname << endl;
    cout << "handicap: " << g.handicap << endl << endl;
}
