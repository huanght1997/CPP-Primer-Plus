/* 
 * Write a short program that asks for your height in feet and inches and
 * your weight in pounds. (Use three variables to store the information.)
 * Have the program report your body mass index (BMI). To calculate BMI,
 * first convert your height in feet and inches to your height in inches
 * (1 foot = 12 inches). Then convert your height in inches to your height
 * in meters by multiplying by 0.0254. The convert your weight in pounds
 * into your mass in kilograms by dividing by 2.2. Finally, compute your BMI
 * by dividing your mass in kilograms by the square of your height in
 * meters. Use symbolic constants to represent the various conversion
 * factors.
 */
#include <iostream>

int main()
{
    using namespace std;

    const int Feet_to_inches = 12;
    const double Inches_to_meters = 0.0254;
    const double Kg_to_pounds = 2.2;

    int feet, inches;
    cout << "Enter your height in feet and inches:\n";
    cout << "Feet: ";
    cin >> feet;
    cout << "Inches: ";
    cin >> inches;
    double meters = (inches + feet * Feet_to_inches) * Inches_to_meters;

    int pounds;
    cout << "Enter your weight in pounds: ";
    cin >> pounds;
    double kg = pounds / Kg_to_pounds;

    double bmi = kg / (meters * meters);

    cout << "Your BMI is " << bmi << endl;
    return 0;
}
