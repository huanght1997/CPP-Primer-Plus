/*
 * Begin with the following structure declaration:
 * struct chaff
 * {
 *     char dross[20];
 *     int slag;
 * };
 * Write a program that uses placement new to place an array of two such
 * structures in a buffer. Then assign values to the structure members
 * (remembering to use strcpy() for the char array) and use a loop to
 * display the contents. Option 1 is to use a static array, like that in
 * Listing 9.10, for the buffer. Option 2 is to use regular new to allocate
 * the buffer.
 */
#include <iostream>
#include <cstring>
#include <new>
struct chaff
{
    char dross[20];
    int slag;
};
chaff buffer[2];
int main()
{
    using namespace std;
    chaff * item = new (buffer)chaff[2];
    strcpy(item[0].dross, "coal");
    item[0].slag = 20;
    strcpy(item[1].dross, "iron");
    item[1].slag = 30;
    for (int i = 0; i < 2; i++)
        cout << item[i].dross << " " << item[i].slag << endl;
    return 0;
}
