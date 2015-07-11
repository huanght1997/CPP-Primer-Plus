/*
 * Write a program that reads up to 10 donation value into an array of
 * double. (Or, if you prefer, use an array template object.) The program
 * should terminate input on non-numeric input. It should report the average
 * of the numbers and also report how many numbers in the array are larger
 * than the average.
 */
#include <iostream>
const int Max = 10;
int main()
{
    using namespace std;
    double donate[Max];
    int i = 0;
    double input;
    cout << "Enter donation values.\n";
    cout << "You may enter up to " << Max << " donation values ";
    cout << "<q to terminate>.\n";
    cout << "Donate #1: ";
    while (i < Max && cin >> donate[i])
    {
        if (++i < Max)
            cout << "Donate #" << i+1 << ": ";
    }

    double total = 0.0;
    for (int j = 0; j < i; j++)
        total += donate[j];

    double average = total / i;
    int count = 0;
    for (int j = 0; j < i; j++)
        if (donate[j] > average)
            count++;

    cout << "The average of the numbers is " << average << endl;
    cout << "There are " << count << " numbers larger than the average.\n";
    return 0;
}
