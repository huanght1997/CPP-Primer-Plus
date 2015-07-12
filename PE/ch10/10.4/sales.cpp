#include <iostream>
#include "sales.h"
namespace SALES
{
    Sales::Sales()
    {
        for (int i = 0; i < QUATERS; i++)
            sales[i] = 0.0;
        average=max=min=0.0;
    }

    Sales::Sales(const double ar[], int n)
    {
        for (int i = 0; i < QUATERS; i++)
            sales[i] = 0.0;
        int count = n < 4 ? n : 4;
        double total = 0.0;
        max = min = sales[0];
        for (int i = 0; i < count; i++)
        {
            sales[i] = ar[i];
            total += sales[i];
            if (max < sales[i])
                max = sales[i];
            if (min > sales[i])
                min = sales[i];
        }
        average = total / count;
    }

    void Sales::setSales()
    {
        double temp[QUATERS];
        for (int i = 0; i < QUATERS; i++)
        {
            std::cout << "Enter quater #" << i+1 << ": ";
            std::cin >> temp[i];
        }
        *this = Sales(temp, QUATERS);
    }

    void Sales::showSales() const
    {
        for (int i = 0; sales[i] != 0.0 && i < 4; i++)
            std::cout << "Quater #" << i+1 << ": " << sales[i] << std::endl;
        std::cout << "Average: " << average << std::endl;
        std::cout << "Maximum & Minimum: " << max << " " << min <<std::endl;
    }
}
