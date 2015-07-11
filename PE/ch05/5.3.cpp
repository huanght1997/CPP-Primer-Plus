/*
 * Write a program that asks the user to type in numbers. After each entry,
 * the program should report the cumulative sum of the entries to date. The
 * program should terminate when the user enters 0.
 */
#include <iostream>
int main()
{
    using namespace std;
    double input;
    double sum = 0.0;
    cout << "Please enter a number, 0 to quit: ";
    cin >> input;
    while (input != 0.0)
    {
        sum += input;
        cout << "The cumulative sum of the entries to date is ";
        cout << sum << endl;
        cout << "Continue entering numbers: ";
        cin >> input;
    }
    cout << "Done.\n";
    return 0;
}
