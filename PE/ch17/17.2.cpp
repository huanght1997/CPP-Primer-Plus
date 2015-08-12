// Write a program that copies your keyboard input (up to the simulated
// end-of-file) to a file named on the command line.
#include <iostream>
#include <fstream>
#include <cstdlib>  // for exit()
int main(int argc, char * argv[])
{
    using namespace std;
    if (argc != 2)
    {
        cerr << "Usage: " << argv[0] << " filename\n";
        exit(EXIT_FAILURE);
    }

    ofstream fout;
    char ch;
    fout.open(argv[1]);
    if (!fout.is_open())
    {
        cerr << "Could not open " << argv[1] << endl;
        exit(EXIT_FAILURE);
    }

    cout << "Please type characters. Ctrl-D (Unix) or Ctrl-Z(DOS) "
         << "to terminate.\n";
    while (cin.get(ch))
        fout.put(ch);

    fout.close();
    return 0;
}
