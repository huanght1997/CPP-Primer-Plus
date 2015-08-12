// Here is part of a short program:
// (It's main() function)
// Complete the program by supplying the average_list() function. It should
// be a template function, with type parameter being used to specified the
// kind of initialized_list template to be used as the function parameter
// and also to give the function return type.
#include <iostream>
#include <initializer_list>
template <typename T>
T average_list(const std::initializer_list<T> & il)
{
    T tot = 0;
    for (auto i = il.begin(); i != il.end(); i++)
        tot += *i;
    return tot / il.size();
}

int main()
{
    using namespace std;
// list of double deduce from list contents
    auto q = average_list({15.4, 10.7, 9.0});
    cout << q << endl;
// list of int deduced from list contents
    cout << average_list({20, 30, 19, 17, 45, 38}) << endl;
// forced list of double
    auto ad = average_list<double>({'A', 70, 65.33});
    cout << ad << endl;
    return 0;
}
