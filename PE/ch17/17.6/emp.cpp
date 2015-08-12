#include "emp.h"
using namespace std;

// methods of abstr_emp
abstr_emp::abstr_emp() : fname(""), lname(""), job("Unknown") {}

abstr_emp::abstr_emp(const string & fn, const string & ln,
                     const string & j)
        : fname(fn), lname(ln), job(j) {}

void abstr_emp::showall() const
{
    cout << "Name: " << fname << " " << lname << endl;
    cout << "Job: " << job << endl;
}

void abstr_emp::setall()
{
    cout << "Please enter the first name: ";
    getline(cin, fname);
    cout << "Please enter the last name: ";
    getline(cin, lname);
    cout << "Please enter the job: ";
    getline(cin, job);
}

void abstr_emp::writeall(ostream & os) const
{
    os << fname << endl;
    os << lname << endl;
    os << job << endl;
}

void abstr_emp::getall(istream & is)
{
    getline(is, fname);
    getline(is, lname);
    getline(is, job);
}

ostream & operator<<(ostream & os, const abstr_emp & e)
{
    os << e.fname << " " << e.lname;
    return os;
}

abstr_emp::~abstr_emp() {}

// methods of employee
employee::employee() : abstr_emp() {}
employee::employee(const string & fn, const string & ln, const string & j)
        : abstr_emp(fn, ln, j) {}
void employee::showall() const
{
    cout << "Employee:\n";
    abstr_emp::showall();
}
void employee::setall()
{
    abstr_emp::setall();
}
void employee::writeall(ostream & os) const
{
    os << Employee << endl;            // 0 for employee
    abstr_emp::writeall(os);
}
void employee::getall(istream & is)
{
    abstr_emp::getall(is);
}

// methods of manager
manager::manager() : employee(), inchargeof(0) {}
manager::manager(const string & fn, const string & ln,
                 const string & j, int ico)
        : employee(fn, ln, j), inchargeof(ico) {}
manager::manager(const employee & e, int ico)
        : employee(e), inchargeof(ico) {}
manager::manager(const manager & m)
        : employee(m), inchargeof(m.inchargeof) {}
void manager::showall() const
{
    cout << "Manager:\n";
    abstr_emp::showall();
    cout << "In Charge Of: " << inchargeof << endl;
}
void manager::setall()
{
    employee::setall();
    cout << "Enter the number of employees managed: ";
    cin >> inchargeof;
    while (cin.get() != '\n')
        continue;
}
void manager::writeall(ostream & os) const
{
    os << Manager << endl;  // 1 for manager
    abstr_emp::writeall(os);
    os << inchargeof << endl;
}
void manager::getall(istream & is)
{
    employee::getall(is);
    is >> inchargeof;
    is.get();       // clear the newline
}

// methods of fink
fink::fink() : employee(), reportsto("Unknown") {}
fink::fink(const string & fn, const string & ln,
           const string & j, const string & rpo)
    : employee(fn, ln, j), reportsto(rpo) {}
fink::fink(const employee & e, const string & rpo)
    : employee(e), reportsto(rpo) {}
fink::fink(const fink & e) : employee(e), reportsto(e.reportsto) {}
void fink::showall() const
{
    cout << "Fink:\n";
    abstr_emp::showall();
    cout << "Reports to: " << reportsto << endl;
}
void fink::setall()
{
    employee::setall();
    cout << "Please enter to whom the fink reports: ";
    getline(cin, reportsto);
}
void fink::writeall(ostream & os) const
{
    os << Fink << endl;    // 2 for fink
    employee::writeall(os);
    os << reportsto << endl;
}
void fink::getall(istream & is)
{
    employee::getall(is);
    getline(is, reportsto);
}

// methods of highfink
highfink::highfink() : employee(), manager(), fink() {}
highfink::highfink(const string & fn, const string & ln,
                   const string & j, const string & rpo,
                   int ico)
        : employee(fn,ln,j), manager(fn,ln,j,ico), fink(fn,ln,j,rpo) {}
highfink::highfink(const employee & e, const string & rpo, int ico)
        : employee(e), manager(e, ico), fink(e, rpo) {}
highfink::highfink(const fink & f, int ico)
        : employee(f), manager(f, ico), fink(f) {}
highfink::highfink(const manager & m, const string & rpo)
        : employee(m), manager(m), fink(m, rpo) {}
highfink::highfink(const highfink & h)
        : employee(h), manager(h), fink(h) {}
void highfink::showall() const
{
    cout << "Highfink:\n";
    abstr_emp::showall();
    cout << "In Charge of: " << manager::InChargeOf() << endl;
    cout << "Reports to: " << fink::ReportsTo() << endl;
}
void highfink::setall()
{
    manager::setall();
    cout << "Please enter to whom the fink reports: ";
    getline(cin, fink::ReportsTo());
}
void highfink::writeall(ostream & os) const
{
    os << Highfink << endl;  // 3 for highfink
    abstr_emp::writeall(os);
    os << manager::InChargeOf() << endl;
    os << fink::ReportsTo() << endl;
}
void highfink::getall(istream & is)
{
    employee::getall(is);
    is >> manager::InChargeOf();
    is.get();
    getline(is, fink::ReportsTo());
}
