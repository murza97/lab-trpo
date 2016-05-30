#include <stdio.h>
#include <math.h>
#include "proc.h"

int sq_equation_glob(float a, float b, float c, float *x0, float *x1)
{
    float D;
    D = b*b - 4*a*c;
    if( D < 0 )
    {
        return 0;
    }
    else if( D == 0 )
    {
        *x0 = -b/(2*a);
        return 1;
    }
    else if( D > 0 )
    {
        *x0 =(-b + sqrt(D))/(2*a);
        *x1 =(-b - sqrt(D))/(2*a);
        return 2;
    }
}
