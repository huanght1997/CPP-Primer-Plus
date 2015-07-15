/*
 * Modify Listing 11.15 so that it writes the successive locations of
 * the random walker into a file. Label each position with the step number.
 * Also have the program write the initial conditions (target distance and
 * step size) and the summarized results to the file. The file contents
 * might look like this:
 * Target Distance: 100, Step Size: 20
 * 0: (x,y) = (0,0)
 * 1: (x,y) = (-11.4715, 16.383)
 * 2: (x,y) = (-8.68807, -3.42232)
 * ...
 * 26: (x,y) = (42.2919, -78.2594)
 * 27: (x,y) = (58.6749, -89.7309)
 * After 27 steps, the subject has the following location:
 * (x,y) = (58.6749, -89.7309)
 *  or
 * (m,a) = (107.212, -56.8194)
 * Average outward distance per step = 3.97081
 */
#include <iostream>
#include <fstream>
#include <cstdlib>              // rand(), srand() prototypes
#include <ctime>                // time() prorotype
#include "vect.h"
int main()
{
    using namespace std;
    using VECTOR::Vector;
    srand(time(0));             // seed random number generator
    double direction;
    Vector step;
    Vector result;
    unsigned long steps = 0;
    double target;
    double dstep;
    ofstream outFile;
    outFile.open("steps.txt");
    if (!outFile.is_open())
    {
        cout << "Cannot open files! Program terminated.\n";
        exit(0);
    }
    cout << "Enter target distance (q to quit): ";
    while (cin >> target)
    {
        cout << "Enter step length: ";
        if (!(cin >> dstep))
            break;
        outFile << "Target Distance: " << target << ", ";
        outFile << "Step Size: " << dstep << endl;
        while (result.magval() < target)
        {
            outFile << steps << ": " << result << endl;
            direction = rand() % 360;
            step.reset(dstep, direction, Vector::POL);
            result = result + step;
            steps++;
        }
        outFile << steps << ": " << result << endl;
        cout << "After " << steps << " steps, the subject "
            "has the following location:\n";
        outFile << "After " << steps << " steps, the subject "
            "has the following location:\n";
        cout << result << endl;
        outFile << result << endl;
        result.polar_mode();
        cout << "or\n" << result << endl;
        outFile << "or\n" << result << endl;
        cout << "Average outward distance per step = "
            << result.magval()/steps << endl;
        outFile << "Average outward distance per step = "
            << result.magval()/steps << endl;
        steps = 0;
        result.reset(0.0, 0.0);
        cout << "Enter target distance (q to quit): ";
    }
    cout << "Bye!\n";
    cin.clear();
    while (cin.get() != '\n')
        continue;
    outFile.close();
    return 0;
}
