// Write a short program that asks for your height in integer inches and
// then converts your height to feet and inches. Have the program use the
// underscore character to indicate where to type the response. Also use a
// const symbolic constant to represent the conversion factor.
#include <iostream>

int main()
{
    using namespace std;

    const int Inch_to_feet = 12;
    int height;
    cout << "Please enter your height in inches: __\b\b";
    cin >> height;
    int feet, inches;
    feet = height / Inch_to_feet;
    inches = height % Inch_to_feet;
    cout << height << " inches is ";
    cout << feet << " feet, " << inches << " inches." << endl;
    return 0;
}
