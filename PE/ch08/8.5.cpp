/*
 * Write a template function max5() that takes as its argument an array of 
 * five items of type T and returns the largest item in the array. (Because
 * the size is fixed, it can be hard-coded into the loop instead of being
 * passed as an argument.) Test it in a program that uses the function with
 * an array of five int value and an value of five double values.
 */
#include <iostream>
template <typename T>
T max5(T arr[]);

int main(void)
{
    using namespace std;
    int arr_int[5] = {73, 59, 88, 11, 95};
    double arr_dbl[5] = {48.02, 15.78, 10.65, 51.52, 17.21};
    cout << "The maximum of arr_int[5]: " << max5(arr_int) << endl;
    cout << "The maximum of arr_dbl[5]: " << max5(arr_dbl) << endl;
    return 0;
}

template <typename T>
T max5(T arr[])
{
    T tmax = arr[0];
    for (int i = 1; i < 5; i++)
    {
        if (arr[i] > tmax)
            tmax = arr[i];
    }
    return tmax;
}
