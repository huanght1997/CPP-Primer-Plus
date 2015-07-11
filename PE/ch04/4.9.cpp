/*
 * Do Programming Exercise 6, but instead of declaring an array of three
 * CandyBar structures, use new to allocate the array dynamically.
 */
#include <iostream>
#include <cstring>
struct CandyBar
{
    char name[30];
    double weight;
    int calories;
};
int main()
{
    using namespace std;
    CandyBar * snacks = new CandyBar[3];
    strcpy(snacks[0].name, "Mocha Munch");
    strcpy(snacks[1].name, "Granola Bars");
    strcpy(snacks[2].name, "Kit Kat");
    snacks[0].weight = 2.3;
    snacks[1].weight = 5.0;
    snacks[2].weight = 35;
    snacks[0].calories = 350;
    snacks[1].calories = 208;
    snacks[2].calories = 176;

    cout << "The first snack:\n";
    cout << "Name: " << snacks[0].name << endl;
    cout << "Weight: " << snacks[0].weight << endl;
    cout << "Calories: " << snacks[0].calories << endl << endl;
                    
    cout << "The second snack:\n";
    cout << "Name: " << snacks[1].name << endl;
    cout << "Weight: " << snacks[1].weight << endl;
    cout << "Calories: " << snacks[1].calories << endl << endl;

    cout << "The third snack:\n";
    cout << "Name: " << snacks[2].name << endl;
    cout << "Weight: " << snacks[2].weight << endl;
    cout << "Calories: " << snacks[2].calories << endl;

    delete [] snacks;
    return 0;
}
