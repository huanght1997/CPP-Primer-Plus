#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "person.h"
using namespace std;

void Person::Show() const
{
    cout << "Name: " << fname << " " << lname << endl;
}

void Person::Set()
{
    cout << "Please enter the first name: ";
    getline(cin, fname);
    cout << "Please enter the last name: ";
    getline(cin, lname);
}

void Gunslinger::Show() const
{
    Person::Show();
    cout << "Notches: " << notches << endl;
    cout << "Draw time: " << drawtime << endl;
}

void Gunslinger::Set()
{
    Person::Set();
    cout << "Enter the Gunslinger's notches: ";
    while (!(cin >> notches) || notches < 0)
    {
        cin.clear();
        while (cin.get() != '\n')
            continue;
    }
    cout << "Enter the draw time: ";
    while (!(cin >> drawtime) || drawtime < 0)
    {
        cin.clear();
        while (cin.get() != '\n')
            continue;
    }
}

int PokerPlayer::Draw()
{
    srand(time(0));
    return rand()%52 + 1;
}

void BadDude::Show() const
{
    Gunslinger::Show();
}
