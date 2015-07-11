/*
 * Write a program that uses the following functions:
 * Fill_array() takes as arguments the name of an array of double values and
 * an array size. It prompts the user to enter double values to be entered
 * in the array. It ceases taking input when the array is full or when the
 * user enters non-numeric input, and it returns the actual number of
 * entries.
 * Show_array() takes as arguments the name of an array of double values and
 * an array size and displays the contents of the array.
 * Reverse_array() takes as arguments the name of an array of double values
 * and an array size and reverses the order of the values stored in the
 * array.
 * The program should use these functions to fill an array, show the array,
 * reverse the array, show the array, reverse all but the first and last
 * elements of the array, and then show the arra.
 */
#include <iostream>
using namespace std;
int Fill_array(double [], int);
void Show_array(const double [], int);
void Reverse_array(double [], int);
int main()
{
    double arr[20];
    int num = Fill_array(arr, 20);
    Show_array(arr, num);
    Reverse_array(arr, num);
    Show_array(arr, num);
    Reverse_array(arr, num);    // Reverse it back
    Reverse_array(arr + 1, num - 2);
    Show_array(arr, num);
    return 0;
}

int Fill_array(double a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        cout << "Enter number #" << i+1 << ", q to quit: ";
        if (!(cin >> a[i]))
            break;
    }
    return i;
}

void Show_array(const double a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}

void Reverse_array(double a[], int n)
{
    int i, j;
    for (i = 0, j = n - 1; i < j; i++, j--)
    {
        double temp;
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
}
