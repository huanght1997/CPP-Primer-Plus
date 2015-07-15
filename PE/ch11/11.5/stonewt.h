#ifndef STONEWT_H_
#define STONEWT_H_
#include <iostream>
class Stonewt
{
    public:
        enum state {Stone, iPounds, fPounds};
    private:
        enum {Lbs_per_stn = 14};            // pounds per stone
        int stone;                          // whole stones
        double pds_left;                    // fractional pounds
        double pounds;                      // entire weight in pounds
        state State;
    public:
        Stonewt(double lbs);                // constructor for double pounds
        Stonewt(int stn, double lbs);       // constructor for stone, lbs
        Stonewt();                          // default constructor
        ~Stonewt();
        void setState(state mState);        // set the state of Stonewt
        friend std::ostream & operator<<(std::ostream & os, const Stonewt & st);
        Stonewt operator+(const Stonewt & s) const;
        Stonewt operator-(const Stonewt & s) const;
        Stonewt operator*(double n) const;
        friend Stonewt operator*(double n, const Stonewt & s) {return s*n;}
};
#endif
