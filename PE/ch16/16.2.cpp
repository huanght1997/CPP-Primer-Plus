// Do the same problem as given in Programming Exercise 1 but do worry
// complications such as capitalization, spaces, and punctuation. That is,
// "Madam, I'm Adam" should test as a palindrome. For example, the testing
// function could reduce the string to "madamimadam" and then test whether
// the reverse is the same. Don't forget to use cctype library. You might
// find an STL function or two useful although not necessary.
#include <iostream>
#include <string>
#include <cctype>
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
        getline(cin, input);
    }
    cout << "Done.\n";

    return 0;
}

bool is_palin(const std::string & s)
{
    using namespace std;
    string process;
    for (int i = 0; i < s.size(); i++)
        if (isalpha(s[i]))
            process.push_back((char)tolower(s[i]));
    string rev_pro(process.rbegin(), process.rend());
    return (rev_pro == process);
}
