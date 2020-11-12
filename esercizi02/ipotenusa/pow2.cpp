#include "pow2.hpp"

int pow2(int x)
{
    int res=1;
    int i;
    for (i=1; i<=2; i++)
    {
        res=res*x;
    }
    return res;
}
