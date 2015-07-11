/*
 * Write a program that asks the user to enter the number of seconds as an
 * integer value (use type long, or, if available, long long) and that then
 * displays the equivalent time in days, hours, minutes, and seconds. Use
 * symbolic constants to represent the number of hours in the day, the
 * number of minutes in an hour, and the number of seconds in a minute. The
 * output should look like this:
 * Enter the number of seconds: 31600000
 * 31600000 seconds = 365 days, 17 hours, 46 minutes, 40 seconds
 */
#include <iostream>

int main()
{
    using namespace std;
    const int Hours_per_day = 24;
    const int Minutes_per_hour = 60;
    const int Seconds_per_minute = 60;

    long seconds;
    cout << "Enter the number of seconds: ";
    cin >> seconds;

    int day, hour, min, sec;
    sec = seconds % Seconds_per_minute;
    min = ((seconds - sec) / Seconds_per_minute) % Minutes_per_hour;
    hour = (seconds - sec - min * Seconds_per_minute) / (Seconds_per_minute
           * Minutes_per_hour) % Hours_per_day;
    day = seconds / (Seconds_per_minute * Minutes_per_hour * Hours_per_day);

    cout << seconds << " seconds = " << day << " days, "
         << hour << " hours, " << min << " minutes, "
         << sec << " seconds." << endl;

    return 0;
}
