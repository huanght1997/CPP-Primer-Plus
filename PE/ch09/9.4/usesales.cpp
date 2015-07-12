/* 
 * Write a three-file program based on the following namespace:
 * (in sales.h)
 * The first file should be a header file that contains the namespace. The
 * second file should be a source code file that extends the namespace to
 * provide definitions for the three prototyped functions. The third file 
 * should declare two Sales objects. It should use the interactive version
 * of setSales() to provide values for one structure and the non-interactive
 * version of setSales() to provide values for the second structure. It
 * should display the contents of both structures by using showSales().
 */
#include <iostream>
#include "sales.h"
int main()
{
    using namespace SALES;
    Sales sale[2];
    setSales(sale[0]);
    double ar[4] = {34.5, 45.6, 56.7, 67.8};
    setSales(sale[1], ar, 4);
    for (int i = 0; i < 2; i++)
        showSales(sale[i]);
    return 0;
}
