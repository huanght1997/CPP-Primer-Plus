/*
 * Modify the Tv and Remote classes as follows:
 * a. Make them mutual friends.
 * b. Add a state variable member to the Remote class that describes whether
 *    the remote control is in normal or interactive mode.
 * c. Add a Remote method that displays the mode.
 * d. Provide the Tv class with a method for toggling the new Remote member.
 *    This method should work only if the TV is in the on state.
 *
 * Write a short program that tests these new features.
 */
#include <iostream>
#include "tv.h"

int main(void)
{
    using std::cout;
    Tv s42;
    cout << "Initial settings for 42\" TV:\n";
    s42.settings();
    s42.onoff();
    s42.chanup();
    cout << "\nAdjusted settings for 42\" TV:\n";
    s42.settings();

    Remote grey;

    grey.set_chan(s42, 10);
    grey.volup(s42);
    grey.volup(s42);
    cout << "\n42\" settings after using remote:\n";
    s42.settings();

    Tv s58(Tv::On);
    s58.set_mode();
    grey.set_chan(s58,28);
    cout << "\n58\" settings:\n";
    s58.settings();
    grey.display_style();
    s58.rmode(grey);
    grey.display_style();
    s58.onoff();
    s58.rmode(grey);
    grey.display_style();

    return 0;
}
