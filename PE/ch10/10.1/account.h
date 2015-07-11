#ifndef ACCOUNT_H_
#define ACCOUNT_H_
#include <string>
class Account
{
    private:
        std::string name;
        std::string number;
        double balance;
    public:
        Account();
        Account(std::string m_name, std::string m_number, double m_balance);
        void display();
        void deposit(double in);
        void withdraw(double out);
};
#endif
