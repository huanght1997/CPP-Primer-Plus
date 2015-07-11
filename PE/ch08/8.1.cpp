/*
 * Write a function that normally takes one argument, the address of a
 * string, and prints that string once. However, if a second, type int,
 * argument is provided and is nonzero, the function should should print the
 * string a number of times equal to the number of times that function has
 * been called at that point. (Note that the number of times the string is
 * printed is not equal to the value of the second argument, it is equal to
 * the number of times the function has been called.) Yes, this is a silly
 * function, but it makes you use some of the techniques discussed in this
 * chapter. Use the function in a simple program that demonstrates how the
 * function works.
 */
#include <iostream>
using namespace std;
void func(char * str, int n = 0);
int count = 0;
int main()
{
    char str[20] = "Have a test!";
    int times;
    cout << "How many times do you want to call func(str)? ";
    cin >> times;
    for (int i = 0; i < times; i++)
        func(str);
    
    cout << "Now call func(str, 1)\n";
    func(str, 1);
    return 0;
}

void func(char * str, int n)
{
    count++;
    if (n == 0)
        cout << str << endl;
    else
        for (int i = 0; i < count; i++)
            cout << str << endl;
}
