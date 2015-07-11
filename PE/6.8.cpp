/*
 * Write a program that opens a text file, reads it character-by-character
 * to the end of the file, and reports the number of characters in the file.
 */
#include <iostream>
#include <fstream>
#include <cstdio>
#include <cstdlib>
int main()
{
    using namespace std;
    char filename[80];
    cout << "Enter the name of text file: ";
    cin.getline(filename, 80);
    ifstream inFile;
    inFile.open(filename);
    if (!inFile.is_open())
    {
        cout << "Could not open the file " << filename << endl;
        cout << "Program terminated.\n";
        exit(EXIT_FAILURE);
    }
    int count = 0;
    int ch;

    while ((ch = inFile.get()) != EOF)
        count++;
    cout << "There are " << count << " characters in this file.\n";
    return 0;
}
