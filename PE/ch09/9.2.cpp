/*
 * Redo Listing 9.9, replacing the character array with a string object. The
 * program should no longer have to check whether the input string fits, and
 * it can compare the input string to "" to check for an empty line.
 */
#include <iostream>
#include <string>
void strcount(const std::string str);

int main()
{
    using namespace std;
    string input;
    char next;

    cout << "Enter a line:\n";
    getline(cin, input);
    while (input != "")
    {
        strcount(input);
        cout << "Enter next line (empty line to quit):\n";
        getline(cin, input);
    }
    cout << "Bye!\n";
    return 0;
}
void strcount(const std::string str)
{
    using namespace std;
    static int total = 0;           // static local variable

    cout << "\"" << str << "\" contains ";
    total += str.size();
    cout << str.size() << " characters\n";
    cout << total << " characters total\n";
}
