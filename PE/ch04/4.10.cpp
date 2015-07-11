/*
 * Write a program that requests the user to enter three times for the
 * 40-yd dash (or 40-meter, if you prefer) and then displays the times and
 * the average. Use an array object to hold the data. (Use a built-in array
 * if array is not available.)
 */
#include <iostream>
#include <array>
int main()
{
    using namespace std;
    array<double, 3> time;
    // if your compiler doesn't support C++11, use double time[3];
    cout << "Please enter the first time for the 40-yd dash: ";
    cin >> time[0];
    cout << "Please enter the second time for the 40-yd dash: ";
    cin >> time[1];
    cout << "Please enter the third time for the 40-yd dash: ";
    cin >> time[2];

    double average = (time[0] + time[1] + time[2]) / 3;

    cout << "The 1st: " << time[0] << " s\n";
    cout << "The 2nd: " << time[1] << " s\n";
    cout << "The 3rd: " << time[2] << " s\n";
    cout << "The average: " << average << " s\n";
    return 0;
}
