/*
 * Write a program that asks you to enter an automobile gasoline consumption
 * figure in the European style (liters per 100 kilometers) and converts to
 * the U.S. style of miles per gallon. Note that in addition to using
 * different units of measurement, the U.S. approach (distance / fuel) is
 * the inverse of the European approach (fuel / distance). Note that 100
 * kilometers is 62.14 miles, and 1 gallon is 3.875 liters. Thus, 19 mpg is
 * about 12.4 L/100km, and 27 mpg is about 8.7 L/100km.
 */
#include <iostream>

int main()
{
    using namespace std;
    double mpg, lphkm; // lphkm means Liters Per Hundred KiloMeters
    const double Miles_per_100_km = 62.14;
    const double Liters_per_gallon = 3.875;

    cout << "Enter the automobile gasoline consumption figure"
         << " in L/100km: ";
    cin >> lphkm;
    mpg = 1 / (lphkm / Liters_per_gallon / Miles_per_100_km);
    cout << lphkm << " L/100km = " << mpg << " mpg." << endl;
    return 0;
}

