Please use them with C++ Primer Plus, 6th Edition by Stephen Prata.
The source code files in PE directory are all made by myself.
You can download another reference answer set in http://www.informit.com/content/images/0672326973/downloads/cpp5sol.zip


Sample Program Lists.

These samples must use the compiler supporting C++11.
It means, if you use g++, you should use -std=c++11 argument.

4.23-mixtypes.cpp (Reason: auto)
4.24-choices.cpp (Reason: <array>)
7.15-arrobj.cpp (Reason: <array>)
7.19-arfupt.cpp (Reason: auto)

There are some warnings, even errors, in these files below:

3.13-init.cpp: In function 'int main()':
3.13-init.cpp:9:16: warning: overflow in implicit constant conversion [ -Woverflow]
     int debt = 7.2E12;  // result not defined in C++
                ^

7.9-strgfun.cpp: In function 'int main()':
7.9-strgfun.cpp:11:18: warning: deprecated conversion from string constant to 'char*' [-Wwrite-strings]
    char *wail = "ululate";
                 ^

8.7-strquote.cpp: In function 'const string& version3(std::string&, const string&)':
8.7-strquote.cpp:53:12: warning: reference to local variable 'temp' returned [-Wreturn-local-addr]
    string temp;
           ^

8.10-leftover.cpp: In function 'int main()':
8.10-leftover.cpp:9:19: warning: deprecated conversion from string constant to 'char*' [Wwrite-strings]
    char * trip = "Hawaii!!";
                  ^

These files can generate a program with serious problems:
$ 5.10-equal.out
.
.
.
quiz 1343 is a 20
Segmentation fault (Core Dumped)
