/*
 * Do Programming Exercise 6 but modify it to get information from a file.
 * The first item in the file should be the number of contributors, and the
 * rest of the file should consist of pairs of lines, with the first line
 * of each pair being a contributor's name and the second line being a
 * contribution. That is, the file should look like this:
 * 4
 * Same Stone
 * 2000
 * Freida Flass
 * 100500
 * Tammy Tubbs
 * 5000
 * Rich Raptor
 * 55000
 */
#include <iostream>
#include <fstream>
#include <cstdlib>
struct donor
{
    char name[50];
    double contribution;
};
int main()
{
    using namespace std;
    ifstream inFile;
    char filename[40];
    cout << "Please enter the name of data file: ";
    cin >> filename;
    inFile.open(filename);
    if (!inFile.is_open())
    {
        cout << "Could not open the file " << filename << endl;
        cout << "Program terminated.\n";
        exit(EXIT_FAILURE);
    }
    int num;
    inFile >> num;
    donor * donors = new donor[num];
    for (int i = 0; i < num; i++)
    {
        inFile.get();
        inFile.getline(donors[i].name, 50);
        inFile >> donors[i].contribution;
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
    inFile.close();
    return 0;
}
