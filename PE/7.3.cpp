/*
 * Here is a structure declaration:
 * struct box
 * {
 *     char maker[40];
 *     float height;
 *     float width;
 *     float length;
 *     float volume;
 * };
 * a. Write a function that passes a box structure by value and that
 *    displays the value of each member.
 * b. Write a function that passes the address of a box structure and that
 *    sets the volume member to be the product of the other three
 *    dimensions.
 * c. Write a simple program that uses these two functions.
 */
#include <iostream>
struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

void setbox(box *);
void showbox(box);

int main()
{
    box abox;
    setbox(&abox);
    showbox(abox);
    return 0;
}

void setbox(box * pbox)
{
    using namespace std;
    cout << "Enter the maker of the box: ";
    cin.getline(pbox->maker, 40);
    cout << "Enter the height of the box: ";
    cin >> pbox->height;
    cout << "Enter the width of the box: ";
    cin >> pbox->width;
    cout << "Enter the length of the box: ";
    cin >> pbox->length;
    pbox->volume = pbox->height * pbox->width * pbox->length;
}

void showbox(box abox)
{
    using namespace std;
    cout << "Maker: " << abox.maker << endl;
    cout << "Height: " << abox.height << endl;
    cout << "Width: " << abox.width << endl;
    cout << "Length: " << abox.length << endl;
    cout << "Volume: " << abox.volume << endl;
}
