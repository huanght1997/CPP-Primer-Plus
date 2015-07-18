/*
 * Rewrite the Stock class as described in Listings 10.7 and 10.8 in
 * Chapter 10 so that it uses dynamically allocated memory directly instead
 * of using string class objects to hold the stock names. Also replace the
 * show() member function with an overloaded operator<<() definition. Test
 * the new definition program in Listing 10.9.
 */
#include <cstring>
#include "stock.h"      // iostream included
using namespace std;
// constructors
Stock::Stock()          // default constructor
{
    company = new char [8];
    strcpy(company, "no name");
    share_val = 0.0;
    total_val = 0.0;
}

Stock::Stock(const char * co, long n, double pr)
{
    company = new char [strlen(co)+1];
    strcpy(company, co);
    
    if (n < 0)
    {
        cout << "Number of shares can't be negative; "
                  << company << " shares set to 0.\n";
        shares = 0;
    }
    else
        shares = n;
    share_val = pr;
    set_tot();
}

Stock::Stock(const Stock & st)
{
    company = new char [strlen(st.company) + 1];
    strcpy(company, st.company);
    shares = st.shares;
    share_val = st.share_val;
    total_val = st.total_val;
}

Stock::~Stock()
{
    delete [] company;
}

Stock & Stock::operator=(const Stock & st)
{
    delete [] company;
    company = new char [strlen(st.company) + 1];
    strcpy(company, st.company);
    shares = st.shares;
    share_val = st.share_val;
    set_tot();
    return *this;
}

void Stock::buy(long num, double price)
{
    if (num < 0)
    {
        cout << "Number of shares purchased can't be negative. "
            << "Transaction is aborted.\n";
    }
    else
    {
        shares += num;
        share_val = price;
        set_tot();
    }
}

void Stock::sell(long num, double price)
{
    if (num < 0)
    {
        cout << "Number of shares sold can't be negative. "
             << "Transaction is aborted.\n";
    }
    else if (num > shares)
    {
        cout << "You can't sell more than you have! "
             << "Transaction is aborted.\n";
    }
    else
    {
        shares -= num;
        share_val = price;
        set_tot();
    }
}

void Stock::update(double price)
{
    share_val = price;
    set_tot();
}

const Stock & Stock::topval(const Stock & s) const
{
    if (s.total_val > total_val)
        return s;
    else
        return *this;
}

std::ostream & operator<<(std::ostream & os, const Stock & st)
{
    // set format to #.###
    ios_base::fmtflags orig =
        os.setf(ios_base::fixed, ios_base::floatfield);
    std::streamsize prec = os.precision(3);

    os << "Company: " << st.company
        << "  Shares: " << st.shares << '\n';
    os << "  Share Price: $" << st.share_val;
    // set format to #.##
    os.precision(2);
    os << "  Total Worth: $" << st.total_val << '\n';

    // restore original format
    os.setf(orig, ios_base::floatfield);
    os.precision(prec);
    return os;
}
