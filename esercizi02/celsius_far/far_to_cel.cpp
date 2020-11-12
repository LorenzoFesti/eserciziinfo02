#include "far_to_cel.hpp"

double tfarc(double tfar)
{
    double tcel;
    tcel=(tfar-32)/1.8;
    return tcel;
}
