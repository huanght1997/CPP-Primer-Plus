#include <iostream>
#include "move.h"
Move::Move(double a, double b)
{
    x = a;
    y = b;
}

void Move::showmove() const
{
    std::cout << "(" << x << ", " << y << ")\n";
}

Move Move::add(const Move & m) const
{
    double tmp_x, tmp_y;
    tmp_x = m.x + x;
    tmp_y = m.y + y;
    return Move(tmp_x, tmp_y);
}

void Move::reset(double a, double b)
{
    x = a;
    y = b;
}
