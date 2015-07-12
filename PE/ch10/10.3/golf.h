// golf.h -- for usegolf.cpp
#ifndef GOLF_H_
#define GOLF_H_
class Golf
{
    private:
        static const int Len = 40;
        char fullname[Len];
        int handicap;
    public:
        Golf() {fullname[0]='\0', handicap=0;}
        Golf(const char * name, int hc);
        int setgolf(); // interactive version
        void sethandicap(int hc);
        void showgolf() const;
};
#endif
