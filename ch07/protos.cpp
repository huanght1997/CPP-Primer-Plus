// protos.cpp -- using prototypes and function calls
#include <iostream>
void cheers(int);       // prototype: no return value
double cube(double x);  // prototype: returns a double
int main()
{
    using namespace std;
    cheers(5);          // function call
    double side;
    cin >> side;
    double volume = cube(side);     // function call
    cout << "A " << side << " foot cube has a volume of ";
    cout << volume << " cubic feet.\n";
    cheers(cube(2));    // prptotype protection at work
    return 0;
}

void cheers(int n)
{
    using namespace std;
    for (int i = 0; i < n; i++)
        cout << "Cheers! ";
    cout << endl;
}

double cube(double x)
{
    return x * x * x;
}
