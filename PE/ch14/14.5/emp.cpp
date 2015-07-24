#include "emp.h"
using std::cout;
using std::cin;
using std::endl;
using std::string;

// methods of abstr_emp
abstr_emp::abstr_emp() : fname("Unknown"), lname("Unknown"), job("Unknown")
{
}

abstr_emp::abstr_emp(const string & fn, const string & ln, const string & j)
    : fname(fn), lname(ln), job(j) {}

void abstr_emp::ShowAll() const
{
    cout << "Name: " << fname << " " << lname << endl;
    cout << "Job: " << job << endl;
}

void abstr_emp::SetAll()
{
    cout << "Please enter the first name: ";
    getline(cin, fname);
    cout << "Please enter the last name: ";
    getline(cin, lname);
    cout << "Please enter the job: ";
    getline(cin, job);
}

std::ostream & operator<<(std::ostream & os, const abstr_emp & e)
{
    os << e.fname << " " << e.lname;
    return os;
}

abstr_emp::~abstr_emp() {}

// methods of employee
employee::employee() : abstr_emp() {}

employee::employee(const string & fn, const string & ln,
                   const string & j) : abstr_emp(fn, ln, j) {}

void employee::ShowAll() const
{
    abstr_emp::ShowAll();
}

void employee::SetAll()
{
    abstr_emp::SetAll();
}

// methods of manager
manager::manager() : abstr_emp(), inchargeof(0) {}

manager::manager(const string & fn, const string & ln,
                 const string & j, int ico)
        : abstr_emp(fn, ln, j), inchargeof(ico) {}

manager::manager(const abstr_emp & e, int ico)
        : abstr_emp(e), inchargeof(ico) {}

manager::manager(const manager & m)
        : abstr_emp(m), inchargeof(m.inchargeof) {}

void manager::ShowAll() const
{
    cout << "Manager:\n";
    abstr_emp::ShowAll();
    cout << "In Charge Of: " << inchargeof << endl;
}

void manager::SetAll()
{
    abstr_emp::SetAll();
    cout << "Please enter how many employees the manager manages: ";
    cin >> inchargeof;
    while (cin.get() != '\n')
        continue;
}

// methods of fink
fink::fink() : abstr_emp(), reportsto("Unknown") {}

fink::fink(const string & fn, const string & ln,
           const string & j, const string & rpo)
    : abstr_emp(fn, ln, j), reportsto(rpo) {}

fink::fink(const abstr_emp & e, const string & rpo)
    : abstr_emp(e), reportsto(rpo) {}

fink::fink(const fink & e) : abstr_emp(e), reportsto(e.reportsto) {}

void fink::ShowAll() const
{
    abstr_emp::ShowAll();
    cout << "Reports to: " << reportsto << endl;
}

void fink::SetAll()
{
    abstr_emp::SetAll();
    cout << "Please enter to whom the fink reports: ";
    getline(cin, reportsto);
}

// methods of highfink

highfink::highfink() : abstr_emp(), manager(), fink() {}

highfink::highfink(const string & fn, const string & ln,
                   const string & j, const string & rpo,
                   int ico)
        : abstr_emp(fn,ln,j), manager(fn,ln,j,ico), fink(fn,ln,j,rpo) {}

highfink::highfink(const abstr_emp & e, const string & rpo, int ico)
        : abstr_emp(e), manager(e, ico), fink(e, rpo) {}

highfink::highfink(const fink & f, int ico)
        : abstr_emp(f), manager(f, ico), fink(f) {}

highfink::highfink(const manager & m, const string & rpo)
        : abstr_emp(m), manager(m), fink(m, rpo) {}

highfink::highfink(const highfink & h)
        : abstr_emp(h), manager(h), fink(h) {}

void highfink::ShowAll() const
{
    manager::ShowAll();
    cout << "Reports to: " << fink::ReportsTo() << endl;
}

void highfink::SetAll()
{
    manager::SetAll();
    cout << "Please enter to whom the fink reports: ";
    getline(cin, fink::ReportsTo());
}
