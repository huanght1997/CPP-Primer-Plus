#ifndef COMPLEX0_H_
#define COMPLEX0_H_
#include <iostream>
class complex
{
    private:
        double real;
        double imag;
    public:
        complex();
        complex(double r, double i=0.0);
        complex operator+(const complex & c) const;
        complex operator-(const complex & c) const;
        complex operator*(double x) const;
        complex operator*(const complex & c) const;
        complex operator~() const;
        friend complex operator*(double x, const complex & c){return c*x;};
        friend std::istream & operator>>(std::istream & is, complex & c);
        friend std::ostream & operator<<(std::ostream & os, const complex & c);
};
#endif
