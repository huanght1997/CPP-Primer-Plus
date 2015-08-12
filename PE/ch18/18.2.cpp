// Here is declaration for the Cpmv class:
// (In this file)
// The operator+() function should create an object whose qcode and zcode
// members concatenate the corresponding members of the operands. Provide
// code that implements move semantics for the move constructor and the move
// assignment operator. Write a program that uses all the methods. For
// testing purposes, make the various methods verbose so that you can see
// when they are used.
#include <iostream>
#include <string>
class Cpmv
{
    public:
        struct Info
        {
            std::string qcode;
            std::string zcode;
        };
    private:
        Info *pi;
    public:
        Cpmv();
        Cpmv(std::string q, std::string z);
        Cpmv(const Cpmv & cp);
        Cpmv(Cpmv && mv);
        ~Cpmv();
        Cpmv & operator=(const Cpmv & cp);
        Cpmv & operator=(Cpmv && mv);
        Cpmv operator+(const Cpmv & obj) const;
        void Display() const;
};

Cpmv::Cpmv()
{
    std::cout << "default constructor called.\n";
    pi = new Info;
    pi->qcode = pi->zcode = "";
}

Cpmv::Cpmv(std::string q, std::string z)
{
    std::cout << "string constructor called.\n";
    pi = new Info;
    pi->qcode = q;
    pi->zcode = z;
}

Cpmv::Cpmv(const Cpmv & cp)
{
    std::cout << "copy constructor called.\n";
    pi = new Info;
    *pi = *(cp.pi);
}

Cpmv::Cpmv(Cpmv && mv)
{
    std::cout << "Move constructor called.\n";
    pi = mv.pi;
    mv.pi = nullptr;
}

Cpmv::~Cpmv()
{
    std::cout << "Destructor called.\n";
    delete pi;
}

Cpmv & Cpmv::operator=(const Cpmv & cp)
{
    std::cout << "Copy assignment operator called.\n";
    if (this == &cp)
        return *this;
    delete pi;
    pi = new Info;
    *pi = *(cp.pi);
    return *this;
}

Cpmv & Cpmv::operator=(Cpmv && mv)
{
    std::cout << "Move assignment operator called.\n";
    if (this == &mv)
        return *this;
    delete pi;
    pi = mv.pi;
    mv.pi = nullptr;
    return *this;
}

Cpmv Cpmv::operator+(const Cpmv & obj) const
{
    std::cout << "operator+() called.\n";
    Cpmv temp;
    temp.pi->qcode = pi->qcode + obj.pi->qcode;
    temp.pi->zcode = pi->zcode + obj.pi->zcode;
    return temp;
}

void Cpmv::Display() const
{
    std::cout << "qcode: " << pi->qcode << std::endl;
    std::cout << "zcode: " << pi->zcode << std::endl;
}

int main()
{
    {
        Cpmv c1;
        Cpmv c2("abc", "xyz");
        Cpmv c3(c2);
        Cpmv c4 = c2 + c3;
        Cpmv c5;
        c5 = c4;
        c1.Display();
        c2.Display();
        c3.Display();
        c4.Display();
        c5.Display();
    }
    return 0;
}
