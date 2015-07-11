/*
 * Write a program that reads keyboard input to the @ symbol and that echoes
 * the input except for digits, converting each uppercase character to
 * lowercase, and vice versa. (Don't forget the cctype family.)
 */
#include <iostream>
#include <cctype>
int main()
{
    using namespace std;
    char ch;
    cout << "Enter characters; enter @ to quit:\n";
    cin.get(ch);
    while (ch != '@')
    {
        if (!isdigit(ch))
        {
            if (islower(ch))
                cout << char (toupper(ch));
            else if (isupper(ch))
                cout << char (tolower(ch));
            else
                cout << ch;
        }
        cin.get(ch);
    }
    cout << endl;
    return 0;
}
