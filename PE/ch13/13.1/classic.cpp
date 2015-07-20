#include <iostream>
#include <cstring>
#include "classic.h"
using namespace std;

// Cd methods
Cd::Cd(const char * s1, const char * s2, int n, double x)
{
    strcpy(performers, s1);
    strcpy(label, s2);
    selections = n;
    playtime = x;
}

Cd::Cd(const Cd & d)
{
    strcpy(performers, d.performers);
    strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
}

Cd::Cd()
{
    strcpy(performers, "Unknown");
    strcpy(label, "None");
    selections = 0;
    playtime = 0.0;
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
    strcpy(performers, d.performers);
    strcpy(label, d.performers);
    selections = d.selections;
    playtime = d.playtime;
    return *this;
}

// classic methods
Classic::Classic(const char * pri, const char * per, const char * l,
                 int n, double x) : Cd(per, l, n, x)
{
    strcpy(primary, pri);
}

Classic::Classic(const Cd & d, const char * pri) : Cd(d)
{
    strcpy(primary, pri);
}

Classic::Classic(const Classic & c) : Cd(c)
{
    strcpy(primary, c.primary);
}

Classic::Classic() : Cd()
{
    strcpy(primary, "None");
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
    strcpy(primary, d.primary);
    return *this;
}
