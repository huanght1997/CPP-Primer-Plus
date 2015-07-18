#ifndef STRING2_H_
#define STRING2_H_
#include <iostream>
using std::ostream;
using std::istream;

class String
{
    private:
        char * str;                 // pointer to string
        int len;                    // length of string
        static int num_strings;     // number of objects
        static const int CINLIM = 80;   // cin input limit
    public:
    // constructors and other methods
        String(const char * s);     // constructor
        String();                   // default constructor
        String(const String &);     // copy constructor
        ~String();                  // destructor
        String stringlow();
        String stringup();
        int has(char);
        int length() const { return len; }
    // overloaded operator methods
        String & operator=(const String &);
        String & operator=(const char *);
        char & operator[](int i);
        const char & operator[](int i) const;
        String operator+(const String &) const;
    // overloaded opearator friends
        friend bool operator<(const String &st, const String &st2);
        friend bool operator>(const String &st1, const String &st2);
        friend bool operator==(const String &st, const String &st2);
        friend ostream & operator<<(ostream & os, const String &st2);
        friend istream & operator>>(istream & is, String & st);
        friend String operator+(const char *, const String &);
    // static function
        static int HowMany();
};
#endif
