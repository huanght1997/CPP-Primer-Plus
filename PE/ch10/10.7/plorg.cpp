#include <iostream>
#include <cstring>
#include "plorg.h"
Plorg::Plorg(const char * star_name)
{
    strcpy(name, star_name);
    ci = 50;
}

void Plorg::setCI(int star_ci)
{
    ci = star_ci;
}

void Plorg::report() const
{
    std::cout << "Name: " << name << " " << "CI: " << ci << std::endl;
}
