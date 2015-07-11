#include <iostream>
#include "account.h"
int main()
{
    using namespace std;
    Account tester("Program Tester", "1234567890987654", 3000);
    tester.display();
    tester.deposit(2000);
    tester.display();
    tester.withdraw(4000);
    tester.display();
    return 0;
}
