/*
 * The CandyBar structure contains three members, as described in
 * Programming Exercise 5. Write a program that creates an array of three
 * CandyBar structures, initializes them to values of your choice, and then
 * displays the contents of each structure.
 */
#include <iostream>
struct CandyBar
{
    char name[30];
    double weight;
    int calories;
};
int main()
{
    using namespace std;
    CandyBar snacks[3] = 
    {
        {"Mocha Munch", 2.3, 350},
        {"Granola Bars", 5.0, 208},
        {"Kit Kat", 35, 176}
    };
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

    return 0;
}
