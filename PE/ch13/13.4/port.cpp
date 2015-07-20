#include "port.h"
#include <cstring>
using namespace std;

// Task 1: Re-create the Port method.
Port::Port(const char * br, const char * st, int b)
{
    brand = new char[strlen(br)+1];
    strcpy(brand, br);
    strcpy(style, st);
    bottles = b;
}

Port::Port(const Port & p)
{
    brand = new char[strlen(p.brand)+1];
    strcpy(brand, p.brand);
    strcpy(style, p.style);
    bottles = p.bottles;
}

Port & Port::operator=(const Port & p)
{
    if (this == &p)
        return *this;
    delete [] brand;
    brand = new char[strlen(p.brand)+1];
    strcpy(brand, p.brand);
    strcpy(style, p.style);
    bottles = p.bottles;
    return *this;
}

Port & Port::operator+=(int b)
{
    if (b < 0)
        cout << "Negative number not allowed. Aborted.\n";
    else
        bottles += b;
    return *this;
}

Port & Port::operator-=(int b)
{
    if (b < 0)
        cout << "Negative number not allowed. Aborted.\n";
    else if (bottles - b < 0)
        cout << "No enough bottles. Aborted.\n";
    else
        bottles -= b;
    return *this;
}

void Port::Show() const
{
    cout << "Brand: " << brand << endl;
    cout << "Kind: " << style << endl;
    cout << "Bottles: " << bottles << endl;
}

ostream & operator<<(ostream & os, const Port & p)
{
    os << p.brand << ", " << p.style << ", " << p.bottles;
    return os;
}

// Task 1 finished.

// Task 2:
// We must redefine the operator=(), Show() and operator<<() method,
// because there are more members in VintagePort class, and they must handle
// these members.
// But no need to redefine operator+=(), operator-=(), because they have
// the same behaviors in VintagePort class compared with themselves in Port
// class.

// Task 3:
// The functions operator=() in class Port and class VintagePort have
// different arguments(one is Port& and the other is VintagePort&, so
// operator=() can't be virtual.
// The function operator<< is a friend function, so it can't be virtual.

// Task 4: Provide definitions for the VintagePort methods.
VintagePort::VintagePort() : Port("none", "vintage")
{
    nickname = new char[5];
    strcpy(nickname, "none");
    year = 0;
}

VintagePort::VintagePort(const char * br, int b, const char * nn, int y)
            : Port(br, "vintage", b)
{
    nickname = new char[strlen(nn)+1];
    strcpy(nickname, nn);
    year = y;
}

VintagePort::VintagePort(const VintagePort & vp)
            : Port(vp)
{
    nickname = new char[strlen(vp.nickname)+1];
    strcpy(nickname, vp.nickname);
    year = vp.year;
}

VintagePort & VintagePort::operator=(const VintagePort & vp)
{
    if (this == &vp)
        return *this;
    Port::operator=(vp);
    delete [] nickname;
    nickname = new char[strlen(vp.nickname)+1];
    strcpy(nickname, vp.nickname);
    year = vp.year;
    return *this;
}

void VintagePort::Show() const
{
    Port::Show();
    cout << "Nickname: " << nickname << endl;
    cout << "Year: " << year << endl;
}

ostream & operator<<(ostream & os, const VintagePort & vp)
{
    os << (const Port &) vp;
    os << ", " << vp.nickname << ", " << vp.year;
    return os;
}
