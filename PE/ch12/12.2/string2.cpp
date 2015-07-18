// string2.cpp -- String class methods
#include <cstring>                  // string.h for some
#include <cctype>
#include "string2.h"                // includes <iostream>
using namespace std;

// initializing static class member

int String::num_strings = 0;

// static method
int String::HowMany()
{
    return num_strings;
}

// class methods
String::String(const char * s)      // construct String from C string
{
    len = strlen(s);                // set size
    str = new char[len + 1];        // allot storage
    strcpy(str, s);                 // initialize pointer
    num_strings++;                  // set object count
}

String::String()                    // default constructor
{
    len = 4;
    str = new char[1];
    str[0] = '\0';                  // default string
    num_strings++;
}

String::String(const String & st)
{
    num_strings++;                  // handle static member update
    len = st.len;                   // same length
    str = new char [len + 1];       // allot space
    strcpy(str, st.str);            // copy string to new location
}

String::~String()                   // necessary destructor
{
    --num_strings;                  // required
    delete [] str;                  // required
}

String String::stringlow()
{
    for (int i = 0; i < len; i++)
        str[i] = tolower(str[i]);
    return *this;
}

String String::stringup()
{
    for (int i = 0; i < len; i++)
        str[i] = toupper(str[i]);
    return *this;
}

int String::has(char ch)
{
    int count = 0;
    for (int i = 0; i < len; i++)
        if (str[i] == ch)
            count++;
    return count;
}
// overloaded operator methods

// assign a String to a String
String & String::operator=(const String & st)
{
    if (this == &st)
        return *this;
    delete [] str;
    len = st.len;
    str = new char[len + 1];
    strcpy(str, st.str);
    return *this;
}

// assign a C string to a String
String & String::operator=(const char * s)
{
    delete [] str;
    len = strlen(s);
    str = new char[len + 1];
    strcpy(str, s);
    return *this;
}

// read-write char access for non-const String
char & String::operator[](int i)
{
    return str[i];
}

// read-only char access for const String
const char & String::operator[](int i) const
{
    return str[i];
}

String String::operator+(const String & s) const
{
    char * temp = new char [len + s.len + 1];
    strcpy(temp, str);
    strcpy(temp+len, s.str);
    String result(temp);
    delete [] temp;
    return result;
}

// overloaded operator friends

bool operator<(const String &st1, const String &st2)
{
    return (strcmp(st1.str, st2.str) < 0);
}

bool operator>(const String &st1, const String &st2)
{
    return st2 < st1;
}

bool operator==(const String &st1, const String &st2)
{
    return (strcmp(st1.str, st2.str) == 0);
}

// simple String output
ostream & operator<<(ostream & os, const String & st)
{
    os << st.str;
    return os;
}

// quick and dirty String input
istream & operator>>(istream & is, String & st)
{
    char temp[String::CINLIM];
    is.get(temp, String::CINLIM);
    if (is)
        st = temp;
    while (is && is.get() != '\n')
        continue;
    return is;
}

String operator+(const char * s1, const String & s2)
{
    char * temp = new char [strlen(s1) + s2.len + 1];
    strcpy(temp, s1);
    strcpy(temp + strlen(s1), s2.str);
    String result(temp);
    delete [] temp;
    return result;
}
