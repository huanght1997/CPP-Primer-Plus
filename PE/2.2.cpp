// Write a C++ program that asks for a distance in furlongs and converts it
// to yards. (One furlong is 220 yards.)
#include <iostream>

int main()
{
    using namespace std;
    int furlong, yard;

    cout << "Enter a distance in furlongs: ";
    cin >> furlong;
    yard = furlong * 220;
    cout << furlong << " furlong = " << yard << " yards." << endl;
    return 0;
}
