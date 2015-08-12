// Write and test a variadic template function sum_values() that accepts an
// arbitrarily long list of arguments with numeric values (they can be a
// mixture of types) and return the sum as a long double value.
#include <iostream>

long double sum_values() {return 0;}

template<typename T>
long double sum_values(const T value) {return value;}

template<typename T, typename... Args>
long double sum_values(const T value, const Args&... args)
{
    return (value + sum_values(args...));
}

int main()
{
    using std::cout;
    using std::endl;
    cout << sum_values(1, 2, 3, 4) << endl;
    cout << sum_values(1.1, 2.2, 3, 4.8, 5.2) << endl;
    cout << sum_values(70000L, 3.56, 'c', 58, -843.66) << endl;
    return 0;
}
