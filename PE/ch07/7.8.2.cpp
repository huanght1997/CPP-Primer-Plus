// Program Exercise 8 in Unit 7, and this is the method B.
#include <iostream>
// constant data
const int Seasons = 4;
const char * Snames[Seasons] =
    {"Spring", "Summer", "Fall", "Winter"};
struct array
{
    double a[Seasons];
};

void fill(array * pa);
void show(array da);

int main()
{
    array expenses;
    fill(&expenses);
    show(expenses);
    return 0;
}

void fill(array * pa)
{
    using namespace std;
    for (int i = 0; i < Seasons; i++)
    {
        cout << "Enter " << Snames[i] << " expenses: ";
        cin >> pa->a[i];
    }
}

void show(array da)
{
    using namespace std;
    double total = 0.0;
    cout << "\nEXPENSES\n";
    for (int i = 0; i < Seasons; i++)
    {
        cout << Snames[i] << ": $" << da.a[i] << endl;
        total += da.a[i];
    }
    cout << "Total expenses: $" << total << endl;
}
