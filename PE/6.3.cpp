/*
 * Write a precursor to a menu-driven program. The program should display a
 * menu offering four choices, each labeled with a letter. If the user
 * responds with a letter other than one of the four valid choices, the
 * program should prompt the user to enter a valid response until the user
 * complies. Then the program should use a switch to select a simple action
 * based on the user's selection. A program run could look something like
 * this:
 * Please enter one of the following choices:
 * c) carnivore         p) pianist
 * t) tree              g) game
 * f
 * Please enter a c, p, t, or g: q
 * Please enter a c, p, t, or g: t
 * A maple is a tree.
 */
#include <iostream>
int main()
{
    using namespace std;
    char choice;
    cout << "Please enter one of the following choices:\n";
    cout << "c) carnivore           p) pianist\n";
    cout << "t) tree                g) game\n";
    cin >> choice;
    while (choice != 'c' && choice != 'p' && choice != 't' && choice != 'g')
    {
        cout << "Please enter a c, p, t, or g: ";
        while (cin.get() != '\n')
            continue;
        cin >> choice;
    }
    switch (choice)
    {
        case 'c': cout << "A wolf is a carnivore.\n"; break;
        case 'p': cout << "Lang Lang is a pianist.\n"; break;
        case 't': cout << "A maple is a tree.\n"; break;
        case 'g': cout << "LOL is a game.\n"; break;
    }
    return 0;
}
