#include <iostream>
#include <cstring>
#include "classic.h"
using namespace std;

// Cd methods
Cd::Cd(const char * s1, const char * s2, int n, double x)
{
    performers = new char[strlen(s1)+1];
    strcpy(performers, s1);
    label = new char[strlen(s2)+1];
    strcpy(label, s2);
    selections = n;
    playtime = x;
}

Cd::Cd(const Cd & d)
{
    performers = new char[strlen(d.performers)+1];
    strcpy(performers, d.performers);
    label = new char[strlen(d.label)+1];
    strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
}

Cd::Cd()
{
    performers = new char[8];
    strcpy(performers, "Unknown");
    label = new char[5];
    strcpy(label, "None");
    selections = 0;
    playtime = 0.0;
}

Cd::~Cd()
{
    delete [] performers;
    delete [] label;
}

void Cd::Report() const
{
    cout << "Performers: " << performers << endl;
    cout << "Label: " << label << endl;
    cout << selections << " selections, " << playtime << " minutes.\n";
}

Cd & Cd::operator=(const Cd & d)
{
    if (this == &d)
        return *this;
    delete [] performers;
    performers = new char[strlen(d.performers) + 1];
    strcpy(performers, d.performers);
    delete [] label;
    label = new char[strlen(d.label) + 1];
    strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
    return *this;
}

// Classic methods
Classic::Classic(const char * pri, const char * per, const char * l,
                 int n, double x) : Cd(per, l, n, x)
{
    primary = new char[strlen(pri)+1];
    strcpy(primary, pri);
}

Classic::Classic(const Cd & d, const char * pri) : Cd(d)
{
    primary = new char[strlen(pri)+1];
    strcpy(primary, pri);
}

Classic::Classic(const Classic & c) : Cd(c)
{
    primary = new char[strlen(c.primary)+1];
    strcpy(primary, c.primary);
}

Classic::Classic() : Cd()
{
    primary = new char[5];
    strcpy(primary, "None");
}

Classic::~Classic()
{
    delete [] primary;
}

void Classic::Report() const
{
    cout << "Primary work: " << primary << endl;
    Cd::Report();
}

Classic & Classic::operator=(const Classic & d)
{
    if (this == &d)
        return *this;
    Cd::operator=(d);
    delete [] primary;
    primary = new char[strlen(d.primary)+1];
    strcpy(primary, d.primary);
    return *this;
}
