#include <iostream>
#include "sales.h"
namespace SALES
{
    void setSales(Sales & s, const double ar[], int n)
    {
        for (int i = 0; i < 4; i++)
            s.sales[i] = 0;
        int count = n < 4 ? n : 4;
        double total = 0;
        s.max = s.min = s.sales[0];
        for (int i = 0; i < count; i++)
        {
            s.sales[i] = ar[i];
            total += s.sales[i];
            if (s.max < s.sales[i])
                s.max = s.sales[i];
            if (s.min > s.sales[i])
                s.min = s.sales[i];
        }
        s.average = total / count;
    }

    void setSales(Sales & s)
    {
        for (int i = 0; i < 4; i++)
        {
            std::cout << "Enter quater #" << i+1 << ": ";
            std::cin >> s.sales[i];
        }
        double total = 0;
        s.max = s.min = s.sales[0];
        for (int i = 0; i < 4; i++)
        {
            total += s.sales[i];
            if (s.max < s.sales[i])
                s.max = s.sales[i];
            if (s.min > s.sales[i])
                s.min = s.sales[i];
        }
        s.average = total / 4;
    }

    void showSales(const Sales & s)
    {
        for (int i = 0; s.sales[i] != 0 && i < 4; i++)
            std::cout << "Quarter #" << i+1 << ": " << s.sales[i] << std::endl;
        std::cout << "Average: " << s.average << std::endl;
        std::cout << "Maximum & Minimum: " << s.max << " " << s.min << std::endl;
    }
}
