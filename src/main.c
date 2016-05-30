#include <stdio.h>
#include "proc.h"
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
