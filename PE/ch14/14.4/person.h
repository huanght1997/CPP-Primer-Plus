#ifndef PERSON_H_
#define PERSON_H_
#include <string>
using std::string;

class Person
{
    private:
        string fname;
        string lname;
    public:
        Person(string f = "", string l = "")
            : fname(f), lname(l) {}
        virtual ~Person() {}
        virtual void Show() const;
        virtual void Set();
};

class Gunslinger : virtual public Person
{
    private:
        int notches;
        double drawtime;
    public:
        Gunslinger(string f = "", string l = "", int n = 0, double d = 0.0)
            : Person(f, l), notches(n), drawtime(d) {}
        Gunslinger(const Person & p, int n = 0, double d = 0.0)
            : Person(p), notches(n), drawtime(d) {}
        virtual ~Gunslinger() {}
        double Draw() { return drawtime; };
        void Show() const;
        void Set();
};

class PokerPlayer : virtual public Person
{
    public:
        PokerPlayer(string f = "", string l = "")
            : Person(f, l) {}
        PokerPlayer(const Person & p) : Person(p) {}
        virtual ~PokerPlayer() {}
        int Draw();
};

class BadDude : public Gunslinger, public PokerPlayer
{
    public:
        BadDude(string f = "", string l = "", int n = 0, double d = 0.0)
            : Person(f, l), Gunslinger(f, l, n, d) {}
        BadDude(Person & p, int n = 0, double d = 0.0)
            : Person(p), Gunslinger(p, n, d) {}
        BadDude(Gunslinger & g)
            : Person(g), Gunslinger(g) {}
        BadDude(PokerPlayer & p, int n = 0, double d = 0.0)
            : Person(p), Gunslinger(p, n, d) {}
        virtual ~BadDude() {}
        double GDraw() {return Gunslinger::Draw(); }
        int CDraw() { return PokerPlayer::Draw(); }
        void Show() const;
        void Set() { Gunslinger::Set(); }
};

#endif
