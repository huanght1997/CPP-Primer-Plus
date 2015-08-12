#include <iostream>
#include <fstream>
#include <cstdlib>
#include "emp.h"
const int MAX = 10;
const char * file = "employees.dat";
int main()
{
    using namespace std;
    employee * pc[MAX];
    ifstream fin;
    fin.open(file);
    int i = 0;

    if (fin.is_open())
    {
        cout << "Here are the current contents of the "
             << file << " file:\n";
        int classtype;
        while((fin >> classtype).get() && !fin.fail())
        {
            switch(classtype)
            {
                case Employee: pc[i] = new employee;break;
                case Manager : pc[i] = new manager;break;
                case Fink    : pc[i] = new fink;break;
                case Highfink: pc[i] = new highfink;break;
            }
            pc[i]->getall(fin);
            pc[i++]->showall();
        }
        fin.close();
    }

    ofstream fout(file, ios::out | ios::app);
    if (!fout.is_open())
    {
        cerr << "Can't open " << file << " file for output.\n";
        exit(EXIT_FAILURE);
    }

    char choice;
    cout << "Enter Y to add new employees, others to terminate.\n";
    while (cin.get(choice) && (choice == 'Y' || choice == 'y'))
    {
        if (i == MAX)
        {
            cerr << "Sorry, the list was full.\n";
            break;
        }
        else
        {
            cout << "Enter the index number to choose the type:\n";
            cout << "1) Employee 2) Manager 3) Fink 4) Highfink\n";
            int type;
            if (cin >> type && type >= 1 && type <= 4)
            {
                switch (type)
                {
                    case 1: pc[i] = new employee; break;
                    case 2: pc[i] = new manager;break;
                    case 3: pc[i] = new fink; break;
                    case 4: pc[i] = new highfink; break;
                }
                while (cin.get() != '\n') continue;
                pc[i]->setall();
                pc[i++]->writeall(fout);
            }
            cout << "Enter Y to add new employees, others to terminate.\n";
        }
    }
    fout.close();
    for (int index = 0; index < i; index++)
        delete pc[index];

    fin.clear();
    fin.open(file);
    i = 0;
    if (fin.is_open())
    {
        cout << "Here are the current contents of the "
             << file << " file:\n";
        int classtype;
        while((fin >> classtype).get() && !fin.fail())
        {
            switch(classtype)
            {
                case Employee: pc[i] = new employee;break;
                case Manager : pc[i] = new manager;break;
                case Fink    : pc[i] = new fink;break;
                case Highfink: pc[i] = new highfink;break;
            }
            pc[i]->getall(fin);
            pc[i++]->showall();
        }
        fin.close();
    }
    for (int index = 0; index < i; index++)
        delete pc[index];
    cout << "Done.\n";
    return 0;
}
