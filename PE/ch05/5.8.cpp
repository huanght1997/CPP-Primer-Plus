/*
 * Write a program that uses an array of char and a loop to read one word
 * at a time until the word done is entered. The program should then report
 * the number of words entered (not counting done). A sample run could look
 * like this:
 * Enter words (to stop, type the word done):
 * anteater birthday category dumpster
 * envy finagle geometry done for sure
 * You entered a total of 7 words.
 * You should include the cstring header file and use the srecmp() function
 * to make the comparision test.
 */
#include <iostream>
#include <cstring>
int main()
{
    using namespace std;
    int count = 0;
    char word[40];
    cout << "Enter words (to stop, type the word done): " << endl;
    cin >> word;
    while (strcmp(word, "done"))
    {
        count++;
        cin >> word;
    }
    cout << "You entered a total of " << count << " words.\n";

    return 0;
}
