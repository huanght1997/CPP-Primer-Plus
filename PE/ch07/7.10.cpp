/*
 * Design a function calculation() that takes two type double values and a
 * pointer to a function that takes two double arguments and returns a
 * double. The calculate() function should also be type double, and it
 * should return the value that the pointed-to function calculates, using
 * the double arguments to calculates(). For example, suppose you have this
 * definition for the add() function:
 * double add(double x, double y)
 * {
 *      return x + y;
 * }
 * Then, the function call in the following would cause calculate() to pass
 * the values 2.5 and 10.4 to the add() function and then return the add()
 * return value (12.9):
 * double q = calculate(2.5, 10.4, add);
 * Use this functions and at least one additional function in the add() mold
 * in a program. The program should use a loop that allows the user to enter
 * pairs of numbers. For each pair, use calculate() to invoke add() and at
 * least one other function. If you are feeling adventurous, try creating an
 * array of pointers to add()-style functions and use a loop to successively
 * apply calculate() to a series of functions by using these pointers. Hint:
 * Here's how to declare such an array of three pointers:
 * double (*pf[3])(double, double);
 * You can initialize such an array by using the usual array initialization
 * syntax and function names as addresses.
 */
#include <iostream>
double add(double x, double y);
double subtract(double x, double y);
double multiply(double x, double y);
double max(double x, double y);
double calculate(double x, double y, double (*pf)(double, double));
int main()
{
    using namespace std;
    double x, y;
    cout << "Enter two numbers, q to quit: ";
    double (*pf[4])(double, double) = {add, subtract, multiply, max};
    while (cin >> x >> y)
    {
        cout << "The results are the sum, difference, product, maximum\n"
                "of the two numbers respectively.\n";
        for (int i = 0; i < 4; i++)
        {
            double result = calculate(x, y, pf[i]);
            cout << result << " ";
        }
        cout << endl;
        cout << "Another pair: ";
    }
    cout << "bye.\n";
    return 0;
}
double add(double x, double y)
{
    return x+y;
}
double subtract(double x, double y)
{
    return x-y;
}
double multiply(double x, double y)
{
    return x*y;
}
double max(double x, double y)
{
    return x>y?x:y;
}
double calculate(double x, double y, double (*pf)(double, double))
{
    return (*pf)(x,y);
}
