/*
 * Write a program asks the user to enter a latitude in degrees, minutes,
 * and seconds and that then displays the latitude in decimal format. There
 * are 60 seconds of arc to a minute and 60 minutes of arc to a degree;
 * represent these values with symbolic constants. You should use a separate
 * variable for each input value. A sample run should look like this:
 * Enter a latitude in degrees, minutes, and seconds:
 * First, enter the degrees: 37
 * Next, enter the minutes of arc: 51
 * Finally, enter the seconds of arc: 19
 * 37 degrees, 51 minutes, 19 seconds = 37.8553 degrees
 */
#include <iostream>

int main()
{
    using namespace std;
    
    const double Minutes_per_degree = 60.0;
    const double Seconds_per_minute = 60.0;

    int deg, min, sec;
    cout << "Enter a latitude in degrees, minutes, and seconds:" << endl;
    cout << "First, enter the degrees: ";
    cin >> deg;
    cout << "Next, enter the minutes of arc: ";
    cin >> min;
    cout << "Finally, enter the seconds of arc: ";
    cin >> sec;

    double latitude;
    latitude = deg + min / Minutes_per_degree
               + sec / Seconds_per_minute / Minutes_per_degree;

    cout << deg << " degrees, " << min << " minutes, "
         << sec << " seconds = " << latitude << " degrees" << endl;

    return 0;
}
