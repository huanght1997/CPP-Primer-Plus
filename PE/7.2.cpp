/*
 * Write a program that asks the user to enter up to 10 golf scores, which
 * are to be stored in an array. You should provide a means for the user to
 * terminate input prior to entering 10 scores. The program should display
 * all the scores on one line and report the average score. Handle input,
 * display, and the average calculation with three separate array-processing
 * functions.
 */
#include <iostream>
using namespace std;
const int Max = 10;
int input(int []);
void display(const int [], int);
double calculate(const int [], int);
int main()
{
    int score[Max];
    int num = input(score);
    display(score, num);
    double average = calculate(score, num);
    cout << "The average score is " << average << endl;
    return 0;
}

int input(int a[])
{
    cout << "Please enter the golf scores, q or negative number to quit:\n";
    int i;
    for (i = 0; i < Max; i++)
    {
        cout << "Score #" << i+1 << ": ";
        if (!(cin >> a[i]) || a[i] < 0)
            break;
    }
    return i;
}

void display(const int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}

double calculate(const int a[], int n)
{
    double sum = 0.0;
    for (int i = 0; i < n; i++)
        sum += a[i];
    double average = sum / n;
    return average;
}
