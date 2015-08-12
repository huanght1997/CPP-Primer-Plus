// Mat and Pat want to invite their friends to a party, much as they did in
// Programming Exercise 8 in Chapter 16, except now they want a program that
// uses files. They have asked you to write a program that does the
// following:
// * Reads a list of Mat's friends' names from a text file called mat.dat,
//   which lists one friend per line. The names are stored in a container
//   and then displayed in sorted order.
// * Reads a list of Pat's friends' names from a text file called pat.dat,
//   which lists one friend per line. The names are stored in a container
//   and then displayed in sorted order.
// * Merges the two lists, eliminating duplicates and stores the result in
//   the file matnpat.dat, one friend per line.
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <set>
#include <algorithm>
#include <iterator>
void display(const std::string & name) { std::cout << name << std::endl; }
int main()
{
    using namespace std;
    ifstream fmat("mat.dat");
    if (!fmat)
    {
        cerr << "Cannot open mat.dat file.\n";
        exit(EXIT_FAILURE);
    }
    ifstream fpat("pat.dat");
    if (!fpat)
    {
        cerr << "Cannot open pat.dat file.\n";
        exit(EXIT_FAILURE);
    }
    set<string> mat;
    string name;
    while (!fmat.eof())
    {
        getline(fmat, name);
        mat.insert(name);
    }
    set<string> pat;
    while (!fpat.eof())
    {
        getline(fpat, name);
        pat.insert(name);
    }

    set<string> total;
    set_union(mat.begin(), mat.end(), pat.begin(), pat.end(),
            insert_iterator<set<string> >(total, total.begin()));

    cout << "The friends of Mat:\n";
    for_each(mat.begin(), mat.end(), display);
    cout << endl << "The friends of Pat:\n";
    for_each(pat.begin(), pat.end(), display);
    cout << endl << "Their friends:\n";
    for_each(total.begin(), total.end(), display);

    ofstream fout("matnpat.dat");
    if (!fout)
    {
        cerr << "Cannot open matnpat.dat file.\n";
        exit(EXIT_FAILURE);
    }
    ostream_iterator <string, char> out(fout, "\n");
    copy(total.begin(), total.end(), out);
    cout << "Data stored in matnpat.dat file.\n";

    fmat.close();
    fpat.close();
    fout.close();

    return 0;
}
