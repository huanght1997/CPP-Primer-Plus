/*
 * Put together a program that keeps track of monetary contributions to the
 * Society for the Preservation of Rightful Influence. It should ask the
 * user to enter the number of contributors and then solicit the user to
 * enter the name and contribution of each contributor. The information
 * should be stored in a dynamically allocated array of structures. Each
 * structure should have two members: a character array (or else a string
 * object) to store the name and a double member to hold the amount of the
 * contribution. After reading all the data, the program should display the
 * names and amounts donated for all donors who contributed $10,000 or more.
 * This list should be headed by the label Grand Patrons. After that, the
 * program should list the remaining donors. That list should be headed
 * Patrons. If there are no donors in one of the categories, the program
 * should print the word "none." Aside from displaying two categories, the
 * program need do no sorting.
 */
#include <iostream>
struct donor
{
    char name[50];
    double contribution;
};
int main()
{
    using namespace std;
    cout << "Please enter the number of contributors: ";
    int num;
    cin >> num;
    donor * donors = new donor[num];
    for (int i = 0; i < num; i++)
    {
        cout << "#" << i+1 << ":\n";
        cout << "Please enter the name of the contributor: ";
        cin.get();
        cin.getline(donors[i].name, 50);
        cout << "Please enter the contribution: ";
        cin >> donors[i].contribution;
    }

    cout << endl << "Grand Patrons" << endl;
    bool grand_is_empty = true;
    for (int i = 0; i < num; i++)
    {
        if (donors[i].contribution >= 10000)
        {
            cout << donors[i].name << " " << donors[i].contribution << endl;
            grand_is_empty = false;
        }
    }
    if (grand_is_empty)
        cout << "none.\n";

    cout << endl << "Patrons" << endl;
    bool patrons_is_empty = true;
    for (int i = 0; i < num; i++)
    {
        if (donors[i].contribution < 10000)
        {
            cout << donors[i].name << endl;
            patrons_is_empty = false;
        }
    }
    if (patrons_is_empty)
        cout << "none.\n";

    delete [] donors;
    return 0;
}
