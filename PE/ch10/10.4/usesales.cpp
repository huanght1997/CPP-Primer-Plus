/*
 * Do Programming Exercise 4 from Chapter 9 but convert the Sales structure
 * and its associated functions to a class and its methods. Replace the
 * setSales(Sales &, double [], int) function with a constructor. Implement
 * the interactive setSales(Sales &) method by using the constructor. Keep
 * the class within the namespace SALES.
 */
#include <iostream>
#include "sales.h"
int main()
{
    using namespace SALES;
    Sales sale[2];
    sale[0].setSales();
    double ar[4] = {34.5, 45.6, 56.7, 67.8};
    sale[1] = Sales(ar, 4);
    for (int i = 0; i < 2; i++)
        sale[i].showSales();
    return 0;
}
