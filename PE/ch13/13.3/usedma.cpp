#include <iostream>
#include "dma.h"
const int THINGS = 4;

int main()
{
    using namespace std;

    DMA * p_things[THINGS];
    char temp[80];
    int trate;
    char kind;

    for (int i = 0; i < THINGS; i++)
    {
        cout << "Enter the label: ";
        cin.getline(temp, 80);
        cout << "Enter the rate: ";
        cin >> trate;
        cout << "Enter 1 for baseDMA, 2 for lacksDMA, 3 for hasDMA: ";
        while (cin >> kind && (kind < '1' || kind > '3'))
            cout << "Please enter 1, 2, or 3: ";
        cin.get();
        if (kind == '1')
            p_things[i] = new baseDMA(temp, trate);
        else if (kind == '2')
        {
            char tcolor[40];
            cout << "Enter the color: ";
            cin.getline(tcolor, 40);
            p_things[i] = new lacksDMA(tcolor, temp, trate);
        }
        else
        {
            char tstyle[80];
            cout << "Enter the style: ";
            cin.getline(tstyle, 80);
            p_things[i] = new hasDMA(tstyle, temp, trate);
        }
    }
    cout << endl;
    for (int i = 0; i < THINGS; i++)
    {
        p_things[i]->View();
        cout << endl;
    }

    for (int i = 0; i < THINGS; i++)
    {
        delete p_things[i];
    }
    cout << "Done.\n";
    return 0;
}
