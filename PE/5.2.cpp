/*
 * Redo Listing 5.4 using a type array object instead of a buit-in array
 * and type long double instead of long long. Find the value of 100!
 */
#include <iostream>
#include <array>
const int ArSize = 101;      // example of external declaration
int main()
{
    using namespace std;
    array<long double, ArSize> factorials;
    factorials[1] = factorials[0] = 1;
    for (int i = 2; i < ArSize; i++)
        factorials[i] = i * factorials[i-1];
    for (int i = 0; i < ArSize; i++)
        cout << i << "! = " << factorials[i] << endl;
    return 0;
}
