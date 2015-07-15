#include <iostream>
#include "complex0.h"

complex::complex()
{
    real = imag = 0.0;
}

complex::complex(double r, double i)
{
    real = r;
    imag = i;
}

complex complex::operator+(const complex & c) const
{
    complex sum;
    sum.real = real + c.real;
    sum.imag = imag + c.imag;
    return sum;
}

complex complex::operator-(const complex & c) const
{
    complex diff;
    diff.real = real - c.real;
    diff.imag = imag - c.imag;
    return diff;
}

complex complex::operator*(double x) const
{
    complex result;
    result.real = real * x;
    result.imag = imag * x;
    return result;
}

complex complex::operator*(const complex & c) const
{
    complex result;
    result.real = real * c.real - imag * c.imag;
    result.imag = real * c.imag + imag * c.real;
    return result;
}

complex complex::operator~() const
{
    return complex(real, -imag);
}

std::istream & operator>>(std::istream & is, complex & c)
{
    std::cout << "real: ";
    if (is >> c.real)
    {
        std::cout << "imaginary: ";
        is >> c.imag;
    }
    return is;
}

std::ostream & operator<<(std::ostream & os, const complex & c)
{
    os << "(" << c.real << "," << c.imag << "i)";
    return os;
}
