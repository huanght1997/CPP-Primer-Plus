/*
 * Write a program that asks the user to enter his or her first name and
 * then last name, and that then constructs, stores, and displays a third
 * string consisting of the user's last name followed by a comma, a space,
 * and first name. Use string objects and methods from the string header
 * file. A sample run could look like this:
 * Enter your first name: Flip
 * Enter your last name: Fleming
 * Here's the information in a single string: Fleming, Flip
 */
#include <iostream>
#include <string>
int main()
{
    using namespace std;
    string fname, lname;
    string complete_name;
    cout << "Enter your first name: ";
    getline(cin, fname);
    cout << "Enter your last name: ";
    cin >> lname;
    complete_name = lname + ", " + fname;
    cout << "Here's the information in a single string: "
         << complete_name << endl;
    return 0;
}
