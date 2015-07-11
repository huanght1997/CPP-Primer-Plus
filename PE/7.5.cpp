/*
 * Define a recursive function that takes an integer argument and returns
 * the factorial of that argument. Recall that 3 factorial, written 3!,
 * equals 3 * 2!, and so on, with 0! defined as 1. In general, if n is
 * greater than zero, n! = n * (n-1)!. Test your function in a program that
 * uses a loop to allow the user to enter various values for which the
 * program reports the factorial.
 */
#include <iostream>
long double factorial(int n);
int main()
{
    using namespace std;
    int n;
    cout << "Please enter an integer: ";
    while ((cin >> n) && n >= 0)
    {
        cout << n << "! = " << factorial(n) << endl;
        cout << "Next integer, q to quit: ";
    }
    cout << "Bye!\n";
    return 0;
}

long double factorial(int n)
{
    long double result;
    if (n == 0)
        result = 1.0;
    else
        result = n * factorial(n-1);
    return result;
}
