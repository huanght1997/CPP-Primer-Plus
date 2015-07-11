/*
 * Write a program that asks how many miles you have driven and how many
 * gallons of gasoline you have used and then reports the miles per gallon
 * your car has gotten. Or, if you prefer, the program can request distance
 * in kilometers and petrol in liters and then report the result European
 * style, in liters per 100 kilometers.
 */
#include <iostream>
#define US
//#undef US
int main()
{
    using namespace std;
#ifdef US
    double mile, gallon;
    cout << "Enter how many miles you have driven: ";
    cin >> mile;
    cout << "Enter how many gallons of gasoline you have used: ";
    cin >> gallon;
    cout << "Your car has gotten " << mile / gallon << " miles per gallon."
         << endl;
#else
    double km, liter;
    cout << "Enter how many kilometers you have driven: ";
    cin >> km;
    cout << "Enter how many liters of petrol you have used: ";
    cin >> liter;
    cout << "Your car has gotten " << liter / (km / 100)
         << " liters per 100 kilometers." << endl;
#endif
    return 0;
}
