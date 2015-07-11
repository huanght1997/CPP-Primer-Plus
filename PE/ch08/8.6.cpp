/*
 * Write a template function maxn() that takes as its arguments an array of
 * items of type T and an integer representing the number of elements in
 * the array and that returns the largest item in the array.Test it in a
 * program that uses the function template with an array of six int value
 * and an array of four double values.The program should also include a
 * specialization that takes an array of pointers-to-char as an argument
 * and the number of pointers as a second argument and that returns the
 * address of the longest string. If multiple strings are tied for having
 * the longest length, the function should return the address of the first
 * one tied for longest. Test the specialization with an array of five
 * string pointers.
 */
#include <iostream>
#include <cstring>  // for strlen()
template <typename T>
T maxn(T arr[], int n);
template <> const char* maxn<const char *>(const char * arr[], int n);
int main()
{
    using namespace std;
    int arr_int[6] = {48, 52, 15, 95, 71, 34};
    double arr_dbl[4] = {26.32, 76.03, 65.16, 17.49};
    const char *arr_str[5] = {
        "Cheetah",
        "Puma",
        "Jaguar",
        "Panther",
        "Tiger"
    };
    cout << "The maximum of arr_int[6]: " << maxn(arr_int, 6) << endl;
    cout << "The maximum of arr_dbl[4]: " << maxn(arr_dbl, 4) << endl;
    cout << "The longest in arr_str[5]: " << maxn(arr_str, 5) << endl;
    return 0;
}

template <typename T>
T maxn(T arr[], int n)
{
    T tmax = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > tmax)
            tmax = arr[i];
    return tmax;
}

template <> const char * maxn<const char *>(const char * arr[], int n)
{
    const char * tmax = arr[0];
    for (int i = 1; i < n; i++)
        if (strlen(arr[i]) > strlen(tmax))
            tmax = arr[i];
    return tmax;
}
