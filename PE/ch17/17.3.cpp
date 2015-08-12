// Write a program that copies one file to another. Have the program take
// the filenames from command line. Have the program report if it cannot
// open a file.
#include <iostream>
#include <fstream>
#include <cstdlib>
int main(int argc, char * argv[])
{
    using namespace std;
    if (argc != 3)
    {
        cerr << "Usage: " << argv[0] << " source-file target-file\n";
        exit(EXIT_FAILURE);
    }
    ifstream fin(argv[1]);
    if (!fin)
    {
        cerr << "Cannot open " << argv[1] << " file to read.\n";
        exit(EXIT_FAILURE);
    }
    ofstream fout(argv[2]);
    if (!fout)
    {
        cerr << "Cannot open " << argv[2] << " file to write.\n";
        exit(EXIT_FAILURE);
    }
    char ch;
    while (fin.get(ch))
        fout << ch;
    cout << "Contents of " << argv[1] << " have already been copied to "
         << argv[2] << ".\n";
    fin.close();
    fout.close();
    return 0;
}
