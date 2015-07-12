#include <iostream>
#include "golf.h"
int main()
{
    using namespace std;
    Golf player[8];
    player[0] = Golf("Ann Birdfree", 24);
    int count = 1;
    for (int i = 1; i < 8; i++)
    {
        if (!player[i].setgolf())
        {
            cout << "Input terminated.\n";
            break;
        }
        else
            count++;
    }
    for (int i = 0; i < count; i++)
        player[i].showgolf();
    cout << "Now you can change Ann Birdfree's handicap: ";
    int hdcp;
    cin >> hdcp;
    player[0].sethandicap(hdcp);
    for (int i = 0; i < count; i++)
        player[i].showgolf();
    return 0;
}
