// A palindrome is a string that is the same backward as it is forward. For
// example, "tot" and "otto" are rather short palindromes. Write a program
// that lets user enter a string and that passes to a bool function a
// reference to the string. The function should return true if the string is
// a palindrome and false otherwise. At this point, don't worry about
// complications such as capitalization, spaces, and puctuation. That is,
// this simple version should reject "Otto" and "Madam, I'm Adam." Feel free
// to scan the list of string methods in Appendix F for methods to simplify
// the task.
#include <iostream>
#include <string>
bool is_palin(const std::string & s);
int main()
{
    using namespace std;
    string input;
    cout << "Please enter a string:\n";
    getline(cin, input);
    while (cin && input.size() > 0)
    {
        if (is_palin(input))
            cout << "It's a palindrome.\n";
        else
            cout << "It's not a palindrome.\n";
        cout << "Please enter a string (empty line to quit):\n";
        getline(cin,input);
    }
    cout << "Done.\n";

    return 0;
}

bool is_palin(const std::string & s)
{
    std::string rev_str(s.rbegin(), s.rend());
    return (rev_str == s);
}
