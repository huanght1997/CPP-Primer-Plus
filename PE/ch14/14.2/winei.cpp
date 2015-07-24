#include <iostream>
#include "winei.h"

using std::cin;
using std::cout;
using std::cerr;
using std::endl;
using std::string;

Wine::Wine(const char * l, int y, const int yr[], const int bot[])
    : string(l), years(y), PairArray(ArrayInt(yr,y),ArrayInt(bot,y))
{
}

Wine::Wine(const char * l, const ArrayInt & yr, const ArrayInt & bot)
    : string(l), years(yr.size()), PairArray(ArrayInt(yr), ArrayInt(yr))
{
    if (yr.size() != bot.size())
    {
        cerr << "Year data, bottle data mismatch! Array set to 0 size.\n";
        years = 0;
        PairArray::operator=(PairArray(ArrayInt(),ArrayInt()));
    }
    else
    {
        PairArray::first() = yr;
        PairArray::second() = bot;
    }
}

Wine::Wine(const char * l, const PairArray & yr_bot)
    : string(l), years(yr_bot.first().size()), PairArray(yr_bot)
{
}

Wine::Wine(const char * l, int y) : string(l), years(y),
    PairArray(ArrayInt(0,y),ArrayInt(0,y))
{
}

void Wine::GetBottles()
{
    if (years < 1)
    {
        cout << "No space to get data\n";
        return;
    }

    cout << "Enter " << Label() <<
            " data for " << years << " year(s):\n";
    for (int i = 0; i < years; i++)
    {
        cout << "Enter year: ";
        cin >> PairArray::first()[i];
        cout << "Enter bottles for that year: ";
        cin >> PairArray::second()[i];
    }
}

void Wine::Show() const
{
    cout << "Wine: " << Label() << endl;
    cout << "\tYear\tBottles\n";
    for (int i = 0; i < years; i++)
    {
        cout << "\t" << PairArray::first()[i];
        cout << "\t" << PairArray::second()[i] << endl;
    }
}

const string & Wine::Label() const
{
    return (const string &)(*this);
}

int Wine::sum() const
{
    return PairArray::second().sum();
}
