/*
 * Many state lotteries use a variation of the simple lottery portrayed by
 * Listing 7.4. In these variations you chooose several numbers from one set
 * and call them the field numbers. For example, you might select five
 * numbers from the field of 1-47). You also pick a single number (called a
 * mega number or a power ball, etc.) from a second range, such as 1-27. To
 * win the grand prize, you have to guess all the picks correctly. The
 * chance of winning is the product of the probability of picking all the
 * field numbers times the probability of picking the mega number. For
 * instance, the probability of winning the example described here is the
 * product of the probability of picking 5 out of 47 correctly times the
 * probability of picking 1 out of 27 correctly. Modify Listing 7.4 to
 * calculate the probability of winning this kind of lottery.
 */
#include <iostream>
long double probability(unsigned numbers, unsigned picks, unsigned mega);
int main()
{
    using namespace std;
    double total, choices, mega;
    cout << "Enter the total number of the field numbers,\n"
            "the number of picks allowed and the second range to\n"
            "choose the mega number:\n";
    while ((cin >> total >> choices >> mega) && choices <= total && mega>0)
    {
        cout << "You have one chance in ";
        cout << probability(total, choices, mega);  // compute the odds
        cout << " of winning.\n";
        cout << "New three numbers (q to quit): ";
    }
    cout << "bye\n";
    return 0;
}

long double probability(unsigned numbers, unsigned picks, unsigned mega)
{
    long double result = 1.0;       // here comes some local variables
    long double n;
    unsigned p;

    for (n = numbers, p = picks; p > 0; n--, p--)
        result = result * n / p;
    result *= mega;
    return result;
}
