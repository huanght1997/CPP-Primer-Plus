#include <iostream>
using std::cout;
#include "stonewt.h"

Stonewt::Stonewt(double lbs)
{
    stone = int (lbs) / Lbs_per_stn;    // integer division
    pds_left = int (lbs) % Lbs_per_stn + lbs - int(lbs);
    pounds = lbs;
    State = fPounds;
}

Stonewt::Stonewt(int stn, double lbs)
{
    stone = stn;
    pds_left = lbs;
    pounds = stn * Lbs_per_stn + lbs;
    State = Stone;
}

Stonewt::Stonewt()          // default constructor, wt = 0
{
    stone = pounds = pds_left = 0;
    State = iPounds;
}

Stonewt::~Stonewt()           // destructor
{
}

void Stonewt::setState(state mState)
{
    if (mState == Stone)
        State = Stone;
    else if (mState == iPounds)
        State = iPounds;
    else if (mState == fPounds)
        State = fPounds;
    else
    {
        cout << "Invalid state! Set it to iPounds.\n";
        State = iPounds;
    }
}

std::ostream & operator<<(std::ostream & os, const Stonewt & st)
{
    switch (st.State)
    {
        case Stonewt::Stone:
            os << st.stone << " stone, " << st.pds_left << " pounds\n";
            break;
        case Stonewt::iPounds:
            os << int (st.pounds + 0.5) << " pounds\n";
            break;
        case Stonewt::fPounds:
            os << st.pounds << " pounds\n";
            break;
    }
    return os;
}

Stonewt Stonewt::operator+(const Stonewt & s) const
{
    Stonewt sum(pounds + s.pounds);
    return sum;
}

Stonewt Stonewt::operator-(const Stonewt & s) const
{
    Stonewt diff(pounds - s.pounds);
    return diff;
}

Stonewt Stonewt::operator*(double n) const
{
    Stonewt result(n * pounds);
    return result;
}
