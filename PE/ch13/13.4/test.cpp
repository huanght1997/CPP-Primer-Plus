#include <iostream>
#include "port.h"
using namespace std;
int main()
{
    Port gallo("Gallo", "tawny", 20);
    gallo.Show();
    gallo += 30;
    gallo.Show();
    gallo -= 5;
    gallo.Show();
    cout << gallo << endl;
    Port foo;
    foo = gallo;
    foo.Show();

    VintagePort lafi("Lafite", 45, "The Noble", 1982);
    lafi.Show();
    lafi -= 10;
    lafi.Show();
    lafi += 5;
    lafi.Show();
    cout << lafi << endl;
    VintagePort bar;
    bar = lafi;
    bar.Show();

    return 0;
}
