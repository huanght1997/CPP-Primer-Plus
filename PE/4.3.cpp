/*
 * Write a program that asks the user to enter his or her first name and
 * then last name, and that then constructs, stores, and displays a third
 * string, consisting of the user's last name followed by a comma, a space,
 * and first name. Use char arrays and functions from cstring header file.
 * A sample run could look like this:
 * Enter your first name: Flip
 * Enter your last name: Fleming
 * Here's the information in a single string: Fleming, Flip
 */
#include <iostream>
#include <cstring>
int main()
{
    using namespace std;
    const int ArSize = 30;
    char fname[ArSize];
    char lname[ArSize];
    char complete_name[ArSize * 2];

    cout << "Enter your first name: ";
    cin.getline(fname, ArSize);
    cout << "Enter your last name: ";
    cin >> lname;
    strcpy(complete_name, lname);
    strcat(complete_name, ", ");
    strcat(complete_name, fname);
    cout << "Here's the information in a single string: "
         << complete_name << endl;
    return 0;
}
