#ifndef CLASSIC_H_
#define CLASSIC_H_
#include "cd.h"
class Classic : public Cd
{
    private:
        char primary[50];
    public:
        Classic(const char * pri, const char * per, const char * l,
                int n, double x);
        Classic(const Cd & d, const char * pri);
        Classic(const Classic & c);
        Classic();
        virtual void Report() const;
        Classic & operator=(const Classic & d);
};
#endif
