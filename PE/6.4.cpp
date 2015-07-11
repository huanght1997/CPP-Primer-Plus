/*
 * When you join the Benevolent Order of Programmers, you can be known at
 * BOP meetings by your real name, your job title, or your secret BOP name.
 * Write a program that can list members by real name, by job title, by
 * secret name, or by a member's preference. Base the program on the
 * following structure:
 * // Benevolent Order of Programmers name structure
 * struct bop {
 *     char fullname[strsize];  // real name
 *     char title[strsize];     // job title
 *     char bopname[strsize];   // secret BOP name
 *     int preference;          // 0 = fullname, 1 = title, 2 = bopname
 * };
 * In the program, create a small array of such structures and initialize it
 * to suitable values. Have the program run a loop that lets the user select
 * from different alternatives:
 * a. display by name       b. display by title
 * c. display by bopname    d. display by preference
 * q. quit
 * Note that "display by preference" does not mean display the preference
 * member; it means display the member corresponding to the preference
 * number. For instance, if preference is 1, choice d would display the
 * programmer's job title. A sample run may look something lije the
 * following:
 * Benevolent Order of Programming Report
 * a. display by name       b. display by title
 * c. display by bopname    d. display by preference
 * q. quit
 * Enter your choice: a
 * Wimp Macho
 * Raki Rhodes
 * Celia Laiter
 * Hoppy Hipman
 * Pat Hand
 * Next choice: d
 * Wimp Macho
 * Junior Programmer
 * MIPS
 * Analyst Trainee
 * LOOPY
 * Next choice: q
 * Bye!
 */
#include <iostream>
const int strsize = 40;
// Benevolent Order of Programmers name structure
struct bop
{
    char fullname[strsize];     // real name
    char title[strsize];        // job title
    char bopname[strsize];      // secret BOP name
    int preference;             // 0 = fullname, 1 = title, 2 = bopname
};
int main()
{
    using namespace std;
    bop programmers[5] = 
    {
        {"Wimp Macho", "Main Programmer", "SWITCHER", 0},
        {"Raki Rhodes", "Junior Programmer", "ORDER", 1},
        {"Celia Laiter", "Test Engineer", "MIPS", 2},
        {"Hoppy Hipman", "Analyst Trainee", "HANDLER", 1},
        {"Pat Hand", "Director", "LOOPY", 2}
    };
    cout << "Benevolent Order of Programmers Report\n";
    cout << "a. display by name     b. display by title\n";
    cout << "c. display by bopname  d. display by preference\n";
    cout << "q. quit\n";
    cout << "Enter your choice: ";
    char choice;
    cin >> choice;
    while (choice != 'q' && choice != 'Q')
    {
        switch (choice)
        {
            case 'A':
            case 'a':
                for (int i = 0; i < 5; i++)
                    cout << programmers[i].fullname << endl;
                break;
            case 'B':
            case 'b':
                for (int i = 0; i < 5; i++)
                    cout << programmers[i].title << endl;
                break;
            case 'C':
            case 'c':
                for (int i = 0; i < 5; i++)
                    cout << programmers[i].bopname << endl;
                break;
            case 'D':
            case 'd':
                for (int i = 0; i < 5; i++)
                {
                    switch (programmers[i].preference)
                    {
                        case 0:
                            cout << programmers[i].fullname << endl;
                            break;
                        case 1:
                            cout << programmers[i].title << endl;
                            break;
                        case 2:
                            cout << programmers[i].bopname << endl;
                    }
                }
                break;
            default:
                cout << "It's not a choice." << endl;
        }
        cout << "Next choice: ";
        cin >> choice;
    }
    cout << "Bye!\n";
    return 0;
}
