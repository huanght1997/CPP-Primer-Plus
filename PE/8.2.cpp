/*
 * The CandyBar structure contains three members. The first member holds the
 * brand name of a candy bar. The second number holds the weight (which may
 * have a fractional part) of the candy bar, and the third member holds the
 * number of calories (an integer value) in the candy bar. Write a program
 * that uses a function that takes as arguments a reference to CandyBar, a
 * pointer-to-char, a double, and an int and uses the last three values to
 * set the corresponding members of the structure. The last three arguments
 * should have default values of "Millennium Munch," 2.85, and 350. Also the
 * program should use a function that takes a reference to a CandyBar as an
 * argument and display the contents of the structure. Use const where
 * appropriate.
 */
#include <iostream>
#include <cstring>
using namespace std;
struct CandyBar
{
    char name[40];
    double weight;
    int calories;
};
void setCandyBar(CandyBar & candybar, char * str = "Millennium Munch", double weight = 2.85, int calories = 350);
void showCandyBar(const CandyBar & candybar);
int main()
{
    char str[40];
    double weight;
    int calories;
    CandyBar mm, candybar;
    setCandyBar(mm);
    cout << "Enter the name of candy bar: ";
    cin >> str;
    cout << "Enter the weight of candy bar: ";
    cin >> weight;
    cout << "Enter the calories in the candy bar: ";
    cin >> calories;
    setCandyBar(candybar, str, weight, calories);

    showCandyBar(mm);
    showCandyBar(candybar);
    return 0;
}

void setCandyBar(CandyBar & candybar, char * str, double weight, int calories)
{
    strcpy(candybar.name, str);
    candybar.weight = weight;
    candybar.calories = calories;
}

void showCandyBar(const CandyBar & candybar)
{
    cout << "Name: " << candybar.name << endl;
    cout << "Weight: " << candybar.weight << endl;
    cout << "Calories: " << candybar.calories << endl;
}
