#ifndef STOCK_H_
#define STOCK_H_
#include <iostream>
class Stock
{
    private:
        char * company;
        int shares;
        double share_val;
        double total_val;
        void set_tot() { total_val = shares * share_val; }
    public:
        Stock();
        Stock(const char * co, long n = 0, double pr = 0.0);
        Stock(const Stock & st);
        ~Stock();
        Stock & operator=(const Stock & st);
        void buy(long num, double price);
        void sell(long num, double price);
        void update(double price);
        const Stock & topval(const Stock & s) const;
        friend std::ostream & operator<<(std::ostream & os, const Stock & st);
};
#endif
