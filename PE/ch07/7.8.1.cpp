/*
 * Redo Listing 7.15 without using the array class. Do two versions:
 * a. Use an ordinary array of const char * for the strings representing
 * the season names, and use an ordinary array of double for the expenses.
 * b. Use an ordinary array of const char * for the strings representing
 * the season names, and use a structure whose sole number is an ordinary
 * array of double for the expenses. (This design is similar to the basic
 * design of the array class.)
 */
#include <iostream>
// constant data
const int Seasons = 4;
const char * Snames[Seasons] =
    {"Spring", "Summer", "Fall", "Winter"};

void fill(double []);
void show(const double []);

int main()
{
    double expenses[Seasons];
    fill(expenses);
    show(expenses);
    return 0;
}

void fill(double a[])
{
    using namespace std;
    for (int i = 0; i < Seasons; i++)
    {
        cout << "Enter " << Snames[i] << " expenses: ";
        cin >> a[i];
    }
}

void show(const double a[])
{
    using namespace std;
    double total = 0.0;
    cout << "\nEXPENSES\n";
    for (int i = 0; i < Seasons; i++)
    {
        cout << Snames[i] << ": $" << a[i] << endl;
        total += a[i];
    }
    cout << "Total Expenses: $" << total << endl;
}
