/*
 * Write a program that repeatedly asks the user to enter pairs of numbers
 * until at least one of the pair is 0. For each pair, the program should
 * use a function to calculate the harmonic mean of the numbers. The
 * function should return the answer to main(), which should report the
 * result. The harmonic mean of the numbers is the inverse of the average
 * of the inverses and can be calculated as follows:
 * harmonic mean = 2.0 * x * y / (x + y)
 */
#include <iostream>
double hmean(double, double);
int main()
{
    using namespace std;
    double num1, num2;
    cout << "Enter two numbers, enter 0 to quit: ";
    while (cin >> num1 >> num2 && num1 != 0 && num2 != 0)
    {
        double result = hmean(num1, num2);
        cout << "The harmonic mean of " << num1 << " and " << num2
             << " is " << result << endl;
        cout << "Enter next pair: ";
    }
    cout << "Bye!\n";
    return 0;
}
double hmean(double x, double y)
{
    return 2.0 * x * y / (x + y);
}
