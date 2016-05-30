#include <stdio.h>
#include <math.h>

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

int main()
{
    float a, b, c, x0, x1;
    int roots;
    printf("Input a, b ,c\n");
    scanf("%f%f%f",&a,&b,&c);
    roots = sq_equation_glob(a, b, c, &x0, &x1);
    if( roots == 0 )
    {
        printf("No real roots\n");
    }
    else if( roots == 1 )
    {
        printf("x0 = %.1f\n", x0);
    }
    else if( roots == 2 )
    {
        printf("x0 = %.1f\n", x0);
        printf("x1 = %.1f\n", x1);
    }
}
