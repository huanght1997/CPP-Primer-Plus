// A common game is the lottery card. The card has numbered spots of which a
// certain number are selected at random. Write a Lotto() function that
// takes two arguments. The first should be the number of spots on a lottery
// card, and the second should be the number of spots selected at random.
// The function should return a vector<int> object that contains, in sorted
// order, the numbers selected at random. For example, you could use the
// function as follows:
// vector<int> winners;
// winners = Lotto(51,6);
// This would assign to winners a vector that contains six numbers selected
// randomly from the range 1 through 51. Note that simply using rand()
// doesn't quite do the job because it may produce duplicate values.
// Suggestion: Have the function create a vector that contains all the
// possible values, use random_shuffle(), and then use the beginning of the
// shuffled vector to obtain the values. Also write a short program that
// lets you test the function.
#include <iostream>
#include <vector>
#include <cstdlib>      // for srand()
#include <ctime>
#include <algorithm>
using namespace std;
vector<int> Lotto(int spots, int selected);
int main()
{
    int spots, selected;
    cout << "How many numbers do you need to draw? ";
    cin >> spots;
    cout << "What is the number you can draw? ";
    cin >> selected;
    vector<int> winners;
    winners = Lotto(spots, selected);
    cout << "The Winners: ";
    for (int i = 0; i < winners.size(); i++)
        cout << winners[i] << ' ';
    cout << endl;
    return 0;
}

vector<int> Lotto(int spots, int selected)
{
    vector<int> pool(spots);
    for (int i = 0; i < spots; i++)
        pool[i] = i + 1;
    srand(time(0));
    random_shuffle(pool.begin(), pool.end());
    vector<int> winners(pool.begin(), pool.begin() + selected);
    sort(winners.begin(), winners.end());
    return winners;
}
