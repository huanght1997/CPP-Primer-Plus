// Write a program that has main() call a user-defined function that takes
// a Celsius temperature value as an argument and then returns the
// equivalent Fahrenheit value. The program should request the Celsius value
// as input from the user and display the result, as shown in the following
// code:
// Please enter a Celsius value: 20
// 20 degrees Celsius is 68 degrees Fahreheit.
// For reference, here is the formula for making the conversion:
// Fahrenheit = 1.8 * degrees Celsius + 32.0
#include <iostream>

double CtoF(double celsius);
int main()
{
    using namespace std;

    double celsius, fahrenheit;
    cout << "Please enter a Celsius value: ";
    cin >> celsius;
    fahrenheit = CtoF(celsius);
    cout << celsius << " degrees Celsius is "
         << fahrenheit << " degrees Fahrenheit." << endl;

    return 0;
}

double CtoF(double celsius)
{
    return 1.8 * celsius + 32.0;
}
