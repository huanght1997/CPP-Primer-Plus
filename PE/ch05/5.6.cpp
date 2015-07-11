/*
 * Do Programming Exercise 5 but use a two-dimensional array to store input
 * for 3 years of monthly sales. Report the total sales for each individual
 * year and for the combined years.
 */
#include <iostream>
int main()
{
    using namespace std;
    const char * months[12] = {"January", "February", "March", "April",
                               "May", "June", "July", "August", "September",
                               "October", "November", "December"};
    int sales[3][12];
    int total[3] = {};
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 12; j++)
        {
            cout << "Enter the sales in " << months[j] << " of year "
                 << i+1 << ": ";
            cin >> sales[i][j];
            total[i] += sales[i][j];
        }

    int alltotal = 0;
    for (int i = 0; i < 3; i++)
    {
        cout << "The total sales for the year " << i+1
             << " is " << total[i] << ".\n";
        alltotal += total[i];
    }
    cout << "The total sales for the combined years is " << alltotal
         << ".\n";
    return 0;
}
