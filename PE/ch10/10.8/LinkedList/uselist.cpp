#include <iostream>
#include "list.h"
using namespace std;
void display(Item &);
void triple(Item &);
int main()
{
    List numbers;
    cout << "Enter at most 10 numbers, q to quit:\n";
    double num;
    while (cin >> num && !numbers.isFull())
        numbers.add(num);
    cout << "Your input: " << endl;
    numbers.visit(display);
    numbers.visit(triple);
    cout << "After triple: " << endl;
    numbers.visit(display);
    return 0;
}
void display(Item & data)
{
    cout << data << endl;
}
void triple(Item & data)
{
    data *= 3;
}
