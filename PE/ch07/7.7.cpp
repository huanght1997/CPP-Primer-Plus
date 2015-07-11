/*
 * Redo Listing 7.7, modifying the three array-handling functions to each
 * use two pointer parameters to represent a range. The fill_array()
 * function, instead of returning the actual number of items read, should
 * return a pointer to the location after the last location filled; the
 * other functions can use this pointer as the second argument to identify
 * the end of data.
 */
#include <iostream>
const int Max = 5;
// function prototypes
double * fill_array(double * begin, double * end);
void show_array(const double * begin, const double * end);
void revalue(double r, double * begin, double * end);

int main()
{
    using namespace std;
    double properties[Max];

    double * end = fill_array(properties, properties + Max);
    show_array(properties, end);
    if (end != properties)
    {
        cout << "Enter revaluation factor: ";
        double factor;
        while (!(cin >> factor))    // bad input
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Bad input; Please enter a number: ";
        }
        revalue(factor, properties, end);
        show_array(properties, end);
    }
    cout << "Done.\n";
    cin.get();
    cin.get();
    return 0;
}

double * fill_array(double * begin, double * end)
{
    using namespace std;
    double temp;
    double * present = begin;
    for (int i = 0; present != end; present++, i++)
    {
        cout << "Enter value #" << (i+1) << ": ";
        cin >> temp;
        if (!cin)   // bad input
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Bad input; input process terminated.\n";
            break;
        }
        else if (temp < 0)  // signal to terminate
            break;
        *present = temp;
    }
    return present;
}

void show_array(const double * begin, const double * end)
{
    using namespace std;
    for (int i = 0; begin != end; begin++, i++)
    {
        cout << "Property #" << (i+1) << ": $";
        cout << *begin << endl;
    }
}

void revalue(double r, double * begin, double * end)
{
    for (; begin != end; begin++)
        *begin *= r;
}
