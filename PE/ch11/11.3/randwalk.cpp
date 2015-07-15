/*
 * Modify Listing 11.15 so that instead of reporting the results of a single
 * trial for a particular targer/step combination, it reports the highest,
 * lowest and average number of steps for N trials, where N is an integer
 * entered by the user.
 */
#include <iostream>
#include <cstdlib>          // rand(), srand() prototypes
#include <ctime>            // time() prototype
#include "vect.h"
int main()
{
    using namespace std;
    using VECTOR::Vector;
    srand(time(0));     // seed random number generator
    double direction;
    Vector step;
    Vector result;
    unsigned long steps = 0;
    unsigned int trials;
    double target;
    double dstep;
    cout << "Enter target distance (q to quit): ";
    while (cin >> target)
    {
        cout << "Enter step length: ";
        if (!(cin >> dstep))
            break;
        cout << "Enter the number of trials: ";
        if (!(cin >> trials))
            break;

        long maxstep, minstep, totstep;
        maxstep = totstep = 0L;
        for (int i = 0; i < trials; i++)
        {
            while (result.magval() < target)
            {
                direction = rand() % 360;
                step.reset(dstep, direction, Vector::POL);
                result = result + step;
                steps++;
            }
            if (i == 0)
                minstep = steps;
            if (steps > maxstep)
                maxstep = steps;
            if (steps < minstep)
                minstep = steps;
            totstep += steps;
            steps = 0;
            result.reset(0.0,0.0);
        }
        cout << trials << " trials finished.\n";
        cout << "The highest steps is " << maxstep << endl;
        cout << "The lowest steps is " << minstep << endl;
        cout << "The average steps is " << totstep / double(trials) << endl;
        cout << "Enter target distance (q to quit): ";
    }
    cout << "Bye!\n";
    cin.clear();
    while (cin.get() != '\n')
        continue;
    return 0;
}
