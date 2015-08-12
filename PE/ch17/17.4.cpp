// Write a program that opens two text files for input and one for ouput.
// The program should concatenate the corresponding lines of the input
// files, use a space as a separator and write the results to the output
// file. If one file is shorter than the other, the remaining lines in the
// longer file should also be copied to the output file. For example,
// suppose the first input file has these contents:
// eggs kites donuts
// ballons hammmers
// stones
// And suppose the second input file has these contents:
// zero lassitude
// finance drama
// The resulting file would have these contents:
// eggs kites donuts zero lassitude
// ballons hammers finance drama
// stones
#include <iostream>
#include <fstream>
#include <cstdlib>
const int LIM = 40;
int main()
{
    using namespace std;
    char file1[LIM], file2[LIM], ofile[LIM];
    cout << "Please enter the first filename to read: ";
    cin.getline(file1, LIM); 
    ifstream fin1(file1);
    if (!fin1)
    {
        cerr << "Cannot open " << file1 << " file to read.\n";
        exit(EXIT_FAILURE);
    }

    cout << "Please enter the second filename to read: ";
    cin.getline(file2, LIM);
       ifstream fin2(file2);
    if (!fin2)
    {
        cerr << "Cannot open " << file2 << " file to read.\n";
        exit(EXIT_FAILURE);
    }

    cout << "Please enter the name of the file to be written: ";
    cin.getline(ofile, LIM);
    ofstream fout(ofile);
    if (!fout)
    {
        cerr << "Cannot open " << ofile << " file to write.\n";
        exit(EXIT_FAILURE);
    }
    
    char ch;
    while (!fin1.eof() && !fin2.eof())
    {
        while (fin1.get(ch) && ch != '\n')
            fout << ch;
        fout.put(' ');
        while (fin2.get(ch) && ch != '\n')
            fout << ch;
        fout << endl;
    }
    if (fin1.eof())
        while (fin2.get(ch))
            fout << ch;
    else
        while (fin1.get(ch))
            fout << ch;

    cout << "Done.\n";

    fin1.close();
    fin2.close();
    fout.close();

    return 0;
}
