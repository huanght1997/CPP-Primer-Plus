#include <iostream>
#include <cstring>
#include "golf.h"

Golf::Golf(const char * name, int hc)
{
    strcpy(fullname, name);
    handicap = hc;
}

int Golf::setgolf()
{
    using namespace std;
    cout << "Please enter the fullname: ";
    char name[Len];
    cin.getline(name, Len);
    if (name[0] == '\0')
        return 0;
    cout << "Please enter the handicap: ";
    int hc;
    cin >> hc;
    *this = Golf(name, hc);
    cin.get();
    return 1;
}

void Golf::sethandicap(int hc)
{
    handicap = hc;
}

void Golf::showgolf() const
{
    using namespace std;
    cout << "Fullname: " << fullname << endl;
    cout << "handicap: " << handicap << endl << endl;
}
