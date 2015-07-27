/*
 * This exercise is the same as Programming Exercise 2, except that the
 * exceptions should be derived from a base class (itself derived from
 * logic_error) that stores the two argument values, the exception should
 * have a method that reports these values as well as the function name, and
 * a single catch block that catches the base-class exemption should be used
 * for both exceptions, with either exception causing the loop to terminate.
 */
#include <iostream>
#include <cmath>
#include "exc_mean.h"
double hmean(double a, double b);
double gmean(double a, double b);
int main()
{
    using std::cout;
    using std::cin;
    using std::endl;

    double x, y;
    cout << "Enter two numbers: ";
    while (cin >> x >> y)
    {
        try {
            cout << "Harmonic mean of " << x << " and " << y
                << " is " << hmean(x,y) << endl;
            cout << "Geometric mean of " << x << " and " << y
                << " is " << gmean(x,y) << endl;
            cout << "Enter next set of numbers<q to quit>: ";
        }
        catch (bad_mean & bm)
        {
            bm.report_bad();
            cout << "Sorry, you don't get to play any more.\n";
            break;
        }
    }
    cout << "Bye!\n";
    return 0;
}

double hmean(double a, double b)
{
    if (a == -b)
        throw bad_hmean(a,b);
    return 2.0 * a * b / (a + b);
}

double gmean(double a, double b)
{
    if (a < 0 || b < 0)
        throw bad_gmean(a,b);
    return std::sqrt(a * b);
}
