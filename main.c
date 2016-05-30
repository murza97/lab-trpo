#include <stdio.h>
#include "gipo.h"

int main()
{
    float x, y, z;
    printf("Введите x и y\n");
    scanf("%f %f", &x, &y);
    z = gipo(x, y);
    printf("%.0f\n", z);
    return 0;
}
