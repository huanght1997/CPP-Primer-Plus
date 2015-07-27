#include <iostream>
#include "exc_mean.h"

using std::cout;

bad_mean::bad_mean(double a, double b, const std::string & s)
    : std::logic_error(s), v1(a), v2(b)
{
}

bad_hmean::bad_hmean(double a, double b)
    : bad_mean(a, b, "hmean(): invalid arguments")
{
}

void bad_hmean::report_bad()
{
    cout << "hmean(" << bad_mean::v1_val() <<  "," << bad_mean::v2_val()
        << "): invalid arguments: a = -b\n";
}

bad_gmean::bad_gmean(double a, double b)
    : bad_mean(a,b, "gmean(): invalid arguments")
{
}

void bad_gmean::report_bad()
{
    cout << "gmean(" << bad_mean::v1_val() << "," << bad_mean::v2_val()
        << "): invalid arguments: arguments should be >= 0\n";
}
