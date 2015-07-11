/*
 * Provide method definition for the class described in Chapter Review
 * Question 5 and write a short program that illustrates all the features.
 * (Contents of Chapter Review 5)
 * Define a class represent a bank account. Data members should include the
 * depositor's name, the account number (use a string), and the balance.
 * Member functions should allow the following:
 * Creating an object and initializing it.
 * Displaying the depositor's name, account number, and balance
 * Depositing an amount of money given by an argument
 * Withdrawing an amount of money given by an argument
 */
// The declaration is in account.h
#include <iostream>
#include "account.h"
Account::Account()
{
    name = "no name";
    number = "0000000000000000";
    balance = 0;
}
Account::Account(std::string m_name, std::string m_number, double m_balance)
{
    name = m_name;
    number = m_number;
    balance = m_balance;
}
void Account::display()
{
    using namespace std;
    cout << "Name: " << name << endl;
    cout << "Account number: " << number << endl;
    cout.setf(ios_base::fixed, ios_base::floatfield);
    cout.precision(2);
    cout << "Balance: $" << balance << endl;
}
void Account::deposit(double in)
{
    using std::cout;
    using std::ios_base;
    if (in < 0)
        cout << "Negative numbers are not allowed! Aborted.\n";
    else
    {
        cout.setf(ios_base::fixed, ios_base::floatfield);
        cout.precision(2);
        balance += in;
        cout << "$" << in << " deposited.\n";
    }
}
void Account::withdraw(double out)
{
    if (out > balance)
        std::cout << "Sorry, no enough money in your account.\n";
    else if (out < 0)
        std::cout << "Negative numbers are not allowed! Aborted.\n";
    else
    {
        std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
        std::cout.precision(2);
        balance -= out;
        std::cout << "$" << out << " withdrawn.\n";
    }
}
